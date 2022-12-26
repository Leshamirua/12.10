#pragma once
#include <iostream>
using namespace std;

class Base {
protected:
	static int people_on_base;
	static int vehicles_on_base;
	static double petrol_on_base;
	static double goods_on_base; // √руз на базе

public:
	Base() {
		people_on_base = 30;
		vehicles_on_base = 5;
		petrol_on_base = 3000;
		goods_on_base = 0.500;
	}

	Base(int pob, int vob, double ptrlob, double gob) {
		people_on_base = pob;
		vehicles_on_base = vob;
		petrol_on_base = ptrlob;
		goods_on_base = gob;
	}

	void Print() {
		cout << "\nPeople on the base: " << people_on_base << endl;
		cout << "Vehicles on the base: " << vehicles_on_base << endl;
		cout << "Petrol on the base: " << petrol_on_base << " liters" << endl;
		cout << "Goods on the base: " << goods_on_base << " tone" << endl << endl;
	}

};

