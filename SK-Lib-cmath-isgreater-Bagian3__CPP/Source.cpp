#include <iostream>
#include <cmath>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	// Take two any values
	int a, b;
	bool hasil;
	a = 5;
	b = 8;

	// Since 'a' is not greater
	// than 'b' so answer
	// is false(0)
	hasil = isgreater(a, b);
	cout << a << " isgreater than " << b << ": " << hasil << endl;

	char x = 'd';

	// Since 'd' ascii value is greater
	// than b variable so answer
	// is true(1)
	hasil = isgreater(x, b);
	cout << x << " isgreater than " << b << ": " << hasil;

	_getch();
	return 0;
}
