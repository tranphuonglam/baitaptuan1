#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a,b;
	cin >>a >> b;
	if(a %7==0 && b%7 == 0) {
		cout << "True";
	} else {
		cout << "False";
	}
	return 0;
}
