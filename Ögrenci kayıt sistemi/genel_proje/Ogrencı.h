#pragma once
#include<iostream>
using namespace std;

class Ogrenci
{
private:
	int id;
	string ad;
	int sýnavNot;
public:
	Ogrenci(int _id, string _ad, int _sýnavNot); //construction
	void setId(int _id);
	void setad(string _id);
	void setsýnavNot(int _sýnavNot);
	int getId();
	string getAd();
	int getSinavNot();
	void bilgileriYaz();


};
