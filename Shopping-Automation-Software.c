/* 
Bedirhan BÜYÜKÖZ & Mehmet Volkan VURAL
   1904040009         1904040010
	  Yazýlým Mühendisliði



***************Beykoz  Üniversitesi  Kantin  Yazýlýmý********************


Kantin Menüsü Aþaðýdadýr.

GÖZLEME ÇEÞÝTLERÝ------1-------------------------------------------------------

peynirli gözleme                    9.00 tl 
peynirli-sucuklu gözleme           10.00 tl 
patatesli gözleme                   9.00 tl 
patatesli peynirli gözleme         10.00 tl 
Otlu gözleme                        8.00 tl 
Otlu-Peynirli gözleme              10.00 tl

SOÐUK ÝÇECEKLER--------2-------------------------------------------------------

Ayran 200ml                         2.50 tl 
Meþrubatlar(kutu) 330 ml            3.50 tl 
Meyveli soda 200 ml                 2.50 tl 
sade soda 200ml                     2.00 tl
su 500ml                            1.25 tl
limonata 330ml                      2.50 tl 
meysu meyve suyu                    2.50 tl 
gazoz 200ml                         2.50 tl 
Kido süt 200ml                      2.50 tl

SICAK ÝÇECEKLER--------3---------------------------------------------------------

çay                                1.50 tl
büyük çay                          3.00 tl
bitki çaylarý                      2.50 tl
americano                          4.50 tl
cappucino                          5.00 tl
Latte                              5.00 tl 
Espresso                           4.00 tl
Aromalý kahve                      6.00 tl
Türk kahvesi                       4.00 tl
Sýcak çikolata                     4.50 tl


SALATALAR--------------4----------------------------------------------------------

Yeþil salatalar                    8.00 tl
Peynirli salatalar                10.00 tl

MENÜLER----------------5----------------------------------------------------------

Hamburger+patates+içecek          15.00 tl
Cheeseburger+patates+içecek       15.00 tl
Patso+içecek                      12.00 tl
Peynirli Gözleme+içecek           12.00 tl
Peynirli sucuklu Gözleme+içecek   12.00 tl
Patates gözleme+içececek          12.00 tl
Otlu peynirli gözleme + içecek    12.00 tl

ÞEKERLEMELER----------6----------------------------------------------------------

Polo                              2.50 tl
Mentos                            2.50 tl

KAHVALTILAR-----------7---------------------------------------------------------- 

SALATALIK 60 GR                   1.50 tl
Haþlanmýþ Yumurta Adet            1.50 tl
Salam 30gr                        2.00 tl
Kaþar 30gr                        2.00 tl
bal 10 gr                         2.00 tl
Tereyaðý 10gr                     2.00 tl
Beyaz peynir 30 gr                2.00 tl

HAMUR ÝÞÝ-------------8----------------------------------------------------------

Poðaça Çeþitleri                  2.00 tl
Açma                              2.00 tl
Simit                             2.00 tl

OMLETLER--------------9----------------------------------------------------------

Beyaz peynirli omlet             7.00 tl
Kaþarlý omlet                    8.00 tl
Karýþýk omlet                    9.00 tl
Menemen                         10.00 tl

TOST ÇEÞÝTLERÝ------10----------------------------------------------------------- 

Kaþarlý Tost                     6.00 tl
Çift Kaþarlý tost                7.00 tl
Karýþýk tost                     7.00 tl
Ayvalýk tost                     7.00 tl
Pizza tost                       7.00 tl

BURGER MENÜ--------11------------------------------------------------------------

Hamburger+patates               12.00 tl
Cheeseburger+patates            13.00 tl
patso                            9.00 tl

MEYVELER----------12-------------------------------------------------------------

Elma adet                       2.00 tl
armut adet                      2.00 tl
portakal adet                   2.00 tl

BÝSKÜVÝ/GOFRET---13--------------------------------------------------------------

Albeni                          2.25 tl
albeni atýþtýrmaklýk            2.50 tl
benimo lokmalýk                 2.50 tl
biskrem kakaolu                 2.00 tl
Browni Intense                  2.50 tl
Burçak                          2.50 tl
Canga                           2.50 tl
Canpare Çikolata                2.50 tl
Tutku 110 gr                    2.50 tl
Caramio Karamelli Çikolatalý    2.50 tl
Cin lokmalýk                    2.00 tl
Cocostar                        2.00 tl
Crax Çubuk Kraker               2.00 tl
Çizi Peynirli                   2.50 tl
Çizi sade                       2.50 tl
Çokonat gofret                  2.50 tl
Dido Sütlü Çikolatalý Gofret    2.50 tl
Eti Burçak Sütlü Çikolatalý     2.50 tl
Eti çay keyfi ÇÝKOLATALI        2.50 tl
Eti form                        1.50 tl
Saklýköy                        2.50 tl
Eti karam                       2.50 tl
Eti popkek                      1.75 tl
Ülker Çikolatalý gofret 33gr    2.50 tl
Halley atýþtýrmalýk             2.50 tl
Hanýmeller                      2.50 tl
Ýkram Çikolata                  2.50 tl
Laviva Bar                      2.50 tl
Probis Atýþtýrmalýk             2.50 tl
Kuruyemiþ Karýþýk               3.50 tl

GÜNÜN MENÜSÜ---14--------------------------------------------------------------

Çorba                           1.50 tl
Yardýmcý Yemek                  3.00 tl
Ana Yemek                       8.00 tl
Ana Yemek Sebzeli               6.00 tl
Salata / Meyve                  5.00 tl
Tabldot                        15.00 tl  

-------------------------------------------------------------------------------

*/
#include<stdio.h>        //Kullandýðýmýz headerlar
#include<stdlib.h>
#include<locale.h>



