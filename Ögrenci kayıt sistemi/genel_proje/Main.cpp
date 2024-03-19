#include<iostream>
#include "Ogrenc�.h"
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
	int s�navNotu;
	cout << "lutfen ogrenci id giriniz:";
	cin >> id;
	cout << "AD SOYAD :";
	cin >> ad>>soyad;
	isim = ad + " " + soyad;
	cout << "Sinav Notu:";
	cin >> s�navNotu;
	Ogrenci ogr(id, isim, s�navNotu);// nesne olu�turma
	lst->push_back(ogr);  // listeye ogrenci nesnesini eklmeye yarar

		

}
void showList(list<Ogrenci>* lst)
{
	list<Ogrenci>::iterator it;
	for (it = lst->begin(); it != lst->end(); it++)// t�m itr dola�or
	{
		it->bilgileriYaz();
	}
	cout << endl;
}
void ogrenciSil(list<Ogrenci>* lst)
{
	int id;
	cout << "Lutfen silinecek olan numaray� giriniz:"<<endl;
	cin >> id;
	list<Ogrenci>::iterator it;
	for (it = lst->begin(); it != lst->end(); it++)
	{
		if (it->getId() == id) // silinmesini istenilen id ye e�it olunca program c�k�� yapar
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
		lst->erase(it);// program�n c�kt�g� yeri siler
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
		cout << "Belirtilen id bulunamad�";
	}
	else
	{
		cout << endl << "Arad�g�n�z ogrenc�n�n bilgileri:\n";
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
			cout << "Hatal� secim yapt�n�z yeniden deneyiniz";

		}

	} while (secim != 5);
	




	return 0;

}