/* 
Bedirhan BÜYÜKÖZ & Mehmet Volkan VURAL




***************Beykoz  Üniversitesi  Kantin  Yazılımı********************


Kantin Menüsü Aşağıdadır.

GÖZLEME ÇEŞİTLERİ------1-------------------------------------------------------

peynirli gözleme                    9.00 tl 
peynirli-sucuklu gözleme           10.00 tl 
patatesli gözleme                   9.00 tl 
patatesli peynirli gözleme         10.00 tl 
Otlu gözleme                        8.00 tl 
Otlu-Peynirli gözleme              10.00 tl

SOĞUK İÇECEKLER--------2-------------------------------------------------------

Ayran 200ml                         2.50 tl 
Meşrubatlar(kutu) 330 ml            3.50 tl 
Meyveli soda 200 ml                 2.50 tl 
sade soda 200ml                     2.00 tl
su 500ml                            1.25 tl
limonata 330ml                      2.50 tl 
meysu meyve suyu                    2.50 tl 
gazoz 200ml                         2.50 tl 
Kido süt 200ml                      2.50 tl

SICAK İÇECEKLER--------3---------------------------------------------------------

çay                                1.50 tl
büyük çay                          3.00 tl
bitki çayları                      2.50 tl
americano                          4.50 tl
cappucino                          5.00 tl
Latte                              5.00 tl 
Espresso                           4.00 tl
Aromalı kahve                      6.00 tl
Türk kahvesi                       4.00 tl
Sıcak çikolata                     4.50 tl


SALATALAR--------------4----------------------------------------------------------

Yeşil salatalar                    8.00 tl
Peynirli salatalar                10.00 tl

MENÜLER----------------5----------------------------------------------------------

Hamburger+patates+içecek          15.00 tl
Cheeseburger+patates+içecek       15.00 tl
Patso+içecek                      12.00 tl
Peynirli Gözleme+içecek           12.00 tl
Peynirli sucuklu Gözleme+içecek   12.00 tl
Patates gözleme+içececek          12.00 tl
Otlu peynirli gözleme + içecek    12.00 tl

ŞEKERLEMELER----------6----------------------------------------------------------

Polo                              2.50 tl
Mentos                            2.50 tl

KAHVALTILAR-----------7---------------------------------------------------------- 

SALATALIK 60 GR                   1.50 tl
Haşlanmış Yumurta Adet            1.50 tl
Salam 30gr                        2.00 tl
Kaşar 30gr                        2.00 tl
bal 10 gr                         2.00 tl
Tereyağı 10gr                     2.00 tl
Beyaz peynir 30 gr                2.00 tl

HAMUR İŞİ-------------8----------------------------------------------------------

Poğaça Çeşitleri                  2.00 tl
Açma                              2.00 tl
Simit                             2.00 tl

OMLETLER--------------9----------------------------------------------------------

Beyaz peynirli omlet             7.00 tl
Kaşarlı omlet                    8.00 tl
Karışık omlet                    9.00 tl
Menemen                         10.00 tl

TOST ÇEŞİTLERİ------10----------------------------------------------------------- 

Kaşarlı Tost                     6.00 tl
Çift Kaşarlı tost                7.00 tl
Karışık tost                     7.00 tl
Ayvalık tost                     7.00 tl
Pizza tost                       7.00 tl

BURGER MENÜ--------11------------------------------------------------------------

Hamburger+patates               12.00 tl
Cheeseburger+patates            13.00 tl
patso                            9.00 tl

MEYVELER----------12-------------------------------------------------------------

Elma adet                       2.00 tl
armut adet                      2.00 tl
portakal adet                   2.00 tl

BİSKÜVİ/GOFRET---13--------------------------------------------------------------

Albeni                          2.25 tl
albeni atıştırmaklık            2.50 tl
benimo lokmalık                 2.50 tl
biskrem kakaolu                 2.00 tl
Browni Intense                  2.50 tl
Burçak                          2.50 tl
Canga                           2.50 tl
Canpare Çikolata                2.50 tl
Tutku 110 gr                    2.50 tl
Caramio Karamelli Çikolatalı    2.50 tl
Cin lokmalık                    2.00 tl
Cocostar                        2.00 tl
Crax Çubuk Kraker               2.00 tl
Çizi Peynirli                   2.50 tl
Çizi sade                       2.50 tl
Çokonat gofret                  2.50 tl
Dido Sütlü Çikolatalı Gofret    2.50 tl
Eti Burçak Sütlü Çikolatalı     2.50 tl
Eti çay keyfi ÇİKOLATALI        2.50 tl
Eti form                        1.50 tl
Saklıköy                        2.50 tl
Eti karam                       2.50 tl
Eti popkek                      1.75 tl
Ülker Çikolatalı gofret 33gr    2.50 tl
Halley atıştırmalık             2.50 tl
Hanımeller                      2.50 tl
İkram Çikolata                  2.50 tl
Laviva Bar                      2.50 tl
Probis Atıştırmalık             2.50 tl
Kuruyemiş Karışık               3.50 tl

GÜNÜN MENÜSÜ---14--------------------------------------------------------------

Çorba                           1.50 tl
Yardımcı Yemek                  3.00 tl
Ana Yemek                       8.00 tl
Ana Yemek Sebzeli               6.00 tl
Salata / Meyve                  5.00 tl
Tabldot                        15.00 tl  

-------------------------------------------------------------------------------

*/
#include<stdio.h>        //Kullandığımız headerlar
#include<stdlib.h>
#include<locale.h>



