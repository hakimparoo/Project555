#include <iostream>
using namespace std;
int main() {
	float Pi = (22 / 7), r, x, y;
	cout << "Please configure Rusmi" << endl;
	cin >> r;
	x = (Pi * (r * r));
	cout << "Area circle\n" << (x) << endl;
	y = (2 * Pi * r);
	cout << "Circumference circle\n" << y << endl;
	return 0;
}