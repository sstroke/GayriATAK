#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    FreeConsole();

    int checkDriveDelay = 1000;

    while (1){
        while (1){
            WIN32_FIND_DATA findFileData;  
            HANDLE hFind_D = FindFirstFile("D:\\gayriATAK_Data", &findFileData);
            HANDLE hFind_E = FindFirstFile("E:\\gayriATAK_Data", &findFileData);
            HANDLE hFind_F = FindFirstFile("F:\\gayriATAK_Data", &findFileData);
            HANDLE hFind_G = FindFirstFile("G:\\gayriATAK_Data", &findFileData);
            
            if (hFind_D != INVALID_HANDLE_VALUE || hFind_E != INVALID_HANDLE_VALUE ||  
                hFind_F != INVALID_HANDLE_VALUE || hFind_G != INVALID_HANDLE_VALUE){

                system("taskkill /f /IM servisatk.exe");
                system("taskkill /f /IM explorer.exe");
                system("start explorer.exe"); 

                while(1){
                    WIN32_FIND_DATA findFileData;
                    HANDLE hFind_D = FindFirstFile("D:\\gayriATAK_Data", &findFileData); 
                    HANDLE hFind_E = FindFirstFile("E:\\gayriATAK_Data", &findFileData);
                    HANDLE hFind_F = FindFirstFile("F:\\gayriATAK_Data", &findFileData);
                    HANDLE hFind_G = FindFirstFile("G:\\gayriATAK_Data", &findFileData);
                    
                    if (hFind_D == INVALID_HANDLE_VALUE && hFind_E == INVALID_HANDLE_VALUE && 
                        hFind_F == INVALID_HANDLE_VALUE && hFind_G == INVALID_HANDLE_VALUE){
                        break;
                    }
                }
                break;
            }
            Sleep(checkDriveDelay);
        }

        while (1){
            WIN32_FIND_DATA findFileData;  
            HANDLE hFind_D = FindFirstFile("D:\\gayriATAK_Data", &findFileData);
            HANDLE hFind_E = FindFirstFile("E:\\gayriATAK_Data", &findFileData);
            HANDLE hFind_F = FindFirstFile("F:\\gayriATAK_Data", &findFileData);
            HANDLE hFind_G = FindFirstFile("G:\\gayriATAK_Data", &findFileData);
            
            if (hFind_D != INVALID_HANDLE_VALUE || hFind_E != INVALID_HANDLE_VALUE ||  
                hFind_F != INVALID_HANDLE_VALUE || hFind_G != INVALID_HANDLE_VALUE){

                system("start servisatk.exe"); 

                while(1){
                    WIN32_FIND_DATA findFileData;
                    HANDLE hFind_D = FindFirstFile("D:\\gayriATAK_Data", &findFileData); 
                    HANDLE hFind_E = FindFirstFile("E:\\gayriATAK_Data", &findFileData);
                    HANDLE hFind_F = FindFirstFile("F:\\gayriATAK_Data", &findFileData);
                    HANDLE hFind_G = FindFirstFile("G:\\gayriATAK_Data", &findFileData);
                    
                    if (hFind_D == INVALID_HANDLE_VALUE && hFind_E == INVALID_HANDLE_VALUE && 
                        hFind_F == INVALID_HANDLE_VALUE && hFind_G == INVALID_HANDLE_VALUE){
                        break;
                    }
                }
                break;
            }
            Sleep(checkDriveDelay);
        }
    }

    return 0;
}