int main()
{
	int takip;//Stoğu görmek ve takibini kullanıcıdan istemek için kullandık.
	int istek;//isteği switch komutunda kullanarak kullanıcın hangi ürünlerini görmek istediğini bulmak için kullandık.
	int istek2;//ifler içinde kullanailmek için kullandık (koşullara bağlı olarak)
	int satis;//kar hesaplamada kullandık.
	int adet;//kalan ürün miktarını belirten değişken.
	
	float cayalistl=50,buyukCayalistl=50,bitkiCayialistl=50,americanoalistl=50,cappucinoalistl=50,lattealistl=50,espressoalistl=50,aromaliKahvealistl=50,turkKahvesialistl=50,sicakCikolataalistl=50;
	float peynirliGozlemealistl=25,kar,peynirliSucukluGozlemealistl=25,patatesliGozlemealistl=25,patatesliPeynirliGozlemealistl=25,otluGozlemealistl=25,otluPeynirliGozlemealistl=25;//Gözleme Çeşitleri alis fiyatlari
	float ayranalistl=50,mesrubatlarKutualistl=50,meyveliSodaalistl=50,sadeSodaalistl=50,Sualistl=50,Limonataalistl=50,meysuMeyveSuyualistl=50,Gazozalistl=50,kidoSutalistl=50;//Soguk içecekler alis fiyatlari
	float peynirliSalataalistl=25,yesilSalataalistl=25;
	float menemenalistl=25,beyazPeynirliOmletalistl=25,kasarliOmletalistl=25,karisikOmletalistl=25;//Menemen çeşitleri alış fiyatı
	float pizzaTostalistl=25,kasarliTostalistl=25,ciftKasarliTostalistl=25,ayvalikTostalistl=25,karisikTostalistl=25;//Tost çeşitleri alış fiyatı
	float otlupeynirligozlemeicecekalistl=50,hamburgerpatatesicecekalistl=50,cheeseburgerpatatesicecekalistl=50,patsoicecekalistl=50,peynirligozlemeicecekalistl=50,peynirlisucuklugozlemeicecekalistl=50,patatesgozlemeicecekalistl=50;//Menüler alış fiyatı
	float poloalistl=50,mentosalistl=50;//Şekerlemeler
	float salatalikalistl=50,haslanmisyumurtaalistl=50,salamalistl=50,kasaralistl=50,balalistl=50,tereyagialistl=50,beyazPeyniralistl=50;//Kahvaltılar alış tl
	float pogacaCesitlerialistl=50,acmaalistl=50,simitalistl=50;//Hamur İşi çeşitleri alış tl
	float hamburgerPatatesalistl=25,cheeseburgerPatatesalistl=25,patsoalistl=25;//Burger Menü
	float elmaalistl=25,portakalalistl=25,armutalistl=25;//Meyve çeşitleri alış tl
	float albenialistl=25,albeniAtistirmalikalistl=25,benimoLokmalikalistl=25,biskremKakaolualistl=25,browniIntensealistl=25,burcakalistl=25,cangaalistl=25,canpareCikolataalistl=25,tutkualistl=25,caramioalistl=25,cinalistl=25,cocostaralistl=25,craxalistl=25,ciziPeynirlialistl=25,ciziSadealistl=25,cokonatGofretalistl=25,didoalistl=25,etiBurcakSutluCikolatalialistl=25;//Bisküvi/Gofret çeşitleri alış fiyatı tl
	float etiCaykeyfiCikolatalialistl=25,etiFormalistl=25,saklikoyalistl=25,etiKaramalistl=25,etiPopkekalistl=25,ulkerCikolataliGofretalistl=25,halleyAtistirmailalistl=25,hanimelleralistl=25,ikramalistl=25,lavivaBaralistl=25,probisalistl=25,kuruyemisalistl=25;//Biskuvi/Gofret çeşitleri alış fiyatı
	float anayemeketlialistl=25,corbaalistl=25,yardimciyemekalistl=25,anayemeksebzelialistl=25,salatameyvealistl=25,tabldotalistl=25;//GÜNÜN MENÜSÜ alış fiyatı tl
	
	int peynirliGozleme=50,peynirliSucukluGozleme=50,patatesliGozleme=50,patatesliPeynirliGozleme=50,otluGozleme=50,otluPeynirliGozleme=50;//Gözleme Çeşitleri
	int ayran=100,mesrubatlarKutu=100,meyveliSoda=100,sadeSoda=100,Su=100,Limonata=100,meysuMeyveSuyu=100,Gazoz=100,kidoSut=100;//Soğuk içecekler
	int cay=100,buyukCay=100,bitkiCayi=100,americano=100,cappucino=100,latte=100,espresso=100,aromaliKahve=100,turkKahvesi=100,sicakCikolata=100;//Sıcak içecekler
	int kasarliTost=50,ciftKasarliTost=50,ayvalikTost=50,pizzaTost=50,karisikTost=50;//Tost çeşitleri
	int beyazPeynirliOmlet=50,kasarliOmlet=50,karisikOmlet=50,menemen=50;//Menemen çeşitleri
	int elma=50,portakal=50,armut=50;//Meyve çeşitleri
	int hamburgerPatates=50,cheeseburgerPatates=50,patso=50;//Burger Menü
	int anayemeketli=50,corba=50,yardimciyemek=50,anayemeksebzeli=50,salatameyve=50,tabldot=50;//GÜNÜN MENÜSÜ
	int albeni=50,albeniAtistirmalik=50,benimoLokmalik=50,biskremKakaolu=50,browniIntense=50,burcak=50,canga=50,canpareCikolata=50,tutku=50,caramio=50,cin=50,cocostar=50,crax=50,ciziPeynirli=50,ciziSade=50,cokonatGofret=50,dido=50,etiBurcakSutluCikolatali=50;//Bisküvi/Gofret çeşitleri
	int etiCaykeyfiCikolatali=50,etiForm=50,saklikoy=50,etiKaram=50,etiPopkek=50,ulkerCikolataliGofret=50,halleyAtistirmail=50,hanimeller=50,ikram=50,lavivaBar=50,probis=50,kuruyemis=50;
	int peynirliSalata=50,yesilSalata=50;//salata çeşitleri
	int polo=100,mentos=100;//Şekerlemeler
	int hamburgerpatatesicecek=100,cheeseburgerpatatesicecek=100,patsoicecek=100,peynirligozlemeicecek=100,peynirlisucuklugozlemeicecek=100,patatesgozlemeicecek=100,otlupeynirligozlemeicecek=100;//Menüler
	int salatalik=100,haslanmisyumurtaadet=100,salam=100,kasar=100,bal=100,tereyagi=100,beyazPeynir=100;//Kahvaltılar
	int pogacaCesitleri=100,acma=100,simit=100;//Hamur İşi

setlocale(LC_ALL, "Turkish");// Türkçe Karakter Kütüphanesini Atama

printf("\t----- BEYKOZ ÜNİVERSİTESİ KANTİN  MENÜSÜ -------\n\n");// Genel menümüz  
printf(" Gözleme çeşitlerini görmek için         1 \n Soğuk içeceklerin çeşidini görmek için  2\n");
printf(" Sıcak içeceklerin çeşidini görmek için  3\n Salata çeşitlerini görmek için          4\n Menüler görmek için                     5\n");
printf(" Şekelerlemerin çeşidini görmek için     6\n Kahvaltılık görmek için                 7\n Hamur işi çeşitleri görmek için         8\n");
printf(" Omletleri görmek için                   9\n Tost çeşitleri görmek için             10\n Burger menu görmek için                11\n Meyve çeşitlerini görmek için          12\n");
printf(" Bisküvi/Gofret çeşitlerini görmek için 13\n Günün menüsünü görmek için             14'e basınız...\n");


scanf("%d",&istek);//
system("cls");//Ekran Yenileme
switch(istek) // ilgili bölüme tıklayınca daha çok çeşitler açılıcak komut
{
	case 1://CASE 1--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
printf("\tGÖZLEME ÇEŞİTLERİ\n\n Peynirli Gözleme                  9.00 tl (Stok takibi için 1)\n Peynirli-Sucuklu Gözleme         10.00 tl (Stok takibi için 2)\n Patatesli Gözleme                 9.00 tl (Stok takibi için 3)\n Patatesli Peynirli Gözleme       10.00 tl (Stok takibi için 4)\n Otlu Gözleme                      8.00 tl (Stok takibi için 5)\n Otlu-Peynirli Gözleme            10.00 tl (Stok takibi için 6)\n\n");
scanf("%d",&istek2);
if(istek2==1)
{
	system("cls");
	printf("\tPEYNİRLİ GÖZLEME\n\nPeynirli gözleme  bugün  %d'taneydi\n",peynirliGozleme); //listedeki ilk ürün çeşidinden bir tanesini gösterir
	printf("Şu anda kalan Peynirli gözleme adedi öğrenmek için bugün kaç tane satıldığını girin: ");//kalan adedi gösterir.
	scanf("%d",&satis);//satış adedinin girilmesi isteniyor
		if(satis>=50) //satış adedi 50'den fazlaysa gözleme kalmadığını gösteriyor
	{
		printf("Elinizde Peynirli Gözleme kalmamıştır");
		break;
	}
	kar=(float)satis*9.00-peynirliGozlemealistl;//kar hesaplama burada ilk baştaki tanımlanan yani toptan alınan fiyat üzerinden satışı hesaplanmıştır.
	adet=peynirliGozleme-satis;//kaç adet satıldığını gösteren işlem 
	printf("%d tane peynirli gözleme kalmıştır\n",adet);//kalan adedi gösterir.
		if(kar<0)//edilen zararı göserir.
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);//zarar ettiğimizi gösterir.
		break;
	}
	printf("Net kar= %.2ftl",kar);//toplam kar  göserir.
	
	
}
	else if(istek2==2)//eğer listedeki ikinci ürün seçilirse onu gösterir. Yukarıdaki ile aynı işlemler tekrarlanır.
{
	system("cls");
	printf("\tPEYNİRLİ-SUCUKLU GÖZLEME\n\nPeynirli-sucuklu gözleme  bugün  %d'taneydi\n",peynirliSucukluGozleme);
	printf("Şu anda kalan Peynirli-sucuklu gözleme adedi öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde Peynirli-sucuklu gözleme kalmamıştır");
		break;
	}
    kar=(float)satis*10.00-peynirliSucukluGozlemealistl;                                       
	adet=peynirliSucukluGozleme-satis;
	printf("%d tane peynirli gözleme kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}

	printf("Tebrikler! Net kar= %.2ftl",kar);
}
	else if(istek2==3)
	{
		system("cls");
	printf("\tPATATESLİ GÖZLEME\n\nPatatesli Gözleme  bugün  %d'taneydi\n",patatesliGozleme);
	printf("Şu anda kalan Patatesli Gözleme adedi öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);

	if(satis>=50)
	{
		printf("Elinizde Patatesli Gözleme kalmamıştır");
		break;
	}
	kar=(float)satis*9.00-patatesliGozlemealistl; 
	adet=patatesliGozleme-satis;
	printf("%d tane Patatesli Gözleme kalmıştır\n",adet);
		if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	
	}
		else if(istek2==4)
	{
		system("cls");
	printf("\tPATATESLİ PEYNİRLİ GÖZLEME\n\nPatatesli Peynirli Gözleme  bugün  %d'taneydi\n",patatesliPeynirliGozleme);
	printf("Şu anda kalan Patatesli Peynirli Gözleme adedi öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde  Peynirli Gözleme kalmamıştır");
		break;
	}
	kar=(float)satis*9.00-peynirliSucukluGozlemealistl; 
	adet=patatesliPeynirliGozleme-satis;
	printf("%d tane Patatesli Peynirli gözleme kalmıştır\n",adet);
		if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);

}
		else if(istek2==5)
	{
		system("cls");
	printf("\tOTLU GÖZLEME\n\nPatatesli Otlu Gözleme  bugün  %d'taneydi\n",otluGozleme);
	printf("Şu anda kalan Patatesli Peynirli Gözleme adedi öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde Otlu  Gözleme kalmamıştır");
		break;
	}
	
	adet=otluGozleme-satis;
	kar=(float)satis*8.00-otluGozlemealistl; 
	printf("%d tane Otlu Gözleme kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
printf("Tebrikler! Net kar= %.2ftl",kar);
	
}
	else if(istek2==6)
	{
		system("cls");
	printf("\tOTLU PEYNİRLİ GÖZLEME\n\n Otlu Peynirli Gözleme  bugün  %d'taneydi\n",otluPeynirliGozleme);
	printf("Şu anda kalan Otlu Peynirli Gözleme  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde Otlu Peynirli Gözleme kalmamıştır");
		break;
	}
	kar=(float)satis*10.00-otluPeynirliGozlemealistl; 
	adet=otluPeynirliGozleme-satis;
	printf("%d tane Otlu Peynirli Gözleme kalmıştır\n",adet);
		if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);	
}
//case 1 sonu (Gözleme Çeşitleri)

	break;
	
	case 2://CASE 2-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
