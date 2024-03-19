#include <iostream>
#include "Ogrencý.h"

using namespace std;

Ogrenci ::Ogrenci(int _id, string _ad, int _sýnavNotu)
{
	id = _id;
	ad = _ad;
	sýnavNot = _sýnavNotu;
}
void Ogrenci::setId(int _id)
{
	id = _id;
}
void Ogrenci::setad(string _ad)
{
	ad = _ad;

}
void Ogrenci::setsýnavNot(int _sýnavNot)
{

	sýnavNot = _sýnavNot;
}
int Ogrenci::getId()
{
	return id;
}
string Ogrenci::getAd()
{
	return ad;
}
int Ogrenci::getSinavNot()
{
	return sýnavNot;
}
void Ogrenci::bilgileriYaz()
{
	cout << "id :" << id << " ad :" << ad << " sýnavNot : " << sýnavNot << endl;

}
