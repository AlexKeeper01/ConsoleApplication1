
#include <iostream>
#include <math.h>
using namespace std;

double dist(double a, double b, double c, double d) {
	return sqrt((a - c) * (a - c) + (b - d) * (b - d));
}
int main() {
	double x1, x2, x3, y1, y2, y3, len1, len2, len3, p;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	len1 = dist(x1, y1, x2, y2);
	len2 = dist(x2, y2, x3, y3);
	len3 = dist(x1, y1, x3, y3);
	cout << "|  Perimeter of a triangle: " << len1 + len2 + len3 << "  |" << endl;
	p = (len1 + len2 + len3) / 2;
	cout << "|  Square of a triangle: " << sqrt(p * (p - len1) * (p - len2) * (p - len3)) << "  |";
}