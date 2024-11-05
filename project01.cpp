#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	/*/string isim;    //tanýmlama
	isim = "Ali"; //atama

	int yas;
	yas = 21;
	cout << "Bir zamanlar " << isim << " isminde bir genc varmis." << endl << isim << " " << yas << " yasindaymis." << endl;
	cout << isim << " ismini sever ancak buludugu " << yas << " yasini sevmezmis.\n";

	/*deðiþken isimlerinde ilk karakter rakam olamaz.
	deðiþkenlerde türkçe karakter olmaz
	deðiþken isimlerde boþluk olmaz
	deðiþkenlerde arada nokta vb. karakterler kullanýlmaz.ama int sayi1 yapabilirsin
	deðiþkenleri camelCase standardýna uygun yazýlmasý tavsiye edilir. e.x. birinciSinavNotu
	


	int dogumYili = 1980;
	string isim = "Kaan Kaya";
	float sayisalNotOrtalamasi = 3.47f;
	double pi = 3.14435783857439;
	bool sinifiGectimi = false;
	char notOrtalamasiHarf = 'B'; //charda tek týrnak kullanýlýr//
	//char veri tipinde ascii table daki sayýlarý tek týrnaksýz yazabilirsin örnek 65 yazarsan A diye okunucak//


	cout << "Merhaba sayin " << isim << endl;
	cout << "Dogum yili:" << dogumYili << endl;
	cout << "Sayisal Not Ortalamasi" << sayisalNotOrtalamasi << endl;
	cout << "Sinifi Gectiniz mi: " << sinifiGectimi << endl;
	cout << "Not Ortalamasi:" << notOrtalamasiHarf << endl;




	int dogumYili = 1980;
string isim = "Kaan Kaya";
float sayisalNotOrtalamasi = 3.47f;
double pi = 3.14435783857439;
bool sinifiGectimi = false;
char notOrtalamasiHarf = 'B'; //charda tek týrnak kullanýlýr//
//char veri tipinde ascii table daki sayýlarý tek týrnaksýz yazabilirsin örnek 65 yazarsan A diye okunucak//
int quizNot1 = 72;
int quizNot2 = 51;
float quizOrtalama =   (quizNot1 + quizNot2) / 2;
//int floata dödürürken ya eþitliðe (float)yazarýz ya da intlerden birini float yaparýz ama float için 72f þeklinde deðil 72.f þeklinde yazarýz//

cout << "Merhaba sayin " << isim << endl;
cout << "Dogum yili:" << dogumYili << endl;
cout << "Sayisal Not Ortalamasi" << sayisalNotOrtalamasi << endl;
cout << "Sinifi Gectiniz mi: " << sinifiGectimi << endl;
cout << "Not Ortalamasi:" << notOrtalamasiHarf << endl;
cout << "Quizler Ortalamasi: " << quizOrtalama << endl;

int x = 20;
int y = 10;
int z = x + y;
int q = x - y;
int c = x * y;
int v = 12 % 10; // bu iþaret bölme iþleminde kalaný verir//

cout << z << endl;
cout << q << endl;
cout << c << endl;
cout << v << endl;

	
	
	
    string isim;
	int en, boy, alan;


	cout << "Lutfen adinizi yaziniz." << endl;
	cin >> isim;
	cout << "Hosgeldin " << isim << " Geometrik hesaplama kursuna baslayabilirsin.\n\n";
	cout << "Lutfen dikdortgenin enini giriniz:";
	cin >> en;
	cout << "Lutfen dikdortgenin boyunu giriniz:";
	cin >> boy;
	//hesaplama iþlemi
	alan = en * boy ;
	cout << "Sayin " << isim << " isleminizin sonucu: " << alan << endl;
	*/

	/*
	int sonuc;
	sonuc = pow(2, 3);
	cout << sonuc << endl;

	int cevap, x,y;
	cout << "Lutfen ussu alinacak sayiyi yaziniz x:";
	cin >> x;
	cout << "Lutfen ussu yaziniz y:";
	cin >> y;
	cevap = pow(x, y);
	cout << "sonuc: " << cevap << endl;
	*/

	/*bool sicakMi = true;

	if (sicakMi)
	{
		cout << "Ortam sicak!\n";
     }
	else
	{
		cout << "Ortam sicak deðil!\n";
	
	}
	*/
	/*
	int sicaklik;
	cout << "Lutfen sicaklik bilgisini giriniz: " ;
	cin >> sicaklik;

	if (sicaklik >= 35)
	{
		cout << "ortam sicak!" << endl;
	}
	else // koþul yanlýþ ise
	{
		cout << "ortam sicak degil!" << endl;

	}
	*/

	/*
	int sifre = 3017;
	int kullaniciInput;
	cout << "Lutfen sifre giriniz: ";
	cin >> kullaniciInput;

	if (kullaniciInput == sifre)
	{
		cout << "Dogru sifre girdiniz, sisteme hosgeldiniz!" << endl;
	}
	else
	{
		cout << "Yanlis sifre girdiniz" << endl;
	}
	*/

	int sayi1, sayi2, sonuc = 0;
	int islem; //iþlem deðeri toplama için 1 ,çýkarma için 2 ,çarpma için 3,bölme için 4 olacak

	cout << "Lutfen birinici sayiyi giriniz: ";
	cin >> sayi1;
	cout << "Lutfen ikinci sayiyi giriniz: ";
	cin >> sayi2;

	cout <<"Lutfen islemi seciniz ( toplama icin 1, cikarma icin 2, carpma icin 3, bolme icin 4) : ";
	cin >> islem;

	if (islem == 1)
	{
		sonuc = sayi1 + sayi2;
	}
	 else if (islem == 2)
	{
		sonuc = sayi1 - sayi2;
	}
	else if (islem == 3)
	{
		sonuc = sayi1 * sayi2;
	}
	else if (islem == 4)
	{
		sonuc = sayi1 / sayi2;
	}
	else
	{
		cout << "Hatali islem yaptiniz." << endl;
	}
	cout << "islemin sonucu: " << sonuc << endl;



	return 0;
}
/*bu özel karakter ile
satýrlar arasý yorum satýrý yapýlýr*/