printf("   ---------SOĞUK İÇECEKLER-----------\n\n Ayran 200ml                  2.50 tl (Stok Takibi için 1)\n Meşrubatlar(kutu) 330 ml     3.50 tl (Stok Takibi için 2)\n Meyveli soda 200 ml          2.50 tl (Stok Takibi için 3)\n Sade Soda 200ml              2.00 tl (Stok Takibi için 4)\n Su 500ml                     1.25 tl (Stok Takibi için 5)\n Limonata 330ml               2.50 tl (Stok Takibi için 6)\n Meyve Suyu                   2.50 tl (Stok Takibi için 7)\n Gazoz 200ml                  2.50 tl (Stok Takibi için 8)\n Kido süt 200ml               2.50 tl (Stok Takibi için 9)\n");
scanf("%d",&istek2);
if(istek2==1)
{
	system("cls");
	printf("\tAYRAN\n\nAyran  bugün  %d'taneydi\n",ayran);
	printf("Şu anda kalan ayran öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç ayran kalmamıştır");
		break;
	}
	
	adet=ayran-satis;
	printf("%d tane ayran kalmıştır\n",adet);
	kar=(float)satis*2.50-ayranalistl; 
		if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	
	break;
}//if sonu
if(istek2==2)
{
	system("cls");
	printf("\tMEŞRUBATLAR(KUTU)\n\nMeşrubatlar(kutu)  bugün  %d'taneydi\n",mesrubatlarKutu );
	printf("Şu anda kalan Meşrubatlar(kutu) öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Meşrubat kalmamıştır");
		break;
	}
	
	adet=mesrubatlarKutu-satis;
	kar=(float)satis*3.50-mesrubatlarKutualistl; 
		printf("%d tane Meşrubat kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}

	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu

if(istek2==3)
{
	system("cls");
	printf("\tMEYVELİ SODA\n\nMeyveli Soda  bugün  %d'taneydi\n",meyveliSoda );
	printf("Şu anda kalan Meyveli Soda öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Meyveli Soda kalmamıştır");
		break;
	}
	adet=mesrubatlarKutu-satis;
	kar=(float)satis*2.50-meyveliSodaalistl; 
		printf("%d tane Meyveli Soda kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}

	printf("Tebrikler! Net kar= %.2ftl",kar);
	
	break;
	
	
}//if sonu
if(istek2==4)
{
	system("cls");
	printf("\tSADE SODA\n\nSade Soda  bugün  %d'taneydi\n",sadeSoda );
	printf("Şu anda kalan Sade Soda  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Sade Soda  kalmamıştır");
		break;
	}
	
	adet=sadeSoda-satis;
	kar=(float)satis*2.00-sadeSodaalistl; 
	printf("%d tane Sade Soda kalmıştır\n",adet);
		if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;

}//if sonu
if(istek2==5)
{
	system("cls");
	printf("\tSU\n\nSu  bugün  %d'taneydi\n",Su );
	printf("Şu anda kalan Su  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Su  kalmamıştır");
		break;
	}
	
	adet=Su -satis;
	printf("%d tane Su kalmıştır\n",adet);
		kar=(float)satis*1.25-Sualistl; 
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}

		printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
}//if sonu
if(istek2==6)
{
	system("cls");
	printf("\tLİMONATA\n\nLimonata bugün  %d'taneydi\n",Limonata );
	printf("Şu anda kalan Limonata  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Limonata kalmamıştır");
		break;
	}
	adet=Limonata -satis;
	
	kar=(float)satis*2.50-Limonataalistl; 
		printf("%d tane Limonata kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}

		printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
}//if sonu
if(istek2==7)
{
	system("cls");
	printf("\tMEYSU MEYVE SUYU\n\nMeysu Meyve Suyu bugün  %d'taneydi\n",meysuMeyveSuyu );
	printf("Şu anda kalan Meysu Meyve Suyu  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Meysu Meyve Suyu kalmamıştır");
		break;
	}
	kar=(float)satis*2.50-meysuMeyveSuyualistl; 
	adet=meysuMeyveSuyu -satis;
	printf("%d tane Meysu Meyve Suyu kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
}//if sonu
if(istek2==8)
{
	system("cls");
	printf("\tGAZOZ\n\nGazoz bugün  %d'taneydi\n",Gazoz  );
	printf("Şu anda kalan Gazoz   öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Gazoz  kalmamıştır");
		break;
	}
		kar=(float)satis*2.50-Gazozalistl; 
	adet=Gazoz  -satis;
	printf("%d tane Gazoz   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	
	break;
	
}//if sonu
if(istek2==9)
{
	system("cls");
	printf("\tKİDO SÜT\n\nKido Süt bugün  %d taneydi\n",kidoSut );
	printf("Şu anda kalan Kido Süt   öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Kido Süt  kalmamıştır");
		break;
	}
	adet=kidoSut-satis;
	kar=(float)satis*2.50-kidoSutalistl; 
	printf("%d tane Kido Süt  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break; 	
}//if sonu
//Case 2 sonu (Soğuk içecekler)


	case 3://CASE 3---------------------------------------------------------------------------------------------------------------------
