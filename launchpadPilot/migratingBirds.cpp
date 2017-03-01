#include <string>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int main() {
	int count[5] = {0, 0, 0, 0, 0};
	int n;
	int x;
	cin >> n;
	for(int i = 0; i<n; i++){
		cin >> x;
		count[x-1]++;
	}
	int largest = 1;
	int cur = count[0];
	for (int i = 1; i<5; i++){
		if(count[i] > cur){
			largest = i+1;
			cur = count[i];
		}
	}

	cout << largest << "\n";

}