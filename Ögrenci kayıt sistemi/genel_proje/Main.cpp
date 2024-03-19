#include<iostream>
#include "Ogrencý.h"
#include "Main.h"
#include <list>
using namespace std;


void menuyuGoster()
{
	cout << "* * * * * * * * * \n";
	cout << "* *           * * \n";
	cout << "* *   MENU    * * \n";
	cout << "* *           * * \n";
	cout << "* * * * * * * * * \n";
	cout << "1.Yeni Kayit Ekle\n";
	cout << "2.Tum Listeyi Goster\n";
	cout << "3. Id Gore Kayit Sil\n";
	cout << "4.Ogrenci Ara\n";
	cout << "5.Cikis\n";

}
void ogrenciEkle(list<Ogrenci>* lst)
{
	int id;
	string ad,soyad,isim;
	int sýnavNotu;
	cout << "lutfen ogrenci id giriniz:";
	cin >> id;
	cout << "AD SOYAD :";
	cin >> ad>>soyad;
	isim = ad + " " + soyad;
	cout << "Sinav Notu:";
	cin >> sýnavNotu;
	Ogrenci ogr(id, isim, sýnavNotu);// nesne oluþturma
	lst->push_back(ogr);  // listeye ogrenci nesnesini eklmeye yarar

		

}
void showList(list<Ogrenci>* lst)
{
	list<Ogrenci>::iterator it;
	for (it = lst->begin(); it != lst->end(); it++)// tüm itr dolaþor
	{
		it->bilgileriYaz();
	}
	cout << endl;
}
void ogrenciSil(list<Ogrenci>* lst)
{
	int id;
	cout << "Lutfen silinecek olan numarayý giriniz:"<<endl;
	cin >> id;
	list<Ogrenci>::iterator it;
	for (it = lst->begin(); it != lst->end(); it++)
	{
		if (it->getId() == id) // silinmesini istenilen id ye eþit olunca program cýkýþ yapar
		{
			break;
		}
	}
	if (it == lst->end())
	{
		cout << "Belirtilen id yok ";
	}
	else
	{
		lst->erase(it);// programýn cýktýgý yeri siler
	}
}
void ogrenciAra(list<Ogrenci>* lst)
{
	int id;
	cout << "Lutfen aranacal olan id giriniz:";
	cin >> id;
	list<Ogrenci>::iterator it;
	for (it = lst->begin(); it != lst->end(); it++)
	{
		if (it->getId() == id)
		{
			break;
		}
	}
	if (it == lst->end())
	{
		cout << "Belirtilen id bulunamadý";
	}
	else
	{
		cout << endl << "Aradýgýnýz ogrencýnýn bilgileri:\n";
		it->bilgileriYaz();
		cout << endl;

	}


}
int main()
{
	list<Ogrenci>* ogrenciList=new list<Ogrenci>();


	int secim=0;
	do
	{
		menuyuGoster();
		cout << "Seciminiz:";
		cin >> secim;
		if (secim == 1)
		{
			ogrenciEkle(ogrenciList);
		}
		else if (secim == 2)
		{
			showList(ogrenciList);
		}
		else if (secim == 3)
		{
			ogrenciSil(ogrenciList);
		}
		else if (secim == 4)
		{
			ogrenciAra(ogrenciList);
		}
		else if (secim == 5)
		{
			break;
		}
		else
		{
			cout << "Hatalý secim yaptýnýz yeniden deneyiniz";

		}

	} while (secim != 5);
	




	return 0;

}