int main()
{
	int takip;//Stoðu görmek ve takibini kullanýcýdan istemek için kullandýk.
	int istek;//isteði switch komutunda kullanarak kullanýcýn hangi ürünlerini görmek istediðini bulmak için kullandýk.
	int istek2;//ifler içinde kullanailmek için kullandýk (koþullara baðlý olarak)
	int satis;//kar hesaplamada kullandýk.
	int adet;//kalan ürün miktarýný belirten deðiþken.
	
	float cayalistl=50,buyukCayalistl=50,bitkiCayialistl=50,americanoalistl=50,cappucinoalistl=50,lattealistl=50,espressoalistl=50,aromaliKahvealistl=50,turkKahvesialistl=50,sicakCikolataalistl=50;
	float peynirliGozlemealistl=25,kar,peynirliSucukluGozlemealistl=25,patatesliGozlemealistl=25,patatesliPeynirliGozlemealistl=25,otluGozlemealistl=25,otluPeynirliGozlemealistl=25;//Gözleme Çeþitleri alis fiyatlari
	float ayranalistl=50,mesrubatlarKutualistl=50,meyveliSodaalistl=50,sadeSodaalistl=50,Sualistl=50,Limonataalistl=50,meysuMeyveSuyualistl=50,Gazozalistl=50,kidoSutalistl=50;//Soguk içecekler alis fiyatlari
	float peynirliSalataalistl=25,yesilSalataalistl=25;
	float menemenalistl=25,beyazPeynirliOmletalistl=25,kasarliOmletalistl=25,karisikOmletalistl=25;//Menemen çeþitleri alýþ fiyatý
	float pizzaTostalistl=25,kasarliTostalistl=25,ciftKasarliTostalistl=25,ayvalikTostalistl=25,karisikTostalistl=25;//Tost çeþitleri alýþ fiyatý
	float otlupeynirligozlemeicecekalistl=50,hamburgerpatatesicecekalistl=50,cheeseburgerpatatesicecekalistl=50,patsoicecekalistl=50,peynirligozlemeicecekalistl=50,peynirlisucuklugozlemeicecekalistl=50,patatesgozlemeicecekalistl=50;//Menüler alýþ fiyatý
	float poloalistl=50,mentosalistl=50;//Þekerlemeler
	float salatalikalistl=50,haslanmisyumurtaalistl=50,salamalistl=50,kasaralistl=50,balalistl=50,tereyagialistl=50,beyazPeyniralistl=50;//Kahvaltýlar alýþ tl
	float pogacaCesitlerialistl=50,acmaalistl=50,simitalistl=50;//Hamur Ýþi çeþitleri alýþ tl
	float hamburgerPatatesalistl=25,cheeseburgerPatatesalistl=25,patsoalistl=25;//Burger Menü
	float elmaalistl=25,portakalalistl=25,armutalistl=25;//Meyve çeþitleri alýþ tl
	float albenialistl=25,albeniAtistirmalikalistl=25,benimoLokmalikalistl=25,biskremKakaolualistl=25,browniIntensealistl=25,burcakalistl=25,cangaalistl=25,canpareCikolataalistl=25,tutkualistl=25,caramioalistl=25,cinalistl=25,cocostaralistl=25,craxalistl=25,ciziPeynirlialistl=25,ciziSadealistl=25,cokonatGofretalistl=25,didoalistl=25,etiBurcakSutluCikolatalialistl=25;//Bisküvi/Gofret çeþitleri alýþ fiyatý tl
	float etiCaykeyfiCikolatalialistl=25,etiFormalistl=25,saklikoyalistl=25,etiKaramalistl=25,etiPopkekalistl=25,ulkerCikolataliGofretalistl=25,halleyAtistirmailalistl=25,hanimelleralistl=25,ikramalistl=25,lavivaBaralistl=25,probisalistl=25,kuruyemisalistl=25;//Biskuvi/Gofret çeþitleri alýþ fiyatý
	float anayemeketlialistl=25,corbaalistl=25,yardimciyemekalistl=25,anayemeksebzelialistl=25,salatameyvealistl=25,tabldotalistl=25;//GÜNÜN MENÜSÜ alýþ fiyatý tl
	
	int peynirliGozleme=50,peynirliSucukluGozleme=50,patatesliGozleme=50,patatesliPeynirliGozleme=50,otluGozleme=50,otluPeynirliGozleme=50;//Gözleme Çeþitleri
	int ayran=100,mesrubatlarKutu=100,meyveliSoda=100,sadeSoda=100,Su=100,Limonata=100,meysuMeyveSuyu=100,Gazoz=100,kidoSut=100;//Soðuk içecekler
	int cay=100,buyukCay=100,bitkiCayi=100,americano=100,cappucino=100,latte=100,espresso=100,aromaliKahve=100,turkKahvesi=100,sicakCikolata=100;//Sýcak içecekler
	int kasarliTost=50,ciftKasarliTost=50,ayvalikTost=50,pizzaTost=50,karisikTost=50;//Tost çeþitleri
	int beyazPeynirliOmlet=50,kasarliOmlet=50,karisikOmlet=50,menemen=50;//Menemen çeþitleri
	int elma=50,portakal=50,armut=50;//Meyve çeþitleri
	int hamburgerPatates=50,cheeseburgerPatates=50,patso=50;//Burger Menü
	int anayemeketli=50,corba=50,yardimciyemek=50,anayemeksebzeli=50,salatameyve=50,tabldot=50;//GÜNÜN MENÜSÜ
	int albeni=50,albeniAtistirmalik=50,benimoLokmalik=50,biskremKakaolu=50,browniIntense=50,burcak=50,canga=50,canpareCikolata=50,tutku=50,caramio=50,cin=50,cocostar=50,crax=50,ciziPeynirli=50,ciziSade=50,cokonatGofret=50,dido=50,etiBurcakSutluCikolatali=50;//Bisküvi/Gofret çeþitleri
	int etiCaykeyfiCikolatali=50,etiForm=50,saklikoy=50,etiKaram=50,etiPopkek=50,ulkerCikolataliGofret=50,halleyAtistirmail=50,hanimeller=50,ikram=50,lavivaBar=50,probis=50,kuruyemis=50;
	int peynirliSalata=50,yesilSalata=50;//salata çeþitleri
	int polo=100,mentos=100;//Þekerlemeler
	int hamburgerpatatesicecek=100,cheeseburgerpatatesicecek=100,patsoicecek=100,peynirligozlemeicecek=100,peynirlisucuklugozlemeicecek=100,patatesgozlemeicecek=100,otlupeynirligozlemeicecek=100;//Menüler
	int salatalik=100,haslanmisyumurtaadet=100,salam=100,kasar=100,bal=100,tereyagi=100,beyazPeynir=100;//Kahvaltýlar
	int pogacaCesitleri=100,acma=100,simit=100;//Hamur Ýþi

setlocale(LC_ALL, "Turkish");// Türkçe Karakter Kütüphanesini Atama

printf("\t----- BEYKOZ ÜNÝVERSÝTESÝ KANTÝN  MENÜSÜ -------\n\n");// Genel menümüz  
printf(" Gözleme çeþitlerini görmek için         1 \n Soðuk içeceklerin çeþidini görmek için  2\n");
printf(" Sýcak içeceklerin çeþidini görmek için  3\n Salata çeþitlerini görmek için          4\n Menüler görmek için                     5\n");
printf(" Þekelerlemerin çeþidini görmek için     6\n Kahvaltýlýk görmek için                 7\n Hamur iþi çeþitleri görmek için         8\n");
printf(" Omletleri görmek için                   9\n Tost çeþitleri görmek için             10\n Burger menu görmek için                11\n Meyve çeþitlerini görmek için          12\n");
printf(" Bisküvi/Gofret çeþitlerini görmek için 13\n Günün menüsünü görmek için             14'e basýnýz...\n");


scanf("%d",&istek);//
system("cls");//Ekran Yenileme
switch(istek) // ilgili bölüme týklayýnca daha çok çeþitler açýlýcak komut
{
	case 1://CASE 1--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
printf("\tGÖZLEME ÇEÞÝTLERÝ\n\n Peynirli Gözleme                  9.00 tl (Stok takibi için 1)\n Peynirli-Sucuklu Gözleme         10.00 tl (Stok takibi için 2)\n Patatesli Gözleme                 9.00 tl (Stok takibi için 3)\n Patatesli Peynirli Gözleme       10.00 tl (Stok takibi için 4)\n Otlu Gözleme                      8.00 tl (Stok takibi için 5)\n Otlu-Peynirli Gözleme            10.00 tl (Stok takibi için 6)\n\n");
scanf("%d",&istek2);
if(istek2==1)
{
	system("cls");
	printf("\tPEYNÝRLÝ GÖZLEME\n\nPeynirli gözleme  bugün  %d'taneydi\n",peynirliGozleme); //listedeki ilk ürün çeþidinden bir tanesini gösterir
	printf("Þu anda kalan Peynirli gözleme adedi öðrenmek için bugün kaç tane satýldýðýný girin: ");//kalan adedi gösterir.
	scanf("%d",&satis);//satýþ adedinin girilmesi isteniyor
		if(satis>=50) //satýþ adedi 50'den fazlaysa gözleme kalmadýðýný gösteriyor
	{
		printf("Elinizde Peynirli Gözleme kalmamýþtýr");
		break;
	}
	kar=(float)satis*9.00-peynirliGozlemealistl;//kar hesaplama burada ilk baþtaki tanýmlanan yani toptan alýnan fiyat üzerinden satýþý hesaplanmýþtýr.
	adet=peynirliGozleme-satis;//kaç adet satýldýðýný gösteren iþlem 
	printf("%d tane peynirli gözleme kalmýþtýr\n",adet);//kalan adedi gösterir.
		if(kar<0)//edilen zararý göserir.
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);//zarar ettiðimizi gösterir.
		break;
	}
	printf("Net kar= %.2ftl",kar);//toplam kar  göserir.
	
	
}
	else if(istek2==2)//eðer listedeki ikinci ürün seçilirse onu gösterir. Yukarýdaki ile ayný iþlemler tekrarlanýr.
{
	system("cls");
	printf("\tPEYNÝRLÝ-SUCUKLU GÖZLEME\n\nPeynirli-sucuklu gözleme  bugün  %d'taneydi\n",peynirliSucukluGozleme);
	printf("Þu anda kalan Peynirli-sucuklu gözleme adedi öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde Peynirli-sucuklu gözleme kalmamýþtýr");
		break;
	}
    kar=(float)satis*10.00-peynirliSucukluGozlemealistl;                                       
	adet=peynirliSucukluGozleme-satis;
	printf("%d tane peynirli gözleme kalmýþtýr\n",adet);
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
	printf("\tPATATESLÝ GÖZLEME\n\nPatatesli Gözleme  bugün  %d'taneydi\n",patatesliGozleme);
	printf("Þu anda kalan Patatesli Gözleme adedi öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);

	if(satis>=50)
	{
		printf("Elinizde Patatesli Gözleme kalmamýþtýr");
		break;
	}
	kar=(float)satis*9.00-patatesliGozlemealistl; 
	adet=patatesliGozleme-satis;
	printf("%d tane Patatesli Gözleme kalmýþtýr\n",adet);
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
	printf("\tPATATESLÝ PEYNÝRLÝ GÖZLEME\n\nPatatesli Peynirli Gözleme  bugün  %d'taneydi\n",patatesliPeynirliGozleme);
	printf("Þu anda kalan Patatesli Peynirli Gözleme adedi öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde  Peynirli Gözleme kalmamýþtýr");
		break;
	}
	kar=(float)satis*9.00-peynirliSucukluGozlemealistl; 
	adet=patatesliPeynirliGozleme-satis;
	printf("%d tane Patatesli Peynirli gözleme kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Patatesli Peynirli Gözleme adedi öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde Otlu  Gözleme kalmamýþtýr");
		break;
	}
	
	adet=otluGozleme-satis;
	kar=(float)satis*8.00-otluGozlemealistl; 
	printf("%d tane Otlu Gözleme kalmýþtýr\n",adet);
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
	printf("\tOTLU PEYNÝRLÝ GÖZLEME\n\n Otlu Peynirli Gözleme  bugün  %d'taneydi\n",otluPeynirliGozleme);
	printf("Þu anda kalan Otlu Peynirli Gözleme  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde Otlu Peynirli Gözleme kalmamýþtýr");
		break;
	}
	kar=(float)satis*10.00-otluPeynirliGozlemealistl; 
	adet=otluPeynirliGozleme-satis;
	printf("%d tane Otlu Peynirli Gözleme kalmýþtýr\n",adet);
		if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);	
}
//case 1 sonu (Gözleme Çeþitleri)

	break;
	
	case 2://CASE 2-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
