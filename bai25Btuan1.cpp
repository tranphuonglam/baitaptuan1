#include <iostream>
#include <cmath>
 using namespace std;
 
 int main() {
 	int n,i,j;
 	cin >> n;
 	int a[1000];
 	for( i=0;i<n;i++) {
 		cin >> a[i];
	 }
	 int temp;
    for ( i = 0; i < n; i++) {
        for( j=i+1;j<n;j++) {
            if(a[i]>a[j]) {
                temp = a[i];
                a[i] =a[j];
                a[j] = temp;
            }
        }
    }
    for ( i=0;i<n;i++) {
    	cout << "so dung giua la: " <<  a[2];
    	break;
	}
 	return 0;
 }
