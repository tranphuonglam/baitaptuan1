#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a,b,c;
	cin >> a >> b >> c;
	double s,z;
	s=(a+b+c)/2;
	z = s*(s-a)*(s-b)*(s-c);
	cout << "dien tich cua tam giac la: " << sqrt(z);
	return 0;
}
