#include <bits/stdc++.h>
using namespace std;

void generatePattern(int n) {
	int count = 0, k;
	int temp = 0, temp1 = 0;

	for(int i = 1; i <= n; i++) {

		//for printing the 1st row or line
		if(i == 1) {
			k = 1;
			for(int j = 1; j <= n; j++) {

				//checker to print the '*' symbol in between the numbers
				if(k < j)
					cout << "*" << ++count;

				//it will be executed only once in a row...for printing the 1st element in every new row
				else  
					cout << ++count;
			}
			cout << endl;
		}

		//only for printing the last row 
		else if(i == n) {
			k = 1;
			for(int j = 1; j <= n; j++) {
				if(k < j)
					cout << "*" << ++count;
				else
					cout << ++count;
			}
		}


		//for printing every row between the 1st and the nth row
		else {
			if(i == 2)
				temp = count*2;
			else
				temp = temp1;
			k = 1;
			for(int j = 1; j <= n; j++) {
				if(k < j)
					cout << "*" << ++temp;
				else
					cout << ++temp;
			}
			temp1 = temp; 
			cout << endl;
		}
	}
}

int main() {
	int n;
	cout << "Value of n is:\n";
	cin >> n;

	generatePattern(n);

	return 0;
}