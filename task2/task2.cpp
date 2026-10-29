#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double side, area; const double PI = acos(-1.0);
	cout << "Print the area of a hexagon:" << endl;
	cout << "---------------------------------" << endl;

	cout << "Input the side of the hexagon: ";
	cin >> side;

	area = (6 * pow(side, 2)) / (4 * tan(PI / 6));

	cout << "The area of the hexagon is: " << area;

	return 0;
}
