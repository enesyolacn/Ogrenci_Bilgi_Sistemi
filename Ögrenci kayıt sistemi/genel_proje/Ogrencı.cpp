#include <iostream>
#include "Ogrenc�.h"

using namespace std;

Ogrenci ::Ogrenci(int _id, string _ad, int _s�navNotu)
{
	id = _id;
	ad = _ad;
	s�navNot = _s�navNotu;
}
void Ogrenci::setId(int _id)
{
	id = _id;
}
void Ogrenci::setad(string _ad)
{
	ad = _ad;

}
void Ogrenci::sets�navNot(int _s�navNot)
{

	s�navNot = _s�navNot;
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
	return s�navNot;
}
void Ogrenci::bilgileriYaz()
{
	cout << "id :" << id << " ad :" << ad << " s�navNot : " << s�navNot << endl;

}