printf("   ---------SOÐUK ÝÇECEKLER-----------\n\n Ayran 200ml                  2.50 tl (Stok Takibi için 1)\n Meþrubatlar(kutu) 330 ml     3.50 tl (Stok Takibi için 2)\n Meyveli soda 200 ml          2.50 tl (Stok Takibi için 3)\n Sade Soda 200ml              2.00 tl (Stok Takibi için 4)\n Su 500ml                     1.25 tl (Stok Takibi için 5)\n Limonata 330ml               2.50 tl (Stok Takibi için 6)\n Meyve Suyu                   2.50 tl (Stok Takibi için 7)\n Gazoz 200ml                  2.50 tl (Stok Takibi için 8)\n Kido süt 200ml               2.50 tl (Stok Takibi için 9)\n");
scanf("%d",&istek2);
if(istek2==1)
{
	system("cls");
	printf("\tAYRAN\n\nAyran  bugün  %d'taneydi\n",ayran);
	printf("Þu anda kalan ayran öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç ayran kalmamýþtýr");
		break;
	}
	
	adet=ayran-satis;
	printf("%d tane ayran kalmýþtýr\n",adet);
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
	printf("\tMEÞRUBATLAR(KUTU)\n\nMeþrubatlar(kutu)  bugün  %d'taneydi\n",mesrubatlarKutu );
	printf("Þu anda kalan Meþrubatlar(kutu) öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Meþrubat kalmamýþtýr");
		break;
	}
	
	adet=mesrubatlarKutu-satis;
	kar=(float)satis*3.50-mesrubatlarKutualistl; 
		printf("%d tane Meþrubat kalmýþtýr\n",adet);
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
	printf("\tMEYVELÝ SODA\n\nMeyveli Soda  bugün  %d'taneydi\n",meyveliSoda );
	printf("Þu anda kalan Meyveli Soda öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Meyveli Soda kalmamýþtýr");
		break;
	}
	adet=mesrubatlarKutu-satis;
	kar=(float)satis*2.50-meyveliSodaalistl; 
		printf("%d tane Meyveli Soda kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Sade Soda  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Sade Soda  kalmamýþtýr");
		break;
	}
	
	adet=sadeSoda-satis;
	kar=(float)satis*2.00-sadeSodaalistl; 
	printf("%d tane Sade Soda kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Su  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Su  kalmamýþtýr");
		break;
	}
	
	adet=Su -satis;
	printf("%d tane Su kalmýþtýr\n",adet);
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
	printf("\tLÝMONATA\n\nLimonata bugün  %d'taneydi\n",Limonata );
	printf("Þu anda kalan Limonata  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Limonata kalmamýþtýr");
		break;
	}
	adet=Limonata -satis;
	
	kar=(float)satis*2.50-Limonataalistl; 
		printf("%d tane Limonata kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Meysu Meyve Suyu  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Meysu Meyve Suyu kalmamýþtýr");
		break;
	}
	kar=(float)satis*2.50-meysuMeyveSuyualistl; 
	adet=meysuMeyveSuyu -satis;
	printf("%d tane Meysu Meyve Suyu kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Gazoz   öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Gazoz  kalmamýþtýr");
		break;
	}
		kar=(float)satis*2.50-Gazozalistl; 
	adet=Gazoz  -satis;
	printf("%d tane Gazoz   kalmýþtýr\n",adet);
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
	printf("\tKÝDO SÜT\n\nKido Süt bugün  %d taneydi\n",kidoSut );
	printf("Þu anda kalan Kido Süt   öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Kido Süt  kalmamýþtýr");
		break;
	}
	adet=kidoSut-satis;
	kar=(float)satis*2.50-kidoSutalistl; 
	printf("%d tane Kido Süt  kalmýþtýr\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break; 	
}//if sonu
//Case 2 sonu (Soðuk içecekler)


	case 3://CASE 3---------------------------------------------------------------------------------------------------------------------
