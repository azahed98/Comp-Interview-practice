#include <string>
#include <cstdio>
#include <iostream>
#include <math.h>


using namespace std;

int main() {
	int n;
	cin >> n;
	//n 1-9 are just n
	//n 10-99 there are 179
	//n 100-999 there are 2697
	if(n<10){
		cout << n << "\n"
	}
	if(n<180){
		if(n%2==0){
			cout <<  << "\n";
			return 0;
		}
		cout << (int)n/2
	}
}