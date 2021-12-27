#include <iostream>
#include <math.h>

using namespace std;


int main() {
	int n;
	cout << "enter value of n\n";
	cin >> n;

	if (n <= 0) {
		cout << "wrong value of n";
	}
	else {
		int k;
		double sum = 0;
		for (k = 1; k <= n; k++) {

			sum = sum + 1 / (k * pow(2 * k + 1, 2));

		}

		cout << "sum = " << sum;

	}


}