printf("      ---------SICAK ÝÇECEKLER----------\n\n Çay              1.50 tl (Stok Takibi için 1)\n Büyük çay        3.50 tl (Stok takibi için 2)\n Bitki Çaylarý    2.50 tl (Stok takibi için 3)\n Americano        4.50 tl (Stok takibi için 4)\n Cappucino        5.00 tl (Stok takibi için 5)\n Latte            5.00 tl (Stok Takibi için 6)\n Espresso         6.00 tl (Stok Takibi için 7)\n Aromalý Kahve    2.50 tl (Stok Takibi için 8)\n Sýcak Çikolata   4.50 tl (Stok Takibi için 9)\n");
scanf("%d",&istek2);
if(istek2==1)
{
	system("cls");
	printf("\tÇAY\n\nÇay  bugün  %d'taneydi\n",cay);
	printf("Þu anda kalan Çay öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Çay kalmamýþtýr");
		break;
	}
	adet=cay-satis;
	kar=(float)satis*1.50-cayalistl;
	printf("%d tane Çay kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Büyük Çay öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Büyük Çay kalmamýþtýr");
		break;
	}
	adet=buyukCay-satis;
	kar=(float)satis*3.00-buyukCayalistl;
	printf("%d tane Büyük Çay kalmýþtýr\n",adet);
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
	printf("\tBitki Çaylarý\n\nBitki Çaylarý  bugün  %d'taneydi\n",bitkiCayi );
	printf("Þu anda kalan Bitki Çaylarý öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Bitki Çayý kalmamýþtýr");
		break;
	}
	adet=bitkiCayi-satis;
	kar=(float)satis*2.50-bitkiCayialistl;
	printf("%d tane Bitki Çayý kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Americano  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde Americano  kalmamýþtýr");
		break;
	}
	adet=americano-satis;
	kar=(float)satis*4.50-americanoalistl;
	printf("%d tane Americano kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Cappucino  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Cappucino  kalmamýþtýr");
		break;
	}
	adet=cappucino -satis;
	kar=(float)satis*5.00-cappucinoalistl;
	printf("%d tane Cappucino kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Latte  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Latte kalmamýþtýr");
		break;
	}
	adet=latte -satis;
	kar=(float)satis*5.00-lattealistl;
	printf("%d tane Latte kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Espresso  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç espresso Suyu kalmamýþtýr");
		break;
	}
	adet=espresso -satis;
	kar=(float)satis*4.00-espressoalistl;
	printf("%d tane Espresso kalmýþtýr\n",adet);
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
	printf("\tAROMALI KAHVE\n\nAromalý Kahve bugün  %d'taneydi\n",aromaliKahve  );
	printf("Þu anda kalan Aromalý Kahve   öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Aromalý Kahve  kalmamýþtýr");
		break;
	}
	adet=aromaliKahve -satis;
	kar=(float)satis*6.00-aromaliKahvealistl;
	printf("%d tane Aromalý Kahve kalmýþtýr\n",adet);
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
	printf("\tSICAK ÇÝKOLATA\n\nSýcak Çikolata bugün  %d taneydi\n",sicakCikolata  );
	printf("Þu anda kalan Sýcak Çikolata   öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Sýcak Çikolata  kalmamýþtýr");
		break;
	}
	adet=sicakCikolata-satis;
	kar=(float)satis*4.50-sicakCikolataalistl;
	printf("%d tane Sýcak Çikolata kalmýþtýr\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}//if sonu
//Case 3 sonu (sýcak içecekler)



break;
case 4://CASE 4----------------------------------------------------------------------------------------------------------------------------------------------------------
printf("      ----------SALATALAR---------\n\n Yeþil Salata                8.00 tl (Stok Takibi için 1)\n Peynirli Salatalar        10.00 tl (Stok takibi için 2)\n");
scanf("%d",&istek2);
if(istek2==1)
{
	system("cls");
	printf("\tYeþil Salata\n\nYeþil Salata  bugün  %d'taneydi\n",yesilSalata);
	printf("Þu anda kalan Yeþil Salata öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Yeþil Salata kalmamýþtýr");
		break;
	}
	adet=yesilSalata-satis;
	kar=(float)satis*8.00-yesilSalataalistl;
	printf("%d tane Yeþil Salata kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Peynirli Salata öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Peynirli Salata kalmamýþtýr");
		break;
	}
	adet=peynirliSalata-satis;
	kar=(float)satis*10.00-peynirliSalataalistl;
	printf("%d tane Peynirli Salata kalmýþtýr\n",adet);
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
printf("   ---------MENÜLER-----------\n\n Hamburger + Patates + Ýçecek             15.00 tl (Stok Takibi için 1)\n Cheeseburger + Patates+Ýçecek            15.00 tl (Stok Takibi için 2)\n Patso + Ýçecek                           12.00 tl (Stok Takibi için 3)\n Peynirli Gözleme + Ýçecek                12.00 tl (Stok Takibi için 4)\n Peynirli Sucuklu Gözleme + Ýçecek        12.00 tl (Stok Takibi için 5)\n Patates Gözleme + Ýçecek                 12.00 tl (Stok Takibi için 6)\n Otlu Peynirli Gözleme                    12.00 tl (Stok Takibi için 7)\n\n");
scanf("%d",&istek2);
if(istek2==1)
{
	system("cls");
	printf("\tHamburger+Patates+Ýçecek\n\nHamburger+Patates+Ýçecek  bugün  %d'taneydi\n",hamburgerpatatesicecek);
	printf("Þu anda kalan Hamburger+Patates+Ýçecek öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Hamburger+Patates+Ýçecek kalmamýþtýr");
		break;
	}
	adet=hamburgerpatatesicecek-satis;
	kar=(float)satis*15.00-hamburgerpatatesicecekalistl;
	printf("%d tane Hamburger+patates+Ýçecek kalmýþtýr\n",adet);
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
	printf("\tCheeseburger+Patates+Ýçecek\n\nCheeseburger+Patates+Ýçecek  bugün  %d'taneydi\n",cheeseburgerpatatesicecek);
	printf("Þu anda kalan Cheeseburger+Patates+Ýçecek öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Cheeseburger+Patates+Ýçecek kalmamýþtýr");
		break;
	}
	adet=cheeseburgerpatatesicecek-satis;
	kar=(float)satis*15.00-cheeseburgerpatatesicecekalistl;
	printf("%d tane Hamburger+patates+Ýçecek kalmýþtýr\n",adet);
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
	printf("\tPatso+Ýçecek\n\nPatso+Ýçecek  bugün  %d'taneydi\n",patsoicecek);
	printf("Þu anda kalan Patso+Ýçecek öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Patso+Ýçecek kalmamýþtýr");
		break;
	}
	adet=patsoicecek-satis;
	kar=(float)satis*12.00-patsoicecekalistl;
	printf("%d tane Patso+Ýçecek kalmýþtýr\n",adet);
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
	printf("\tPeynirli Gözleme + Ýçecek\n\nPeynirli Gözleme + Ýçecek  bugün  %d'taneydi\n",peynirligozlemeicecek);
	printf("Þu anda kalan Peynirli Gözleme + Ýçecek öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Peynirli Gözleme + Ýçecek kalmamýþtýr");
		break;
	}
	adet=peynirligozlemeicecek-satis;
	kar=(float)satis*12.00-peynirligozlemeicecekalistl;
	printf("%d tane Peynirli Gözleme + Ýçecek kalmýþtýr\n",adet);
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
	printf("\tPeynirli Sucuklu Gözleme+Ýçecek\n\nPeynirli Sucuklu Gözleme + Ýçecek  bugün  %d'taneydi\n",peynirlisucuklugozlemeicecek);
	printf("Þu anda kalan Peynirli Sucuklu Gözleme + Ýçecek öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Peynirli Sucuklu Gözleme + Ýçecek kalmamýþtýr");
		break;
	}
	adet=peynirlisucuklugozlemeicecek-satis;
	kar=(float)satis*12.00-peynirlisucuklugozlemeicecekalistl;
	printf("%d tane Peynirli Sucuklu Gözleme + Ýçecek kalmýþtýr\n",adet);
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
	printf("\tPatates Gözleme + Ýçecek\n\nPatates Gözleme + Ýçecek  bugün  %d'taneydi\n",patatesgozlemeicecek);
	printf("Þu anda kalan Patates Gozleme + Ýçecek öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Patates Gözleme + Ýçecek kalmamýþtýr");
		break;
	}
	adet=patatesgozlemeicecek-satis;
	kar=(float)satis*12.00-patatesgozlemeicecekalistl;
	printf("%d tane Patates Gözleme + Ýçecek kalmýþtýr\n",adet);
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
	printf("\tOtlu Peynirli Gözleme + Ýçecek\n\nOtlu Peynirli Gözleme + Ýçecek  bugün  %d'taneydi\n",otlupeynirligozlemeicecek);
	printf("Þu anda kalan Otlu Peynirli Gözleme + Ýçecek öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Otlu Peynirli Gözleme + Ýçecek kalmamýþtýr");
		break;
	}
	adet=otlupeynirligozlemeicecek-satis;
	kar=(float)satis*12.00-otlupeynirligozlemeicecekalistl;
	printf("%d tane Otlu Peynirli Gözleme + Ýçecek kalmýþtýr\n",adet);
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
printf("   ---------ÞEKERLEMELER-----------\n\n Polo              2.50 tl (Stok Takibi için 1)\n Mentos            2.50 tl (Stok Takibi için 2)\n\n");
scanf("%d",&istek2);
if(istek2==1)
{
	system("cls");
	printf("\tPolo\n\nPolo  bugün  %d'taneydi\n",polo);
	printf("Þu anda kalan Polo öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Polo kalmamýþtýr");
		break;
	}
	adet=polo-satis;
	kar=(float)satis*2.50-poloalistl;
	printf("%d tane Polo kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Mentos öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)//koþulumuz
	{
		printf("Elinizde hiç Mentos kalmamýþtýr");
		break;
	}
	adet=mentos-satis;//adet hesaplama
	kar=(float)satis*2.50-mentosalistl;//kar hesaplama 
	printf("%d tane mentos kalmýþtýr\n",adet); // kalan adet
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}//if sonu
//Case 6 sonu (Þekerlemeler)



