#include <iostream>
using namespace std;

int main() {
	int no, panjang, lebar, luas;

	cout << "==== PROGRAM MENCARI LUAS SEGITIGA ==== " << endl;
	cout << "Ketik kan salah satu nomor program yang akan anda gunakan" << endl;
	cout << "1. Mencari Luas Segiempat" << endl;
	cout << "2. Mencari Lebar Segiempat" << endl;
	cout << "3. Mencari Panjang Segiempat" << endl;
	cout << "Nomor program yang anda pilih adalah = ";
	cin >> no;

	if (no == 1) {
		cout << "===================================" << endl;
		cout << "Masukan panjang dalam cm = ";
		cin >> panjang;

		cout << "Masukan lebar dalam cm = ";
		cin >> lebar;

		cin.get();

		luas = panjang * lebar;

		cout << "Luas dari segi empat berukuran " << panjang << " cm & " << lebar << " cm adalah = " << luas << " cm persegi. \n";
		cout << "===================================" << endl;
	}
	else if (no == 2) {
		cout << "===================================" << endl;
		cout << "Masukan panjang dalam cm = ";
		cin >> panjang;

		cout << "Masukan luas dalam cm = ";
		cin >> luas;

		cin.get();

		lebar = luas / panjang;

		cout << "Lebar dari segi empat dengan luas " << luas << " cm dan panjang " << panjang << " cm adalah " << lebar << " cm. \n";
		cout << "===================================" << endl;
	}
	else if (no == 3) {
		cout << "===================================" << endl;
		cout << "Masukan lebar dalam cm = ";
		cin >> lebar;

		cout << "Masukan luas dalam cm = ";
		cin >> luas;

		cin.get();

		panjang = luas / lebar;

		cout << "Panjang dari segi empat dengan luas " << luas << " cm dan lebar " << lebar << " cm adalah " << panjang << " cm. \n";
		cout << "===================================" << endl;
	}
	else {
		cout << "===================================" << endl;
		cout << "Masukan nomor yang tersedia dengan benar!" <<endl; 
		cout << "===================================" << endl;
	}

	cin.get();
	return 0;

}