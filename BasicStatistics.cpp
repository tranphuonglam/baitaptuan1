#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n,i,j;
	cin >> n;
	int a[n];
	double sum=0;
	for(i=0;i<n;i++) {
		cin >> a[i];
		sum += a[i];
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
    double mean;
    mean = sum/n;
    cout << "Mean = " << mean << endl;
    for(i=0;i<n;i++) {
    	cout << "Max = " << a[n-1] << endl;
    	cout << "Min = " << a[0] << endl;
    	break;
	}
	return 0;
}
