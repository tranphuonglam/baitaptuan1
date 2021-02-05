#include <iostream>

using namespace std;

int main() {
	int x,y,z;
	cin >> x >> y >> z;
	bool a = true;
	if ((x < y && y < z) || (x>y && y> z)) {
		cout << "True";
	} else {
	 cout << "False"; 
	}
	return 0;
}
