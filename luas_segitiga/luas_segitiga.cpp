#include <iostream>
using namespace std;

int main() {

	int no, alas, tinggi, luas;

	cout << "==== PROGRAM MENCARI LUAS SEGITIGA ====" << endl;
	cout << "1. Mencari luas segitiga" << endl;
	cout << "2. Mencari alas segitiga" << endl;
	cout << "3. Mencari tinggi segitiga" << endl;
	cout << "Masukan nomor program yang akan anda gunakan --> ";
	cin >> no;

	if (no == 1) {
		cout << "PROGRAM MENCARI LUAS SEGITIGA" << endl;
		cout << "Alas = ";
		cin >> alas;

		cout << "Tinggi = ";
		cin >> tinggi;

		luas = alas * tinggi / 2;

		cout << "Luas segitiga dengan alas " << alas << " cm dan tinggi " << tinggi << " cm adalah " << luas << " cm persegi." << endl;
	}
	else if (no == 2) {
		cout << "PRORAM MENCARI ALAS SEGITIGA" << endl;
		cout << "Luas = ";
		cin >> luas;

		cout << "Tinggi = ";
		cin >> tinggi;

		alas = luas / tinggi * 2;

		cout << "Alas segitiga dengan luas " << luas << " cm dan tinggi " << tinggi << " cm adalah " << alas << " cm." << endl;
	}
	else if (no == 3) {
		cout << "PROGRAM MENCARI TINGGI SEGITIGA" << endl;
		cout << "Luas = ";
		cin >> luas;

		cout << "Alas = ";
		cin >> alas;

		tinggi = luas / alas * 2;

		cout << "Tinggi segitiga dengan luas " << luas << " cm dan alas " << alas << " cm adalah " << tinggi << " cm." << endl;
	}
	else {
		cout << "Masukan nomor program yang tersedia dengan benar!" << endl;
	}

	cin.get();
	return 0;
}