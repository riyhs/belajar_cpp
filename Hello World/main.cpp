#include <iostream>
using namespace std;

int main() {

	int a, b;

	cout << "Masukan nilai A = ";
	cin >> a;

	cout << "Masukan nilai B = ";
	cin >> b;

	cout << "Nilai A & B sebelum ditukar = "<<endl;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << "Nilai A & B setelah ditukar = "<< endl;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;

	cin.get();
	return 0;
}