printf("      ---------SICAK İÇECEKLER----------\n\n Çay              1.50 tl (Stok Takibi için 1)\n Büyük çay        3.50 tl (Stok takibi için 2)\n Bitki Çayları    2.50 tl (Stok takibi için 3)\n Americano        4.50 tl (Stok takibi için 4)\n Cappucino        5.00 tl (Stok takibi için 5)\n Latte            5.00 tl (Stok Takibi için 6)\n Espresso         6.00 tl (Stok Takibi için 7)\n Aromalı Kahve    2.50 tl (Stok Takibi için 8)\n Sıcak Çikolata   4.50 tl (Stok Takibi için 9)\n");
scanf("%d",&istek2);
if(istek2==1)
{
	system("cls");
	printf("\tÇAY\n\nÇay  bugün  %d'taneydi\n",cay);
	printf("Şu anda kalan Çay öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Çay kalmamıştır");
		break;
	}
	adet=cay-satis;
	kar=(float)satis*1.50-cayalistl;
	printf("%d tane Çay kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
 if(istek2==2)
{
	system("cls");
	printf("\tBüyük Çay\n\nBüyük Çay  bugün  %d'taneydi\n",buyukCay);
	printf("Şu anda kalan Büyük Çay öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Büyük Çay kalmamıştır");
		break;
	}
	adet=buyukCay-satis;
	kar=(float)satis*3.00-buyukCayalistl;
	printf("%d tane Büyük Çay kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}//if sonu

 if(istek2==3)
{
	system("cls");
	printf("\tBitki Çayları\n\nBitki Çayları  bugün  %d'taneydi\n",bitkiCayi );
	printf("Şu anda kalan Bitki Çayları öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Bitki Çayı kalmamıştır");
		break;
	}
	adet=bitkiCayi-satis;
	kar=(float)satis*2.50-bitkiCayialistl;
	printf("%d tane Bitki Çayı kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
 if(istek2==4)
{
	system("cls");
	printf("\tAmericano\n\nAmericano bugün  %d'taneydi\n",americano );
	printf("Şu anda kalan Americano  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde Americano  kalmamıştır");
		break;
	}
	adet=americano-satis;
	kar=(float)satis*4.50-americanoalistl;
	printf("%d tane Americano kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
 if(istek2==5)
{
	system("cls");
	printf("\tCappucino\n\nCappucino  bugün  %d'taneydi\n",Su );
	printf("Şu anda kalan Cappucino  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Cappucino  kalmamıştır");
		break;
	}
	adet=cappucino -satis;
	kar=(float)satis*5.00-cappucinoalistl;
	printf("%d tane Cappucino kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
 if(istek2==6)
{
	system("cls");
	printf("\tLatte\n\nLatte bugün  %d'taneydi\n",latte );
	printf("Şu anda kalan Latte  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Latte kalmamıştır");
		break;
	}
	adet=latte -satis;
	kar=(float)satis*5.00-lattealistl;
	printf("%d tane Latte kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
 if(istek2==7)
{
	system("cls");
	printf("\tESPRESSO\n\nEspresso bugün  %d'taneydi\n",espresso );
	printf("Şu anda kalan Espresso  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç espresso Suyu kalmamıştır");
		break;
	}
	adet=espresso -satis;
	kar=(float)satis*4.00-espressoalistl;
	printf("%d tane Espresso kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
 if(istek2==8)
{
	system("cls");
	printf("\tAROMALI KAHVE\n\nAromalı Kahve bugün  %d'taneydi\n",aromaliKahve  );
	printf("Şu anda kalan Aromalı Kahve   öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Aromalı Kahve  kalmamıştır");
		break;
	}
	adet=aromaliKahve -satis;
	kar=(float)satis*6.00-aromaliKahvealistl;
	printf("%d tane Aromalı Kahve kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu



 if(istek2==9)
{
	system("cls");
	printf("\tSICAK ÇİKOLATA\n\nSıcak Çikolata bugün  %d taneydi\n",sicakCikolata  );
	printf("Şu anda kalan Sıcak Çikolata   öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Sıcak Çikolata  kalmamıştır");
		break;
	}
	adet=sicakCikolata-satis;
	kar=(float)satis*4.50-sicakCikolataalistl;
	printf("%d tane Sıcak Çikolata kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}//if sonu
//Case 3 sonu (sıcak içecekler)



break;
case 4://CASE 4----------------------------------------------------------------------------------------------------------------------------------------------------------
printf("      ----------SALATALAR---------\n\n Yeşil Salata                8.00 tl (Stok Takibi için 1)\n Peynirli Salatalar        10.00 tl (Stok takibi için 2)\n");
scanf("%d",&istek2);
if(istek2==1)
{
	system("cls");
	printf("\tYeşil Salata\n\nYeşil Salata  bugün  %d'taneydi\n",yesilSalata);
	printf("Şu anda kalan Yeşil Salata öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Yeşil Salata kalmamıştır");
		break;
	}
	adet=yesilSalata-satis;
	kar=(float)satis*8.00-yesilSalataalistl;
	printf("%d tane Yeşil Salata kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
if(istek2==2)
{
	system("cls");
	printf("\tPeynirli Salata\n\nPeynirli Salata  bugün  %d'taneydi\n",peynirliSalata);
	printf("Şu anda kalan Peynirli Salata öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Peynirli Salata kalmamıştır");
		break;
	}
	adet=peynirliSalata-satis;
	kar=(float)satis*10.00-peynirliSalataalistl;
	printf("%d tane Peynirli Salata kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
//case 4 sonu (salatalar)



break;
case 5: //CASE 5--------------------------------------------------------------------------------------------------------------------------
printf("   ---------MENÜLER-----------\n\n Hamburger + Patates + İçecek             15.00 tl (Stok Takibi için 1)\n Cheeseburger + Patates+İçecek            15.00 tl (Stok Takibi için 2)\n Patso + İçecek                           12.00 tl (Stok Takibi için 3)\n Peynirli Gözleme + İçecek                12.00 tl (Stok Takibi için 4)\n Peynirli Sucuklu Gözleme + İçecek        12.00 tl (Stok Takibi için 5)\n Patates Gözleme + İçecek                 12.00 tl (Stok Takibi için 6)\n Otlu Peynirli Gözleme                    12.00 tl (Stok Takibi için 7)\n\n");
scanf("%d",&istek2);
if(istek2==1)
{
	system("cls");
	printf("\tHamburger+Patates+İçecek\n\nHamburger+Patates+İçecek  bugün  %d'taneydi\n",hamburgerpatatesicecek);
	printf("Şu anda kalan Hamburger+Patates+İçecek öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Hamburger+Patates+İçecek kalmamıştır");
		break;
	}
	adet=hamburgerpatatesicecek-satis;
	kar=(float)satis*15.00-hamburgerpatatesicecekalistl;
	printf("%d tane Hamburger+patates+İçecek kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
if(istek2==2)
{
	system("cls");
	printf("\tCheeseburger+Patates+İçecek\n\nCheeseburger+Patates+İçecek  bugün  %d'taneydi\n",cheeseburgerpatatesicecek);
	printf("Şu anda kalan Cheeseburger+Patates+İçecek öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Cheeseburger+Patates+İçecek kalmamıştır");
		break;
	}
	adet=cheeseburgerpatatesicecek-satis;
	kar=(float)satis*15.00-cheeseburgerpatatesicecekalistl;
	printf("%d tane Hamburger+patates+İçecek kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
if(istek2==3)
{
	system("cls");
	printf("\tPatso+İçecek\n\nPatso+İçecek  bugün  %d'taneydi\n",patsoicecek);
	printf("Şu anda kalan Patso+İçecek öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Patso+İçecek kalmamıştır");
		break;
	}
	adet=patsoicecek-satis;
	kar=(float)satis*12.00-patsoicecekalistl;
	printf("%d tane Patso+İçecek kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
if(istek2==4)
{
	system("cls");
	printf("\tPeynirli Gözleme + İçecek\n\nPeynirli Gözleme + İçecek  bugün  %d'taneydi\n",peynirligozlemeicecek);
	printf("Şu anda kalan Peynirli Gözleme + İçecek öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Peynirli Gözleme + İçecek kalmamıştır");
		break;
	}
	adet=peynirligozlemeicecek-satis;
	kar=(float)satis*12.00-peynirligozlemeicecekalistl;
	printf("%d tane Peynirli Gözleme + İçecek kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
if(istek2==5)
{
	system("cls");
	printf("\tPeynirli Sucuklu Gözleme+İçecek\n\nPeynirli Sucuklu Gözleme + İçecek  bugün  %d'taneydi\n",peynirlisucuklugozlemeicecek);
	printf("Şu anda kalan Peynirli Sucuklu Gözleme + İçecek öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Peynirli Sucuklu Gözleme + İçecek kalmamıştır");
		break;
	}
	adet=peynirlisucuklugozlemeicecek-satis;
	kar=(float)satis*12.00-peynirlisucuklugozlemeicecekalistl;
	printf("%d tane Peynirli Sucuklu Gözleme + İçecek kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
if(istek2==6)
{
	system("cls");
	printf("\tPatates Gözleme + İçecek\n\nPatates Gözleme + İçecek  bugün  %d'taneydi\n",patatesgozlemeicecek);
	printf("Şu anda kalan Patates Gozleme + İçecek öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Patates Gözleme + İçecek kalmamıştır");
		break;
	}
	adet=patatesgozlemeicecek-satis;
	kar=(float)satis*12.00-patatesgozlemeicecekalistl;
	printf("%d tane Patates Gözleme + İçecek kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
if(istek2==7)
{
	system("cls");
	printf("\tOtlu Peynirli Gözleme + İçecek\n\nOtlu Peynirli Gözleme + İçecek  bugün  %d'taneydi\n",otlupeynirligozlemeicecek);
	printf("Şu anda kalan Otlu Peynirli Gözleme + İçecek öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Otlu Peynirli Gözleme + İçecek kalmamıştır");
		break;
	}
	adet=otlupeynirligozlemeicecek-satis;
	kar=(float)satis*12.00-otlupeynirligozlemeicecekalistl;
	printf("%d tane Otlu Peynirli Gözleme + İçecek kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
//case 5 sonu (Menüler)





break;
case 6: //CASE 6-------------------------------------------------------------------------------------------------------------------------
printf("   ---------ŞEKERLEMELER-----------\n\n Polo              2.50 tl (Stok Takibi için 1)\n Mentos            2.50 tl (Stok Takibi için 2)\n\n");
scanf("%d",&istek2);
if(istek2==1)
{
	system("cls");
	printf("\tPolo\n\nPolo  bugün  %d'taneydi\n",polo);
	printf("Şu anda kalan Polo öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Polo kalmamıştır");
		break;
	}
	adet=polo-satis;
	kar=(float)satis*2.50-poloalistl;
	printf("%d tane Polo kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
if(istek2==2)
{
	system("cls");
	printf("\tMentos\n\nMentos  bugün  %d'taneydi\n",mentos);
	printf("Şu anda kalan Mentos öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)//koşulumuz
	{
		printf("Elinizde hiç Mentos kalmamıştır");
		break;
	}
	adet=mentos-satis;//adet hesaplama
	kar=(float)satis*2.50-mentosalistl;//kar hesaplama 
	printf("%d tane mentos kalmıştır\n",adet); // kalan adet
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}//if sonu
//Case 6 sonu (Şekerlemeler)



break;
case 7: //CASE 7--------------------------------------------------------------------------------------------------------------
printf("   ---------KAHVALTILAR-----------\n\n Salatalık 60 gr               1.50 tl (Stok Takibi için 1)\n Haşlanmış Yumurta Adet        1.50 tl (Stok Takibi için 2)\n Salam 30 gr                   2.00 tl (Stok Takibi için 3)\n Kaşar 30 gr                   2.00 tl (Stok Takibi için 4)\n Bal                           2.00 tl (Stok Takibi için 5)\n Tereyağı 10 gr                2.00 tl (Stok Takibi için 6)\n Beyaz Peynir 30 gr           12.00 tl (Stok Takibi için 7)\n\n");
scanf("%d",&istek2); 
if(istek2==1)
{
	system("cls");
	printf("\tSalatalık 60 gr \n\nSalatalık 60 gr  bugün  %d'taneydi\n",salatalik);
	printf("Şu anda kalan Salatalık 60 gr öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Salatalık 60 gr kalmamıştır");
		break;
	}
	adet=salatalik-satis;
	kar=(float)satis*1.50-salatalikalistl;
	printf("%d tane Salatalık 60 gr  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
if(istek2==2)
{
	system("cls");
	printf("\tHaşlanmış Yumurta Adet\n\nHaşlanmış Yumurta Adet  bugün  %d'taneydi\n",haslanmisyumurtaadet);
	printf("Şu anda kalan Haşlanmış Yumurta Adet öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Haşlanmış Yumurta Adet kalmamıştır");
		break;
	}
	adet=haslanmisyumurtaadet-satis;
	kar=(float)satis*1.50-haslanmisyumurtaalistl;
	printf("%d tane Haşlanmış Yumurta Adet kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
if(istek2==3)
{
	system("cls");
	printf("\tSalam 30 gr \n\nSalam 30 gr  bugün  %d'taneydi\n",salam);
	printf("Şu anda kalan Salam 30 gr öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Salam 30 gr  kalmamıştır");
		break;
	}
	adet=salam-satis;
	kar=(float)satis*2.00-salamalistl;
	printf("%d tane Salam kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
if(istek2==4)
{
	system("cls");
	printf("\tKaşar 30 gr \n\nPeynirli Kaşar 30 gr   bugün  %d'taneydi\n",kasar);
	printf("Şu anda kalan Kaşar 30 gr  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Kaşar 30 gr kalmamıştır");
		break;
	}
	adet=kasar-satis;
	kar=(float)satis*2.00-kasaralistl;
	printf("%d tane Kaşar 30 gr kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
if(istek2==5)
{
	system("cls");
	printf("\tBal 10 gr\n\nBal 10 gr  bugün  %d'taneydi\n",bal);
	printf("Şu anda kalan Bal 10 gr öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Bal 10 gr kalmamıştır");
		break;
	}
	adet=bal-satis;
	printf("%d tane Bal 10 gr  kalmıştır\n",adet);
	kar=(float)satis*2.00-balalistl;
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
if(istek2==6)
{
	system("cls");
	printf("\tTereyağı 10 gr\n\nTereyağı 10 gr  bugün  %d'taneydi\n",tereyagi);
	printf("Şu anda kalan Tereyağı 10 gr öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Tereyağı 10 gr kalmamıştır");
		break;
	}
	adet=tereyagi-satis;
	kar=(float)satis*2.00-tereyagialistl;
	printf("%d tane Tereyağı 10 gr  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
if(istek2==7)
{
	system("cls");
	printf("\tBeyaz Peynir 30 gr \n\nBeyaz Peynir 30 gr  bugün  %d'taneydi\n",beyazPeynir);
	printf("Şu anda kalan Beyaz Peynir 30 gr  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Beyaz Peynir 30 gr kalmamıştır");
		break;
	}
	adet=beyazPeynir-satis;
	kar=(float)satis*2.00-beyazPeyniralistl;
	printf("%d tane Beyaz Peynir 30 gr kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
//case 7 sonu (Kahvaltılar)

break;
case 8: //CASE 8-------------------------------------------------------------------------------------------------------------------------
printf("   ---------HAMUR İŞİ-----------\n\n Poğaça Çeşitleri        2.00 tl (Stok Takibi için 1)\n Açma                    2.00 tl (Stok Takibi için 2)\n Simit                   2.00 tl (Stok Takibi için 3)\n\n");
scanf("%d",&istek2);
if(istek2==1)
{
	system("cls");
	printf("\tPoğaça ÇEşitleri\n\nPoğaça Çeşitleri  bugün  %d'taneydi\n",pogacaCesitleri);
	printf("Şu anda kalan Poğaça Çeşitleri öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Poğaça Çeşitleri kalmamıştır");
		break;
	}
	adet=pogacaCesitleri-satis;
	kar=(float)satis*2.00-pogacaCesitlerialistl;
	printf("%d tane Poğaça Çeşitleri kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
if(istek2==2)
{
	system("cls");
	printf("\tAçma\n\nAçma  bugün  %d'taneydi\n",acma);
	printf("Şu anda kalan Açma öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Açma kalmamıştır");
		break;
	}
	adet=acma-satis;
	kar=(float)satis*2.00-acmaalistl;
	printf("%d tane Açma kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu

if(istek2==3)
{
	system("cls");
	printf("\tSimit\n\nSimit  bugün  %d'taneydi\n",simit);
	printf("Şu anda kalan Simit öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Simit kalmamıştır");
		break;
	}
	adet=simit-satis;
	kar=(float)satis*2.00-simitalistl;
	printf("%d tane Simit kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
break;
//case 8 sonu (hamur işi)


break;
case 9: //CASE 9-------------------------------------------------------------------------------------------------------------------------------------------------------
printf("      ---------OMLET ÇEŞİTLERİ----------\n\n Beyaz Peynirli Omlet            7.00 tl (Stok Takibi için 1)\n Kaşarlı Omlet                   8.00 tl (Stok takibi için 2)\n Karışık Omlet                   9.00 tl (Stok takibi için 3)\n Menemen                        10.00 tl (Stok takibi için 4)\n");
scanf("%d",&istek2);
if(istek2==1)
{
system("cls");
	printf("\tBEYAZ PEYNİRLİ OMLET\n\nBeyaz Peynirli Omlet bugün  %d taneydi\n",beyazPeynirliOmlet  );
	printf("Şu anda kalan Beyaz Peynirli Omlet  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Beyaz Peynirli Omlet  kalmamıştır");
		break;
	}
	adet=beyazPeynirliOmlet-satis;
	kar=(float)satis*7.00-beyazPeynirliOmletalistl;
	printf("%d tane Beyaz Peynirli Omlet  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;


	
}//if sonu
if(istek2==2)
{
system("cls");
	printf("\t KAŞARLI OMLET\n\nKaşarlı Omlet bugün  %d taneydi\n",kasarliOmlet  );
	printf("Şu anda kalan Kaşarlı Omlet   öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Kaşarlı Omlet  kalmamıştır");
		break;
	}
	adet=kasarliOmlet-satis;
	kar=(float)satis*8.00-kasarliOmletalistl;
	printf("%d tane Kaşarlı Omlet  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;


	
}//if sonu
if(istek2==3)
{
system("cls");
	printf("\t KARIŞIK OMLET\n\nKarışık Omlet bugün  %d taneydi\n",karisikOmlet  );
	printf("Şu anda kalan Karışık Omlet   öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Karışık Omlet  kalmamıştır");
		break;
	}
	adet=karisikOmlet-satis;
	kar=(float)satis*9.00-karisikOmletalistl;
	printf("%d tane Karışık Omlet kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;


	
}//if sonu
if(istek2==4)
{
system("cls");
	printf("\t MENEMEN\n\nMenemen bugün  %d taneydi\n",menemen  );
	printf("Şu anda kalan Menemen   öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Menemen  kalmamıştır");
		break;
	}
	adet=menemen-satis;
	kar=(float)satis*10.00-menemenalistl;
	printf("%d tane Menemen kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;


	
}//if sonu
//case 9 sonu (Omlet Çeşitleri)





break;	
case 10://CASE 10-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
printf("      ---------TOST ÇEŞİTLERİ----------\n\n Kaşarlı tost             6.00 tl (Stok Takibi için 1)\n Çift Kaşarlı Tost        7.00 tl (Stok takibi için 2)\n Karışık Tost             7.00 tl (Stok takibi için 3)\n Ayvalık Tost             7.00 tl (Stok takibi için 4)\n Pizza Tost               7.00 tl (Stok takibi için 5)\n");
scanf("%d",&istek2);
if(istek2==1)
{
system("cls");
	printf("\tKAŞARLI TOST\n\nKaşarlı tost bugün  %d taneydi\n",kasarliTost  );
	printf("Şu anda kalan Kaşarlı Tost   öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Kaşarlı Tost  kalmamıştır");
		break;
	}
	adet=kasarliTost-satis;
	kar=(float)satis*6.00-kasarliTostalistl;
	printf("%d tane Kaşarlı Tost  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;


	
}//if sonu
if(istek2==2)
{
	system("cls");
	printf("\tÇİFT KAŞARLI TOST\n\nÇift kaşarlı tost bugün  %d taneydi\n",ciftKasarliTost  );
	printf("Şu anda kalan Çift Kaşarlı Tost   öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Çift Kaşarlı Tost  kalmamıştır");
		break;
	}
	adet=ciftKasarliTost-satis;
	kar=(float)satis*7.00-ciftKasarliTostalistl;
	printf("%d tane Çift Kaşarlı Tost  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;


	
}// if sonu
if(istek2==3)
{
	system("cls");
	printf("\t KARIŞIK TOST\n\n Karışık tost bugün  %d taneydi\n",karisikTost  );
	printf("Şu anda kalan Karışık tost   öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç  Karışık tost  kalmamıştır");
		break;
	}
	adet=karisikTost-satis;
	kar=(float)satis*7.00-karisikTostalistl;
	printf("%d tane Karışık tost   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;

}// if sonu


if(istek2==4)
{
	system("cls");
	printf("\t AYVALIK TOST\n\n Ayvalık Tost bugün  %d taneydi\n",ayvalikTost  );
	printf("Şu anda kalan Ayvalık Tost  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Ayvalık Tost  kalmamıştır");
		break;
	}
	adet=ayvalikTost-satis;
	kar=(float)satis*7.00-ayvalikTostalistl;
	printf("%d tane Ayvalık Tost   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;	
}// if sonu


if(istek2==5)
{
	system("cls");
	printf("\t PİZZA TOST\n\n Pizza Tost bugün  %d taneydi\n",pizzaTost );
	printf("Şu anda kalan Pizza Tost  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Pizza Tost kalmamıştır");
		break;
	}
	adet=pizzaTost-satis;
	kar=(float)satis*7.00-pizzaTostalistl;
	printf("%d tane Pizza Tost   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu
//case 10 sonu (Tost Çeşitleri)


break;
case 11://CASE 11---------------------------------------------------------------------------------------------------------------------------
printf("      ---------BURGER MENÜ----------\n\n Hamburger+Patates          12.00 tl (Stok Takibi için 1)\n Cheeseburger+Patates       13.00 tl (Stok takibi için 2)\n Patso                       9.00 tl (Stok takibi için 3)\n ");
scanf("%d",&istek2);
if(istek2==1)
{	
	system("cls");
	printf("\t HAMBURGER+PATATES MENÜ\n\n Hamburger+Patates menü bugün  %d taneydi\n",hamburgerPatates);
	printf("Şu anda kalan Hamburger+Patates menü adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Hamburger+Patates menü kalmamıştır");
		break;
	}
	adet=hamburgerPatates-satis;
	kar=(float)satis*12.00-hamburgerPatatesalistl;
	printf("%d tane Hamburger+Patates menü   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}//if sonu



if(istek2==2)
{	
	system("cls");
	printf("\t CHEESEBURGER+PATATES MENÜ\n\n Cheeseburger+Patates menü bugün  %d taneydi\n",cheeseburgerPatates);
	printf("Şu anda kalan Cheeseburger+Patates menü adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Cheeseburger+Patates menü kalmamıştır");
		break;
	}
	adet=cheeseburgerPatates-satis;
	kar=(float)satis*13.00-cheeseburgerPatatesalistl;
	printf("%d tane Cheeseburger+Patates menü   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;	
}//if sonu

if(istek2==3)
{	
	system("cls");
	printf("\t PATSO\n\n Patso  bugün  %d taneydi\n",patso);
	printf("Şu anda kalan Patso adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Cheeseburger+Patates menü kalmamıştır");
		break;
	}
	adet=patso-satis;
	kar=(float)satis*9.00-patsoalistl;
	printf("%d tane Patso menü   kalmıştır\n",adet);
	
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;	
}//
//case 11 sonu (Burger Menü)

break;
case 12://CASE 12---------------------------------------------------------------------------------------------------------------------------
printf("      ---------MEYVELER----------\n\n Elma adet           2.00 tl (Stok Takibi için 1)\n Armut adet          2.00 tl (Stok takibi için 2)\n Portakal adet       2.00 tl (Stok takibi için 3)\n ");
scanf("%d",&istek2);
if(istek2==1)
{
	
	system("cls");
	printf("\t ELMA\n\n Elma bugün  %d taneydi\n",elma);
	printf("Şu anda kalan Elma adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Elma kalmamıştır");
		break;
	}
	adet=elma-satis;
	kar=(float)satis*2.00-elmaalistl;
	printf("%d tane Elma   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu



if(istek2==2)
{
	
	system("cls");
	printf("\t ARMUT\n\n Armut bugün  %d taneydi\n",armut);
	printf("Şu anda kalan Armut adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Armut kalmamıştır");
		break;
	}
	adet=armut-satis;
	kar=(float)satis*2.00-armutalistl;
	printf("%d tane Armut   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
}// if sonu



if(istek2==3)
{
	
	system("cls");
	printf("\t PORTAKAL\n\n Portakal bugün  %d taneydi\n",portakal);
	printf("Şu anda kalan Armut adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Portakal kalmamıştır");
		break;
	}
	adet=portakal-satis;
	kar=(float)satis*2.00-portakalalistl;
	printf("%d tane Portakal kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu
//case 12 sonu (Meyveler)


break;
case 13://CASE 13---------------------------------------------------------------------------------------------------------------------------------------------------------------
printf("      ---------BİSKÜVİ/GOFRET----------\n\n Albeni                           2.25 tl (Stok Takibi için 1)\n Albeni atıştırmalık              2.50 tl (Stok takibi için 2)\n Benimo Lokmalık                  2.50 tl (Stok takibi için 3)\n Biskrem kakaolu                  2.00 tl (Stok takibi için 4)\n Browni Intense                   2.50 tl (Stok takibi için 5)\n Burçak                           2.50 tl (Stok Takibi için 6)\n Canga                            2.50 tl (Stok Takibi için 7)\n Canpare Çikolata                 2.50 tl (Stok Takibi için 8)\n Tutku 110 gr                     2.50 tl (Stok Takibi için 9)\n");	
printf(" Caramio Karamelli Çikolatalı     2.50 tl (Stok Takibi için 10)\n Cin lokmalık                     2.00 tl (Stok Takibi için 11)\n Cocostar                         2.00 tl (Stok Takibi için 12)\n");
printf(" Crax Çubuk Kraker                2.00 tl (Stok Takibi için 13)\n Çizi Peynirli                    2.50 tl (Stok Takibi için 14)\n Çizi sade                        2.50 tl (Stok Takibi için 15)\n Çokonat gofret                   2.50 tl (Stok Takibi için 16)\n");
printf(" Dido Sütlü Çikolatalı Gofret     2.50 tl (Stok Takibi için 17)\n Eti Burçak Sütlü Çikolatalı      2.50 tl (Stok Takibi için 18)\n Eti çay keyfi ÇİKOLATALI         2.50 tl (Stok Takibi için 19)\n Eti form                         1.50 tl (Stok Takibi için 20)\n Saklıköy                         2.50 tl (Stok Takibi için 21)\n Eti karam                        2.50 tl (Stok Takibi için 22)\n Eti popkek                       1.75 tl (Stok Takibi için 23)\n Ülker Çikolatalı gofret 33gr     2.50 tl (Stok Takibi için 24)\n");
printf(" Halley atıştırmalık              2.50 tl (Stok Takibi için 25)\n Hanımeller                       2.50 tl (Stok Takibi için 26)\n İkram Çikolata                   2.50 tl (Stok Takibi için 27)\n Laviva Bar                       2.50 tl (Stok Takibi için 28)\n Probis Atıştırmalık              2.50 tl (Stok Takibi için 29)\n Kuruyemiş Karışık                3.50 tl (Stok Takibi için 30)");
scanf("%d",&istek2);
if(istek2==1)
{
system("cls");
	printf("\t ALBENİ\n\n Albeni bugün  %d taneydi\n",albeni);
	printf("Şu anda kalan Albeni adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Albeni kalmamıştır");
		
	}
	adet=albeni-satis;
	kar=(float)satis*2.25-albenialistl;
	printf(" %d tane Albeni   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu

if(istek2==2)
{
system("cls");
	printf("\t ALBENİ\n\n Albeni atıştırmalık bugün  %d taneydi\n",albeniAtistirmalik);
	printf("Şu anda kalan Albeni atıştırmalık adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Albeni atıştırmalık kalmamıştır");
		break;
	}
	adet=albeniAtistirmalik-satis;
	kar=(float)satis*2.50-albeniAtistirmalikalistl;
	printf("%d tane Albeni atıştırmalık   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu



if(istek2==3)
{
system("cls");
	printf("\t BENİMOLOKMOLİK\n\n Benimo Lokmalık  bugün  %d taneydi\n",benimoLokmalik);
	printf("Şu anda kalan Benimo Lokmalık adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Benimo Lokmalık kalmamıştır");
		break;
	}
	adet=benimoLokmalik-satis;
	kar=(float)satis*2.50-benimoLokmalikalistl;
	printf("%d tane Benimo Lokmalık   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu


if(istek2==4)
{
system("cls");
	printf("\t BİSKREM\n\n Biskrem  bugün  %d taneydi\n",biskremKakaolu);
	printf("Şu anda kalan Biskrem adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Biskrem kalmamıştır");
		break;
	}
	adet=biskremKakaolu-satis;
	kar=(float)satis*2.00-biskremKakaolualistl;
	printf("%d tane Benimo Lokmalık   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu


if(istek2==5)
{
system("cls");
	printf("\t BROWNİ\n\n Browni  bugün  %d taneydi\n",browniIntense);
	printf("Şu anda kalan Browni  adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Browni  kalmamıştır");
		break;
	}
	adet=browniIntense-satis;
	kar=(float)satis*2.50-browniIntensealistl;
	printf("%d tane Browni    kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu



if(istek2==6)
{
system("cls");
	printf("\t BURÇAK\n\n Burçak  bugün  %d taneydi\n",burcak);
	printf("Şu anda kalan Burçak  adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Burçak  kalmamıştır");
		break;
	}
	adet=burcak-satis;
	kar=(float)satis*2.50-burcakalistl;
	printf("%d tane Burçak    kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu


if(istek2==7)
{
system("cls");
	printf("\t CANGA\n\n Canga  bugün  %d taneydi\n",canga);
	printf("Şu anda kalan Canga  adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Canga  kalmamıştır");
		break;
	}
	adet=canga-satis;
	kar=(float)satis*2.50-cangaalistl;
	printf("%d tane Canga    kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu



if(istek2==8)
{
system("cls");
	printf("\t CANPARE ÇİKOLATA\n\n Canpare Çikolata  bugün  %d taneydi\n",canpareCikolata);
	printf("Şu anda kalan Canpare Çikolata  adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Canpare Çikolata  kalmamıştır");
		break;
	}
	adet=canpareCikolata-satis;
	kar=(float)satis*2.50-canpareCikolataalistl;
	printf("%d tane Canpare Çikolata    kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu



if(istek2==9)
{
system("cls");
	printf("\t TUTKU\n\n Tutku  bugün  %d taneydi\n",tutku);
	printf("Şu anda kalan Tutku  adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Tutku  kalmamıştır");
		break;
	}
	adet=tutku-satis;
	kar=(float)satis*2.50-tutkualistl;
	printf("%d tane Tutku   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu



if(istek2==10)
{
system("cls");
	printf("\t CARAMİO\n\n Caramio  bugün  %d taneydi\n",caramio);
	printf("Şu anda kalan Caramio  adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Caramio  kalmamıştır");
		break;
	}
	adet=caramio-satis;
	kar=(float)satis*2.50-caramioalistl;
	printf("%d tane Caramio   kalmıştır\n",adet);
	
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu



if(istek2==11)
{
system("cls");
	printf("\t ETİ CİN\n\n Eti Cin  bugün  %d taneydi\n",cin);
	printf("Şu anda kalan Eti Cin adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Eti Cin  kalmamıştır");
		break;
	}
	adet=cin-satis;
		kar=(float)satis*2.00-cinalistl;
	printf("%d tane Eti Cin   kalmıştır\n",adet);
	
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu



if(istek2==12)
{
system("cls");
	printf("\t COCO STAR\n\n Coco Star  bugün  %d taneydi\n",cocostar);
	printf("Şu anda kalan Coco Star adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Coco Star  kalmamıştır");
		break;
	}
	adet=cocostar-satis;
	kar=(float)satis*2.00-cocostaralistl;
	printf("%d tane Coco Star  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu



if(istek2==13)
{
system("cls");
	printf("\t CRAX\n\n Crax   bugün  %d taneydi\n",crax);
	printf("Şu anda kalan Crax  adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Crax   kalmamıştır");
		break;
	}
	adet=crax-satis;
	kar=(float)satis*2.00-craxalistl;
	printf("%d tane Crax  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu



if(istek2==14)
{
system("cls");
	printf("\t PEYNİRLİ ÇİZİ\n\n Peynirli Çizi   bugün  %d taneydi\n",ciziPeynirli);
	printf("Şu anda kalan Peynirli Çizi adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Peynirli Çizi   kalmamıştır");
		break;
	}
	adet=ciziPeynirli-satis;
	kar=(float)satis*2.50-ciziPeynirlialistl;
	printf("%d tane Peynirli Çizi  kalmıştır\n",adet);
	
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu



if(istek2==15)
{
system("cls");
	printf("\tSADE ÇİZİ \n\n Sade Çizi   bugün  %d taneydi\n",ciziSade);
	printf("Şu anda kalan Sade Çizi adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Sade Çizi   kalmamıştır");
		break;
	}
	adet=ciziSade-satis;
	kar=(float)satis*2.50-ciziSadealistl;
	printf("%d tane Sade Çizi kalmıştır\n",adet);
	
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu


if(istek2==16)
{
system("cls");
	printf("\tÇOKONAT GOFRET \n\n Çokonat Gofret   bugün  %d taneydi\n",cokonatGofret);
	printf("Şu anda kalan Çokonat Gofret  adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Çokonat Gofret   kalmamıştır");
		break;
	}
	adet=cokonatGofret-satis;
	kar=(float)satis*2.50-cokonatGofretalistl;
	printf("%d tane Çokonat Gofret  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu



if(istek2==17)
{
system("cls");
	printf("\tDİDO \n\n Dido  bugün  %d taneydi\n",dido);
	printf("Şu anda kalan Dido  adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Dido  kalmamıştır");
		break;
	}
	adet=dido-satis;
	kar=(float)satis*2.50-didoalistl;
	printf("%d tane Dido  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu




if(istek2==18)
{
system("cls");
	printf("\tETİ BURÇAK SÜTLÜ ÇİKOLATALI \n\n Eti Burçak Sütlü Çikolatalı  bugün  %d taneydi\n",etiBurcakSutluCikolatali);
	printf("Şu anda kalan Eti Burçak Sütlü Çikolatalı  adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Eti Burçak Sütlü Çikolatalı  kalmamıştır");
		break;
	}
	adet=etiBurcakSutluCikolatali-satis;
	kar=(float)satis*2.50-etiBurcakSutluCikolatalialistl;
	printf("%d tane Eti Burçak Sütlü Çikolatalı  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu



if(istek2==19)
{
system("cls");
	printf("\tETİ ÇAY KEYFİ ÇİKOLATALI \n\n Eti Çay Keyfi Çikolatalı  bugün  %d taneydi\n",etiCaykeyfiCikolatali);
	printf("Şu anda kalan Eti Çay Keyfi Çikolatalı  adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Eti Çay Keyfi Çikolatalı  kalmamıştır");
		break;
	}
	adet=etiCaykeyfiCikolatali-satis;
	kar=(float)satis*2.50-etiCaykeyfiCikolatalialistl;
	printf("%d tane Eti Çay Keyfi Çikolatalı  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu


if(istek2==20)
{
system("cls");
	printf("\tETİ FORM \n\n Eti Form  bugün  %d taneydi\n",etiForm);
	printf("Şu anda kalan Eti Form   adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Eti Form   kalmamıştır");
		break;
	}
	adet=etiForm-satis;
	kar=(float)satis*1.50-etiFormalistl;
	printf("%d tane Eti Form   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu



if(istek2==21)
{
system("cls");
	printf("\tSAKLIKÖY \n\n Sakliköy   bugün  %d taneydi\n",saklikoy);
	printf("Şu anda kalan Sakliköy    adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Sakliköy    kalmamıştır");
		break;
	}
	adet=saklikoy-satis;
	kar=(float)satis*2.50-saklikoyalistl;
	printf("%d tane Eti Sakliköy   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu



if(istek2==22)
{
system("cls");
	printf("\tETİ KARAM \n\n Eti Karam   bugün  %d taneydi\n",etiKaram);
	printf("Şu anda kalan Eti Karam    adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Eti Karam    kalmamıştır");
		break;
	}
	adet=etiKaram-satis;
	kar=(float)satis*2.50-etiKaramalistl;
	printf("%d tane Eti Eti Karam   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu



if(istek2==23)
{
system("cls");
	printf("\tETİ POPKEK \n\n Eti Popkek    bugün  %d taneydi\n",etiPopkek);
	printf("Şu anda kalan Eti Popkek     adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Eti Popkek     kalmamıştır");
		break;
	}
	adet=etiPopkek-satis;
		kar=(float)satis*1.75-etiPopkekalistl;
	printf("%d tane Eti Popkek  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu


if(istek2==24)
{
system("cls");
	printf("\tÇİKOLATALI GOFRET \n\nÇikolatalı Gofret  bugün  %d taneydi\n",ulkerCikolataliGofret);
	printf("Şu anda kalan Çikolatalı Gofret   adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Çikolatalı Gofret  kalmamıştır");
		break;
	}
	adet=ulkerCikolataliGofret-satis;
	kar=(float)satis*2.50-ulkerCikolataliGofretalistl;
	printf("%d tane Çikolatalı Gofret  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu

if(istek2==25)
{
system("cls");
	printf("\tHALLEY \n\nHalley  bugün  %d taneydi\n",halleyAtistirmail);
	printf("Şu anda kalan Halley  adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Halley kalmamıştır");
		break;
	}
	adet=halleyAtistirmail-satis;
	kar=(float)satis*2.50-halleyAtistirmailalistl;
	printf("%d tane Halley  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
}// if sonu



if(istek2==26)
{
system("cls");
	printf("\tHANIMELLER \n\nHanımmeller  bugün  %d taneydi\n",hanimeller);
	printf("Şu anda kalan Hanımmeller  adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Hanımmeller  kalmamıştır");
		break;
	}
	adet=hanimeller-satis;
	kar=(float)satis*2.50-hanimelleralistl;
	printf("%d tane Hanımmeller  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu



if(istek2==27)
{
system("cls");
	printf("\tİKRAM \n\nİkram  bugün  %d taneydi\n",ikram);
	printf("Şu anda kalan İkram   adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç İkram   kalmamıştır");
		break;
	}
	adet=ikram-satis;
	kar=(float)satis*2.50-ikramalistl;
	printf("%d tane İkram   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu


if(istek2==28)
{
system("cls");
	printf("\tLAVİVA BAR\n\nLaviva Bar  bugün  %d taneydi\n",lavivaBar);
	printf("Şu anda kalan Laviva Bar   adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Laviva Bar   kalmamıştır");
		break;
	}
	adet=lavivaBar-satis;
	kar=(float)satis*2.50-lavivaBaralistl;
	printf("%d tane Laviva Bar  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu


if(istek2==29)
{
system("cls");
	printf("\tPROBİS\n\nProbis  bugün  %d taneydi\n",probis);
	printf("Şu anda kalan Probis   adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Probis   kalmamıştır");
		break;
	}
	adet=probis-satis;
	kar=(float)satis*2.50-probisalistl;
	printf("%d tane Probis  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu


if(istek2==30)
{
system("cls");
	printf("\tKURUYEMİŞ\n\nKuruyemis  bugün  %d taneydi\n",kuruyemis);
	printf("Şu anda kalan Kuruyemis    adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Probis   kalmamıştır");
		break;
	}
	adet=kuruyemis-satis;
	kar=(float)satis*2.50-kuruyemisalistl;
	printf("%d tane Kuruyemis  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu
//case 13 sonu (Bisküvi/Gofret)

break;
case 14://CASE 14--------------------------------------------------------------------------------------------------------------------------------------------------------------------
printf("      ---------GÜNÜN MENÜSÜ----------\n\n Çorba                5.00 tl (Stok Takibi için 1)\n Yardımcı Yemek       5.00 tl (Stok takibi için 2)\n Ana Yemek Etli       8.00 tl (Stok takibi için 3)\n Ana Yemek Sebzeli    6.00 tl (Stok takibi için 4)\n Salata/Meyve         5.00 tl (Stok takibi için 5)\n Tabldot             15.00 tl (Stok takibi için 6)\n  ");
scanf("%d",&istek2);
if(istek2==1)
{
	
	system("cls");
	printf("\t ÇORBA\n\n Çorba bugün  %d taneydi\n",corba);
	printf("Şu anda kalan Çorba adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Çorba kalmamıştır");
		break;
	}
	adet=corba-satis;
	kar=(float)satis*5.00-corbaalistl;
	printf("%d tane Çorba   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu


if(istek2==2)
{
	
	system("cls");
	printf("\t YARDIMCI YEMEK\n\n Yardımcı yemek bugün  %d taneydi\n",yardimciyemek);
	printf("Şu anda kalan  Yardımcı yemek adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç  Yardımcı yemek kalmamıştır");
		break;
	}
	adet=yardimciyemek-satis;
	kar=(float)satis*5.00-yardimciyemekalistl;
	printf("%d tane  Yardımcı yemek  kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu



if(istek2==3)
{
	
	system("cls");
	printf("\t ANA YEMEK ETLİ\n\n  Ana Yemek Etli  bugün  %d taneydi\n",anayemeketli);
	printf("Şu anda kalan  Ana Yemek Etli  adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç  Ana Yemek Etli  kalmamıştır");
		break;
	}
	adet=anayemeketli-satis;
	kar=(float)satis*8.00-anayemeketlialistl;
	printf("%d tane  Ana Yemek Etli    kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu


if(istek2==4)
{
	
	system("cls");
	printf("\t ANAYEMEKSEBZELİ\n\n Ana Yemek Sebzeli  bugün  %d taneydi\n",anayemeksebzeli);
	printf("Şu anda kalan Ana Yemek Sebzeli  adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Ana Yemek Sebzeli  kalmamıştır");
		break;
	}
	adet=anayemeksebzeli-satis;
	kar=(float)satis*6.00-anayemeksebzelialistl;
	printf("%d tane Ana Yemek Sebzeli    kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu


if(istek2==5)
{
	
	system("cls");
	printf("\t ANAYEMEKSEBZELİ\n\n Salata/Meyve  bugün  %d taneydi\n",salatameyve);
	printf("Şu anda kalan Salata/Meyve  adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Salata/Meyve  kalmamıştır");
		break;
	}
	adet=salatameyve-satis;
	kar=(float)satis*5.00-anayemeksebzelialistl;
	printf("%d tane Salata/Meyve    kalmıştır\n",adet);
	
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu




if(istek2==6)
{
	
	system("cls");
	printf("\t TABLDOT\n\n Tabldot  bugün  %d taneydi\n",tabldot);
	printf("Şu anda kalan Tabldot  adedini  öğrenmek için bugün kaç tane satıldığını girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Tabldot  kalmamıştır");
		break;
	}
	adet=tabldot-satis;
	kar=(float)satis*15.00-tabldotalistl;
	printf("%d tane Tabldot   kalmıştır\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
	

}// if sonu



break;
default:
	printf("Yanlış bir değer girdiniz");
}//switch sonu
}//main sonu
