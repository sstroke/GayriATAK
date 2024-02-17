#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    FreeConsole();

    int checkDriveDelay = 1000; //Millisecond (1 second = 1000 milliseconds)

    //Enter dead loop
    while (1){
        //Enter dead loop for drive insertion
        while (1){
            WIN32_FIND_DATA findFileData;  
            HANDLE hFind_D = FindFirstFile("D:\\antiATAK_Data", &findFileData); //Check D:\ drive
            HANDLE hFind_E = FindFirstFile("E:\\antiATAK_Data", &findFileData); //Check E:\ drive
            HANDLE hFind_F = FindFirstFile("F:\\antiATAK_Data", &findFileData); //Check F:\ drive
            HANDLE hFind_G = FindFirstFile("G:\\antiATAK_Data", &findFileData); //Check G:\ drive
            
            if (hFind_D != INVALID_HANDLE_VALUE || hFind_E != INVALID_HANDLE_VALUE ||  
                hFind_F != INVALID_HANDLE_VALUE || hFind_G != INVALID_HANDLE_VALUE){

                /* 
                Check if any of drives included the key file.
                If a drive included the key file(antiATAK_Data),
                the FindFirstFile() WON'T return INVALID_HANDLE_VALUE
                but if the FindFirstFile() returned INVALID_HANDLE_VALUE
                that means that drive isn't include the key file or the
                dirve isn't exist.
                */
                
                //If any of drives included the key file...
                system("taskkill /f /IM servisatk.exe"); //Stop the servisatk.exe
                system("taskkill /f /IM explorer.exe"); //Stop explorer.exe
                system("start explorer.exe"); //Start explorer.exe

                /*
                We restarted the explorer.exe because when we stop the process
                of servisatk.exe, the task bar won't be appear and this will 
                cause the device not to be functional. When we restarted
                the explorer.exe, the task bar will be shown up.
                */

                break; //Stop the dead loop
            }
            Sleep(checkDriveDelay); //Wait for next check
        }

        //Enter dead loop to detect disconnection
        while (1){
            WIN32_FIND_DATA findFileData;
            HANDLE hFind_D = FindFirstFile("D:\\antiATAK_Data", &findFileData); //Same things
            HANDLE hFind_E = FindFirstFile("E:\\antiATAK_Data", &findFileData);
            HANDLE hFind_F = FindFirstFile("F:\\antiATAK_Data", &findFileData);
            HANDLE hFind_G = FindFirstFile("G:\\antiATAK_Data", &findFileData);   

            if (hFind_D == INVALID_HANDLE_VALUE && hFind_E == INVALID_HANDLE_VALUE && 
                hFind_F == INVALID_HANDLE_VALUE && hFind_G == INVALID_HANDLE_VALUE){
                
                /*
                Check the variables. If ALL of them are equal INVALID_HANDLE_VALUE,
                that means there is no drive that includes the key file connetted to device
                */
                
                system("start servisatk.exe"); //Start servisatk.exe again
                break; //Stop dead loop
            }
            Sleep(checkDriveDelay); //Wait for next check
        }
    }

    return 0;
}
