//Ejercicio 10.8
#include <iostream>
#include "Complejo.h"
using namespace std;

int main() {
	Complejo  x;
	Complejo y(4.3, 8.2);
	Complejo z(3.3, 1.1);

	cin >> x;
	cout << x << endl;
	x = y + z;
	cout << x << endl;
	cout << "----------------------";
	return 0;
}
