# GayriATAK nedir?
GayriATAK, okullardaki tahta kilitleme programlarından biri olan ATAK yani Akıllı Tahta İçin Akıllı Kontrol programını aynı bir öğretmen gibi flash takarak açma ve flashı çıkarak kapatmaya yarayan bir programdır. İki farklı sürümü bulunmaktadır.
>[!WARNING]
>Yakalanmanız durumunda alacağınız cezadan dolayı sorumluluk kabul etmiyoruz. Bu program flash içine atılarak çalışmıyor. _C:\Users\%username%\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup_ dizinine programı atmanız gerekiyor. Bu durumda bunu yaparken yakalanırsanız ceza alırsınız. Bu sebeple yakalanmamaya çalışın.

# GayriATAK ve GayriATAK_PullUp arasındaki fark
Standart GayriATAK öğretmen flashı gibi çalışır. Flash takıldığında tahtayı açar, çıkarıldığında kapatır. PullUp versiyon ise farklıdır. Flash takıldığında tahtayı açar ancak çıkarıldığında kapatmaz. Kapatmak için tekrar flashı takmak gerekir. Bu şekilde iki farklı sürüm olmasının sebebi uzun kullanımda flashların tahtada takılı kaldığı süre içerisinde ısınabilmesidir. Eğer flashın yanması gibi bir risk söz konusu ise PullUp versiyonun kullanılması önerilir. Bu farka rağmen iki sürüm de tamamen aynı şekilde kurulur ve kulanılır.

# Kullanım
### Hazırlık 
Şuan bulunduğunuz github sayfasındaki yeşil renkli "Code" butonuna basın, Download ZIP seçneğini seçin ve repoyu indirin. Ardından indirdiğiniz zip dosyasını ayıklayın. Ayıkladığınız klasöre girin. İki farklı klasör karşınıza çıkıyor. İstediğiniz sürüme ait klasöre girin. Build içinde GayriATAK[^1] dosyası var. Bu dosya ve bununla beraber bir gerideki _"Setup.bat"_ ve _"Start.bat"_[^2] dosyalarını bir flashın içine atın. Unutmayın bu flash taytayı açmanızı sağlayan flash olacak. 
> [!WARNING]
> Dosyaları flashın içinde ayrı bir klasöre koymayın ve hepsinin aynı yerde olduğundan emin olun. Örnek:
>
>  ![Örnek](https://github.com/sstroke/GayriATAK/blob/main/image.png)

Şimdi tek yapmanız gereken akıllı tahtaya fiziksel erişim sağlamak. Bunun için bir öğretmenin flashını unutmasını bekleyebilirsiniz. 

### Kurulum
Tahtaya erişim sağladıktan sonra GayriATAK[^1] dosyasını C:\Users\%username%\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup dizinine atmamız ve flashın içinde _"gayriATAK_Data"_ adında bir klasör oluşturmamız lazım. Bu klasör programın flashımızı tanımasını sağlayacak[^3]. Tabi bunları biz yapmayacağız. _"Setup.bat"_ isimli dosyayı çalıştırın. Tüm işi sizin için yapsın. Anahtar dosyayı flashınız içinde gördükten sonra _"Start.bat"_ adlı dosyayı çalıştırın. Ekran gidip gelebilir rahat olun tahta bozulmadı. Şimdi flashınızı çekin. Hayırlı olsun. Flasıhınız içindeki anahtar dosya dışındaki diğer dosyaları silebilirsiniz. Aman diyim yakalanmayın.

### Yeni flash oluşturma
Tahtayı açabilecek flashlar arasına bir tane daha katmak istiyorsanız bunu yapmak çok kolay. Sadece anahtar dosyayı yani _"gayriATAK_Data"_ dosyasını keniniz oluşturun. Artık o flash da tahtayı açabilecek. Anahtar dosyayı oluşturuken büyük-küşük harf farkına dikkat edin.

# İletişim
Revolt Chat : sstroke_

<a href="https://www.youtube.com/channel/UCtiQijOmQlKlMS6Vx_yUIAg" target="blank"><img src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/youtube.svg" alt="sstroke_" height="30" width="40" /></a>
<a href="https://discord.gg/6EDVzwqxtH" target="blank"><img src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/discord.svg" alt="sstroke_" height="30" width="40" /></a>

[^1]: Diğer sürümü seçtiyseniz GayriATAK_PullUp olmalı.
[^2]: Sadece seçtiğiniz sürüm klasörünün içindeki dosyaları kullanın her iki sürümde de aynı dosyalar var ama işlerveri farklı.
[^3]: Öğretmenin flashını iptal etmiyoruz _"gayriATAK_Data"_ dosyası olmasa bile tahtayı açabilecekler :D
