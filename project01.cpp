#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	/*/string isim;    //tan�mlama
	isim = "Ali"; //atama

	int yas;
	yas = 21;
	cout << "Bir zamanlar " << isim << " isminde bir genc varmis." << endl << isim << " " << yas << " yasindaymis." << endl;
	cout << isim << " ismini sever ancak buludugu " << yas << " yasini sevmezmis.\n";

	/*de�i�ken isimlerinde ilk karakter rakam olamaz.
	de�i�kenlerde t�rk�e karakter olmaz
	de�i�ken isimlerde bo�luk olmaz
	de�i�kenlerde arada nokta vb. karakterler kullan�lmaz.ama int sayi1 yapabilirsin
	de�i�kenleri camelCase standard�na uygun yaz�lmas� tavsiye edilir. e.x. birinciSinavNotu
	


	int dogumYili = 1980;
	string isim = "Kaan Kaya";
	float sayisalNotOrtalamasi = 3.47f;
	double pi = 3.14435783857439;
	bool sinifiGectimi = false;
	char notOrtalamasiHarf = 'B'; //charda tek t�rnak kullan�l�r//
	//char veri tipinde ascii table daki say�lar� tek t�rnaks�z yazabilirsin �rnek 65 yazarsan A diye okunucak//


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
char notOrtalamasiHarf = 'B'; //charda tek t�rnak kullan�l�r//
//char veri tipinde ascii table daki say�lar� tek t�rnaks�z yazabilirsin �rnek 65 yazarsan A diye okunucak//
int quizNot1 = 72;
int quizNot2 = 51;
float quizOrtalama =   (quizNot1 + quizNot2) / 2;
//int floata d�d�r�rken ya e�itli�e (float)yazar�z ya da intlerden birini float yapar�z ama float i�in 72f �eklinde de�il 72.f �eklinde yazar�z//

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
int v = 12 % 10; // bu i�aret b�lme i�leminde kalan� verir//

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
	//hesaplama i�lemi
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
		cout << "Ortam sicak de�il!\n";
	
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
	else // ko�ul yanl�� ise
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
	int islem; //i�lem de�eri toplama i�in 1 ,��karma i�in 2 ,�arpma i�in 3,b�lme i�in 4 olacak

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
/*bu �zel karakter ile
sat�rlar aras� yorum sat�r� yap�l�r*/