break;
case 7: //CASE 7--------------------------------------------------------------------------------------------------------------
printf("   ---------KAHVALTILAR-----------\n\n Salatalýk 60 gr               1.50 tl (Stok Takibi için 1)\n Haþlanmýþ Yumurta Adet        1.50 tl (Stok Takibi için 2)\n Salam 30 gr                   2.00 tl (Stok Takibi için 3)\n Kaþar 30 gr                   2.00 tl (Stok Takibi için 4)\n Bal                           2.00 tl (Stok Takibi için 5)\n Tereyaðý 10 gr                2.00 tl (Stok Takibi için 6)\n Beyaz Peynir 30 gr           12.00 tl (Stok Takibi için 7)\n\n");
scanf("%d",&istek2); 
if(istek2==1)
{
	system("cls");
	printf("\tSalatalýk 60 gr \n\nSalatalýk 60 gr  bugün  %d'taneydi\n",salatalik);
	printf("Þu anda kalan Salatalýk 60 gr öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Salatalýk 60 gr kalmamýþtýr");
		break;
	}
	adet=salatalik-satis;
	kar=(float)satis*1.50-salatalikalistl;
	printf("%d tane Salatalýk 60 gr  kalmýþtýr\n",adet);
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
	printf("\tHaþlanmýþ Yumurta Adet\n\nHaþlanmýþ Yumurta Adet  bugün  %d'taneydi\n",haslanmisyumurtaadet);
	printf("Þu anda kalan Haþlanmýþ Yumurta Adet öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Haþlanmýþ Yumurta Adet kalmamýþtýr");
		break;
	}
	adet=haslanmisyumurtaadet-satis;
	kar=(float)satis*1.50-haslanmisyumurtaalistl;
	printf("%d tane Haþlanmýþ Yumurta Adet kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Salam 30 gr öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Salam 30 gr  kalmamýþtýr");
		break;
	}
	adet=salam-satis;
	kar=(float)satis*2.00-salamalistl;
	printf("%d tane Salam kalmýþtýr\n",adet);
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
	printf("\tKaþar 30 gr \n\nPeynirli Kaþar 30 gr   bugün  %d'taneydi\n",kasar);
	printf("Þu anda kalan Kaþar 30 gr  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Kaþar 30 gr kalmamýþtýr");
		break;
	}
	adet=kasar-satis;
	kar=(float)satis*2.00-kasaralistl;
	printf("%d tane Kaþar 30 gr kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Bal 10 gr öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Bal 10 gr kalmamýþtýr");
		break;
	}
	adet=bal-satis;
	printf("%d tane Bal 10 gr  kalmýþtýr\n",adet);
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
	printf("\tTereyaðý 10 gr\n\nTereyaðý 10 gr  bugün  %d'taneydi\n",tereyagi);
	printf("Þu anda kalan Tereyaðý 10 gr öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Tereyaðý 10 gr kalmamýþtýr");
		break;
	}
	adet=tereyagi-satis;
	kar=(float)satis*2.00-tereyagialistl;
	printf("%d tane Tereyaðý 10 gr  kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Beyaz Peynir 30 gr  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Beyaz Peynir 30 gr kalmamýþtýr");
		break;
	}
	adet=beyazPeynir-satis;
	kar=(float)satis*2.00-beyazPeyniralistl;
	printf("%d tane Beyaz Peynir 30 gr kalmýþtýr\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
//case 7 sonu (Kahvaltýlar)

break;
case 8: //CASE 8-------------------------------------------------------------------------------------------------------------------------
printf("   ---------HAMUR ÝÞÝ-----------\n\n Poðaça Çeþitleri        2.00 tl (Stok Takibi için 1)\n Açma                    2.00 tl (Stok Takibi için 2)\n Simit                   2.00 tl (Stok Takibi için 3)\n\n");
scanf("%d",&istek2);
if(istek2==1)
{
	system("cls");
	printf("\tPoðaça ÇEþitleri\n\nPoðaça Çeþitleri  bugün  %d'taneydi\n",pogacaCesitleri);
	printf("Þu anda kalan Poðaça Çeþitleri öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Poðaça Çeþitleri kalmamýþtýr");
		break;
	}
	adet=pogacaCesitleri-satis;
	kar=(float)satis*2.00-pogacaCesitlerialistl;
	printf("%d tane Poðaça Çeþitleri kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Açma öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Açma kalmamýþtýr");
		break;
	}
	adet=acma-satis;
	kar=(float)satis*2.00-acmaalistl;
	printf("%d tane Açma kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Simit öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=100)
	{
		printf("Elinizde hiç Simit kalmamýþtýr");
		break;
	}
	adet=simit-satis;
	kar=(float)satis*2.00-simitalistl;
	printf("%d tane Simit kalmýþtýr\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
	
	
}//if sonu
break;
//case 8 sonu (hamur iþi)


break;
case 9: //CASE 9-------------------------------------------------------------------------------------------------------------------------------------------------------
printf("      ---------OMLET ÇEÞÝTLERÝ----------\n\n Beyaz Peynirli Omlet            7.00 tl (Stok Takibi için 1)\n Kaþarlý Omlet                   8.00 tl (Stok takibi için 2)\n Karýþýk Omlet                   9.00 tl (Stok takibi için 3)\n Menemen                        10.00 tl (Stok takibi için 4)\n");
scanf("%d",&istek2);
if(istek2==1)
{
system("cls");
	printf("\tBEYAZ PEYNÝRLÝ OMLET\n\nBeyaz Peynirli Omlet bugün  %d taneydi\n",beyazPeynirliOmlet  );
	printf("Þu anda kalan Beyaz Peynirli Omlet  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Beyaz Peynirli Omlet  kalmamýþtýr");
		break;
	}
	adet=beyazPeynirliOmlet-satis;
	kar=(float)satis*7.00-beyazPeynirliOmletalistl;
	printf("%d tane Beyaz Peynirli Omlet  kalmýþtýr\n",adet);
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
	printf("\t KAÞARLI OMLET\n\nKaþarlý Omlet bugün  %d taneydi\n",kasarliOmlet  );
	printf("Þu anda kalan Kaþarlý Omlet   öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Kaþarlý Omlet  kalmamýþtýr");
		break;
	}
	adet=kasarliOmlet-satis;
	kar=(float)satis*8.00-kasarliOmletalistl;
	printf("%d tane Kaþarlý Omlet  kalmýþtýr\n",adet);
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
	printf("\t KARIÞIK OMLET\n\nKarýþýk Omlet bugün  %d taneydi\n",karisikOmlet  );
	printf("Þu anda kalan Karýþýk Omlet   öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Karýþýk Omlet  kalmamýþtýr");
		break;
	}
	adet=karisikOmlet-satis;
	kar=(float)satis*9.00-karisikOmletalistl;
	printf("%d tane Karýþýk Omlet kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Menemen   öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Menemen  kalmamýþtýr");
		break;
	}
	adet=menemen-satis;
	kar=(float)satis*10.00-menemenalistl;
	printf("%d tane Menemen kalmýþtýr\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;


	
}//if sonu
//case 9 sonu (Omlet Çeþitleri)





