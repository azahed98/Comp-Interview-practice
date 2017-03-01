#include <string>
#include <cstdio>
#include <iostream>
#include <math.h>


using namespace std;

int main() {
	int n;
	cin >> n;
	if(n%2==1 && n>2){
		cout << 1 << "\n";
	}
	else{
		for(int m = 1; m <= 1000; m++){
			int hyp = n*m+1;
			int i = 3;
			while (i<= sqrt(hyp)){
				if(hyp%i == 0){
					cout << m << "\n";
					return 0;
				}
				i+=2;
			}
		}
	}
	return 0;


}