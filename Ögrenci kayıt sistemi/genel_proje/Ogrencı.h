#pragma once
#include<iostream>
using namespace std;

class Ogrenci
{
private:
	int id;
	string ad;
	int s�navNot;
public:
	Ogrenci(int _id, string _ad, int _s�navNot); //construction
	void setId(int _id);
	void setad(string _id);
	void sets�navNot(int _s�navNot);
	int getId();
	string getAd();
	int getSinavNot();
	void bilgileriYaz();


};