break;	
case 10://CASE 10-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
printf("      ---------TOST ÇEÞÝTLERÝ----------\n\n Kaþarlý tost             6.00 tl (Stok Takibi için 1)\n Çift Kaþarlý Tost        7.00 tl (Stok takibi için 2)\n Karýþýk Tost             7.00 tl (Stok takibi için 3)\n Ayvalýk Tost             7.00 tl (Stok takibi için 4)\n Pizza Tost               7.00 tl (Stok takibi için 5)\n");
scanf("%d",&istek2);
if(istek2==1)
{
system("cls");
	printf("\tKAÞARLI TOST\n\nKaþarlý tost bugün  %d taneydi\n",kasarliTost  );
	printf("Þu anda kalan Kaþarlý Tost   öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Kaþarlý Tost  kalmamýþtýr");
		break;
	}
	adet=kasarliTost-satis;
	kar=(float)satis*6.00-kasarliTostalistl;
	printf("%d tane Kaþarlý Tost  kalmýþtýr\n",adet);
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
	printf("\tÇÝFT KAÞARLI TOST\n\nÇift kaþarlý tost bugün  %d taneydi\n",ciftKasarliTost  );
	printf("Þu anda kalan Çift Kaþarlý Tost   öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Çift Kaþarlý Tost  kalmamýþtýr");
		break;
	}
	adet=ciftKasarliTost-satis;
	kar=(float)satis*7.00-ciftKasarliTostalistl;
	printf("%d tane Çift Kaþarlý Tost  kalmýþtýr\n",adet);
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
	printf("\t KARIÞIK TOST\n\n Karýþýk tost bugün  %d taneydi\n",karisikTost  );
	printf("Þu anda kalan Karýþýk tost   öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç  Karýþýk tost  kalmamýþtýr");
		break;
	}
	adet=karisikTost-satis;
	kar=(float)satis*7.00-karisikTostalistl;
	printf("%d tane Karýþýk tost   kalmýþtýr\n",adet);
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
	printf("\t AYVALIK TOST\n\n Ayvalýk Tost bugün  %d taneydi\n",ayvalikTost  );
	printf("Þu anda kalan Ayvalýk Tost  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Ayvalýk Tost  kalmamýþtýr");
		break;
	}
	adet=ayvalikTost-satis;
	kar=(float)satis*7.00-ayvalikTostalistl;
	printf("%d tane Ayvalýk Tost   kalmýþtýr\n",adet);
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
	printf("\t PÝZZA TOST\n\n Pizza Tost bugün  %d taneydi\n",pizzaTost );
	printf("Þu anda kalan Pizza Tost  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Pizza Tost kalmamýþtýr");
		break;
	}
	adet=pizzaTost-satis;
	kar=(float)satis*7.00-pizzaTostalistl;
	printf("%d tane Pizza Tost   kalmýþtýr\n",adet);
	if(kar<0)
	{
		printf("Üzgünüm! %.2ftl kadar zarar ettiniz",kar);
		break;
	}
	printf("Tebrikler! Net kar= %.2ftl",kar);
	break;
}// if sonu
//case 10 sonu (Tost Çeþitleri)


break;
case 11://CASE 11---------------------------------------------------------------------------------------------------------------------------
printf("      ---------BURGER MENÜ----------\n\n Hamburger+Patates          12.00 tl (Stok Takibi için 1)\n Cheeseburger+Patates       13.00 tl (Stok takibi için 2)\n Patso                       9.00 tl (Stok takibi için 3)\n ");
scanf("%d",&istek2);
if(istek2==1)
{	
	system("cls");
	printf("\t HAMBURGER+PATATES MENÜ\n\n Hamburger+Patates menü bugün  %d taneydi\n",hamburgerPatates);
	printf("Þu anda kalan Hamburger+Patates menü adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Hamburger+Patates menü kalmamýþtýr");
		break;
	}
	adet=hamburgerPatates-satis;
	kar=(float)satis*12.00-hamburgerPatatesalistl;
	printf("%d tane Hamburger+Patates menü   kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Cheeseburger+Patates menü adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Cheeseburger+Patates menü kalmamýþtýr");
		break;
	}
	adet=cheeseburgerPatates-satis;
	kar=(float)satis*13.00-cheeseburgerPatatesalistl;
	printf("%d tane Cheeseburger+Patates menü   kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Patso adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Cheeseburger+Patates menü kalmamýþtýr");
		break;
	}
	adet=patso-satis;
	kar=(float)satis*9.00-patsoalistl;
	printf("%d tane Patso menü   kalmýþtýr\n",adet);
	
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
	printf("Þu anda kalan Elma adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Elma kalmamýþtýr");
		break;
	}
	adet=elma-satis;
	kar=(float)satis*2.00-elmaalistl;
	printf("%d tane Elma   kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Armut adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Armut kalmamýþtýr");
		break;
	}
	adet=armut-satis;
	kar=(float)satis*2.00-armutalistl;
	printf("%d tane Armut   kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Armut adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Portakal kalmamýþtýr");
		break;
	}
	adet=portakal-satis;
	kar=(float)satis*2.00-portakalalistl;
	printf("%d tane Portakal kalmýþtýr\n",adet);
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
printf("      ---------BÝSKÜVÝ/GOFRET----------\n\n Albeni                           2.25 tl (Stok Takibi için 1)\n Albeni atýþtýrmalýk              2.50 tl (Stok takibi için 2)\n Benimo Lokmalýk                  2.50 tl (Stok takibi için 3)\n Biskrem kakaolu                  2.00 tl (Stok takibi için 4)\n Browni Intense                   2.50 tl (Stok takibi için 5)\n Burçak                           2.50 tl (Stok Takibi için 6)\n Canga                            2.50 tl (Stok Takibi için 7)\n Canpare Çikolata                 2.50 tl (Stok Takibi için 8)\n Tutku 110 gr                     2.50 tl (Stok Takibi için 9)\n");	
printf(" Caramio Karamelli Çikolatalý     2.50 tl (Stok Takibi için 10)\n Cin lokmalýk                     2.00 tl (Stok Takibi için 11)\n Cocostar                         2.00 tl (Stok Takibi için 12)\n");
printf(" Crax Çubuk Kraker                2.00 tl (Stok Takibi için 13)\n Çizi Peynirli                    2.50 tl (Stok Takibi için 14)\n Çizi sade                        2.50 tl (Stok Takibi için 15)\n Çokonat gofret                   2.50 tl (Stok Takibi için 16)\n");
printf(" Dido Sütlü Çikolatalý Gofret     2.50 tl (Stok Takibi için 17)\n Eti Burçak Sütlü Çikolatalý      2.50 tl (Stok Takibi için 18)\n Eti çay keyfi ÇÝKOLATALI         2.50 tl (Stok Takibi için 19)\n Eti form                         1.50 tl (Stok Takibi için 20)\n Saklýköy                         2.50 tl (Stok Takibi için 21)\n Eti karam                        2.50 tl (Stok Takibi için 22)\n Eti popkek                       1.75 tl (Stok Takibi için 23)\n Ülker Çikolatalý gofret 33gr     2.50 tl (Stok Takibi için 24)\n");
printf(" Halley atýþtýrmalýk              2.50 tl (Stok Takibi için 25)\n Hanýmeller                       2.50 tl (Stok Takibi için 26)\n Ýkram Çikolata                   2.50 tl (Stok Takibi için 27)\n Laviva Bar                       2.50 tl (Stok Takibi için 28)\n Probis Atýþtýrmalýk              2.50 tl (Stok Takibi için 29)\n Kuruyemiþ Karýþýk                3.50 tl (Stok Takibi için 30)");
scanf("%d",&istek2);
if(istek2==1)
{
system("cls");
	printf("\t ALBENÝ\n\n Albeni bugün  %d taneydi\n",albeni);
	printf("Þu anda kalan Albeni adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Albeni kalmamýþtýr");
		
	}
	adet=albeni-satis;
	kar=(float)satis*2.25-albenialistl;
	printf(" %d tane Albeni   kalmýþtýr\n",adet);
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
	printf("\t ALBENÝ\n\n Albeni atýþtýrmalýk bugün  %d taneydi\n",albeniAtistirmalik);
	printf("Þu anda kalan Albeni atýþtýrmalýk adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Albeni atýþtýrmalýk kalmamýþtýr");
		break;
	}
	adet=albeniAtistirmalik-satis;
	kar=(float)satis*2.50-albeniAtistirmalikalistl;
	printf("%d tane Albeni atýþtýrmalýk   kalmýþtýr\n",adet);
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
	printf("\t BENÝMOLOKMOLÝK\n\n Benimo Lokmalýk  bugün  %d taneydi\n",benimoLokmalik);
	printf("Þu anda kalan Benimo Lokmalýk adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Benimo Lokmalýk kalmamýþtýr");
		break;
	}
	adet=benimoLokmalik-satis;
	kar=(float)satis*2.50-benimoLokmalikalistl;
	printf("%d tane Benimo Lokmalýk   kalmýþtýr\n",adet);
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
	printf("\t BÝSKREM\n\n Biskrem  bugün  %d taneydi\n",biskremKakaolu);
	printf("Þu anda kalan Biskrem adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Biskrem kalmamýþtýr");
		break;
	}
	adet=biskremKakaolu-satis;
	kar=(float)satis*2.00-biskremKakaolualistl;
	printf("%d tane Benimo Lokmalýk   kalmýþtýr\n",adet);
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
	printf("\t BROWNÝ\n\n Browni  bugün  %d taneydi\n",browniIntense);
	printf("Þu anda kalan Browni  adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Browni  kalmamýþtýr");
		break;
	}
	adet=browniIntense-satis;
	kar=(float)satis*2.50-browniIntensealistl;
	printf("%d tane Browni    kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Burçak  adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Burçak  kalmamýþtýr");
		break;
	}
	adet=burcak-satis;
	kar=(float)satis*2.50-burcakalistl;
	printf("%d tane Burçak    kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Canga  adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Canga  kalmamýþtýr");
		break;
	}
	adet=canga-satis;
	kar=(float)satis*2.50-cangaalistl;
	printf("%d tane Canga    kalmýþtýr\n",adet);
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
	printf("\t CANPARE ÇÝKOLATA\n\n Canpare Çikolata  bugün  %d taneydi\n",canpareCikolata);
	printf("Þu anda kalan Canpare Çikolata  adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Canpare Çikolata  kalmamýþtýr");
		break;
	}
	adet=canpareCikolata-satis;
	kar=(float)satis*2.50-canpareCikolataalistl;
	printf("%d tane Canpare Çikolata    kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Tutku  adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Tutku  kalmamýþtýr");
		break;
	}
	adet=tutku-satis;
	kar=(float)satis*2.50-tutkualistl;
	printf("%d tane Tutku   kalmýþtýr\n",adet);
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
	printf("\t CARAMÝO\n\n Caramio  bugün  %d taneydi\n",caramio);
	printf("Þu anda kalan Caramio  adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Caramio  kalmamýþtýr");
		break;
	}
	adet=caramio-satis;
	kar=(float)satis*2.50-caramioalistl;
	printf("%d tane Caramio   kalmýþtýr\n",adet);
	
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
	printf("\t ETÝ CÝN\n\n Eti Cin  bugün  %d taneydi\n",cin);
	printf("Þu anda kalan Eti Cin adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Eti Cin  kalmamýþtýr");
		break;
	}
	adet=cin-satis;
		kar=(float)satis*2.00-cinalistl;
	printf("%d tane Eti Cin   kalmýþtýr\n",adet);
	
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
	printf("Þu anda kalan Coco Star adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Coco Star  kalmamýþtýr");
		break;
	}
	adet=cocostar-satis;
	kar=(float)satis*2.00-cocostaralistl;
	printf("%d tane Coco Star  kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Crax  adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Crax   kalmamýþtýr");
		break;
	}
	adet=crax-satis;
	kar=(float)satis*2.00-craxalistl;
	printf("%d tane Crax  kalmýþtýr\n",adet);
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
	printf("\t PEYNÝRLÝ ÇÝZÝ\n\n Peynirli Çizi   bugün  %d taneydi\n",ciziPeynirli);
	printf("Þu anda kalan Peynirli Çizi adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Peynirli Çizi   kalmamýþtýr");
		break;
	}
	adet=ciziPeynirli-satis;
	kar=(float)satis*2.50-ciziPeynirlialistl;
	printf("%d tane Peynirli Çizi  kalmýþtýr\n",adet);
	
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
	printf("\tSADE ÇÝZÝ \n\n Sade Çizi   bugün  %d taneydi\n",ciziSade);
	printf("Þu anda kalan Sade Çizi adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Sade Çizi   kalmamýþtýr");
		break;
	}
	adet=ciziSade-satis;
	kar=(float)satis*2.50-ciziSadealistl;
	printf("%d tane Sade Çizi kalmýþtýr\n",adet);
	
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
	printf("Þu anda kalan Çokonat Gofret  adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Çokonat Gofret   kalmamýþtýr");
		break;
	}
	adet=cokonatGofret-satis;
	kar=(float)satis*2.50-cokonatGofretalistl;
	printf("%d tane Çokonat Gofret  kalmýþtýr\n",adet);
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
	printf("\tDÝDO \n\n Dido  bugün  %d taneydi\n",dido);
	printf("Þu anda kalan Dido  adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Dido  kalmamýþtýr");
		break;
	}
	adet=dido-satis;
	kar=(float)satis*2.50-didoalistl;
	printf("%d tane Dido  kalmýþtýr\n",adet);
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
	printf("\tETÝ BURÇAK SÜTLÜ ÇÝKOLATALI \n\n Eti Burçak Sütlü Çikolatalý  bugün  %d taneydi\n",etiBurcakSutluCikolatali);
	printf("Þu anda kalan Eti Burçak Sütlü Çikolatalý  adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Eti Burçak Sütlü Çikolatalý  kalmamýþtýr");
		break;
	}
	adet=etiBurcakSutluCikolatali-satis;
	kar=(float)satis*2.50-etiBurcakSutluCikolatalialistl;
	printf("%d tane Eti Burçak Sütlü Çikolatalý  kalmýþtýr\n",adet);
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
	printf("\tETÝ ÇAY KEYFÝ ÇÝKOLATALI \n\n Eti Çay Keyfi Çikolatalý  bugün  %d taneydi\n",etiCaykeyfiCikolatali);
	printf("Þu anda kalan Eti Çay Keyfi Çikolatalý  adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Eti Çay Keyfi Çikolatalý  kalmamýþtýr");
		break;
	}
	adet=etiCaykeyfiCikolatali-satis;
	kar=(float)satis*2.50-etiCaykeyfiCikolatalialistl;
	printf("%d tane Eti Çay Keyfi Çikolatalý  kalmýþtýr\n",adet);
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
	printf("\tETÝ FORM \n\n Eti Form  bugün  %d taneydi\n",etiForm);
	printf("Þu anda kalan Eti Form   adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Eti Form   kalmamýþtýr");
		break;
	}
	adet=etiForm-satis;
	kar=(float)satis*1.50-etiFormalistl;
	printf("%d tane Eti Form   kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Sakliköy    adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Sakliköy    kalmamýþtýr");
		break;
	}
	adet=saklikoy-satis;
	kar=(float)satis*2.50-saklikoyalistl;
	printf("%d tane Eti Sakliköy   kalmýþtýr\n",adet);
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
	printf("\tETÝ KARAM \n\n Eti Karam   bugün  %d taneydi\n",etiKaram);
	printf("Þu anda kalan Eti Karam    adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Eti Karam    kalmamýþtýr");
		break;
	}
	adet=etiKaram-satis;
	kar=(float)satis*2.50-etiKaramalistl;
	printf("%d tane Eti Eti Karam   kalmýþtýr\n",adet);
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
	printf("\tETÝ POPKEK \n\n Eti Popkek    bugün  %d taneydi\n",etiPopkek);
	printf("Þu anda kalan Eti Popkek     adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Eti Popkek     kalmamýþtýr");
		break;
	}
	adet=etiPopkek-satis;
		kar=(float)satis*1.75-etiPopkekalistl;
	printf("%d tane Eti Popkek  kalmýþtýr\n",adet);
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
	printf("\tÇÝKOLATALI GOFRET \n\nÇikolatalý Gofret  bugün  %d taneydi\n",ulkerCikolataliGofret);
	printf("Þu anda kalan Çikolatalý Gofret   adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Çikolatalý Gofret  kalmamýþtýr");
		break;
	}
	adet=ulkerCikolataliGofret-satis;
	kar=(float)satis*2.50-ulkerCikolataliGofretalistl;
	printf("%d tane Çikolatalý Gofret  kalmýþtýr\n",adet);
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
	printf("Þu anda kalan Halley  adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Halley kalmamýþtýr");
		break;
	}
	adet=halleyAtistirmail-satis;
	kar=(float)satis*2.50-halleyAtistirmailalistl;
	printf("%d tane Halley  kalmýþtýr\n",adet);
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
	printf("\tHANIMELLER \n\nHanýmmeller  bugün  %d taneydi\n",hanimeller);
	printf("Þu anda kalan Hanýmmeller  adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Hanýmmeller  kalmamýþtýr");
		break;
	}
	adet=hanimeller-satis;
	kar=(float)satis*2.50-hanimelleralistl;
	printf("%d tane Hanýmmeller  kalmýþtýr\n",adet);
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
	printf("\tÝKRAM \n\nÝkram  bugün  %d taneydi\n",ikram);
	printf("Þu anda kalan Ýkram   adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Ýkram   kalmamýþtýr");
		break;
	}
	adet=ikram-satis;
	kar=(float)satis*2.50-ikramalistl;
	printf("%d tane Ýkram   kalmýþtýr\n",adet);
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
	printf("\tLAVÝVA BAR\n\nLaviva Bar  bugün  %d taneydi\n",lavivaBar);
	printf("Þu anda kalan Laviva Bar   adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Laviva Bar   kalmamýþtýr");
		break;
	}
	adet=lavivaBar-satis;
	kar=(float)satis*2.50-lavivaBaralistl;
	printf("%d tane Laviva Bar  kalmýþtýr\n",adet);
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
	printf("\tPROBÝS\n\nProbis  bugün  %d taneydi\n",probis);
	printf("Þu anda kalan Probis   adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Probis   kalmamýþtýr");
		break;
	}
	adet=probis-satis;
	kar=(float)satis*2.50-probisalistl;
	printf("%d tane Probis  kalmýþtýr\n",adet);
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
	printf("\tKURUYEMÝÞ\n\nKuruyemis  bugün  %d taneydi\n",kuruyemis);
	printf("Þu anda kalan Kuruyemis    adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Probis   kalmamýþtýr");
		break;
	}
	adet=kuruyemis-satis;
	kar=(float)satis*2.50-kuruyemisalistl;
	printf("%d tane Kuruyemis  kalmýþtýr\n",adet);
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
printf("      ---------GÜNÜN MENÜSÜ----------\n\n Çorba                5.00 tl (Stok Takibi için 1)\n Yardýmcý Yemek       5.00 tl (Stok takibi için 2)\n Ana Yemek Etli       8.00 tl (Stok takibi için 3)\n Ana Yemek Sebzeli    6.00 tl (Stok takibi için 4)\n Salata/Meyve         5.00 tl (Stok takibi için 5)\n Tabldot             15.00 tl (Stok takibi için 6)\n  ");
scanf("%d",&istek2);
if(istek2==1)
{
	
	system("cls");
	printf("\t ÇORBA\n\n Çorba bugün  %d taneydi\n",corba);
	printf("Þu anda kalan Çorba adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Çorba kalmamýþtýr");
		break;
	}
	adet=corba-satis;
	kar=(float)satis*5.00-corbaalistl;
	printf("%d tane Çorba   kalmýþtýr\n",adet);
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
	printf("\t YARDIMCI YEMEK\n\n Yardýmcý yemek bugün  %d taneydi\n",yardimciyemek);
	printf("Þu anda kalan  Yardýmcý yemek adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç  Yardýmcý yemek kalmamýþtýr");
		break;
	}
	adet=yardimciyemek-satis;
	kar=(float)satis*5.00-yardimciyemekalistl;
	printf("%d tane  Yardýmcý yemek  kalmýþtýr\n",adet);
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
	printf("\t ANA YEMEK ETLÝ\n\n  Ana Yemek Etli  bugün  %d taneydi\n",anayemeketli);
	printf("Þu anda kalan  Ana Yemek Etli  adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç  Ana Yemek Etli  kalmamýþtýr");
		break;
	}
	adet=anayemeketli-satis;
	kar=(float)satis*8.00-anayemeketlialistl;
	printf("%d tane  Ana Yemek Etli    kalmýþtýr\n",adet);
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
	printf("\t ANAYEMEKSEBZELÝ\n\n Ana Yemek Sebzeli  bugün  %d taneydi\n",anayemeksebzeli);
	printf("Þu anda kalan Ana Yemek Sebzeli  adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Ana Yemek Sebzeli  kalmamýþtýr");
		break;
	}
	adet=anayemeksebzeli-satis;
	kar=(float)satis*6.00-anayemeksebzelialistl;
	printf("%d tane Ana Yemek Sebzeli    kalmýþtýr\n",adet);
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
	printf("\t ANAYEMEKSEBZELÝ\n\n Salata/Meyve  bugün  %d taneydi\n",salatameyve);
	printf("Þu anda kalan Salata/Meyve  adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Salata/Meyve  kalmamýþtýr");
		break;
	}
	adet=salatameyve-satis;
	kar=(float)satis*5.00-anayemeksebzelialistl;
	printf("%d tane Salata/Meyve    kalmýþtýr\n",adet);
	
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
	printf("Þu anda kalan Tabldot  adedini  öðrenmek için bugün kaç tane satýldýðýný girin: ");
	scanf("%d",&satis);
	if(satis>=50)
	{
		printf("Elinizde hiç Tabldot  kalmamýþtýr");
		break;
	}
	adet=tabldot-satis;
	kar=(float)satis*15.00-tabldotalistl;
	printf("%d tane Tabldot   kalmýþtýr\n",adet);
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
	printf("Yanlýþ bir deðer girdiniz");
}//switch sonu
}//main sonu
