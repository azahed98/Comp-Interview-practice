#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int countNonZero(int arr[]){
	int count = 0;
	for (int i = 0; i< 10; i++){ //(int)((sizeof(arr)/sizeof(arr[0]))+.5)
		if(arr[i]!=0)
			count+=1;
	}
	return count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int t;
	cin >> t;
	string ans[t];

	for (int i = 0; i<t; i++){
		int n;
		cin >> n;
		cout << "Case #" << i+1 << ": " ;
		if(n==0){
			ans[i] = "Case #" +to_string(i+1) +": INSOMNIA\n";
		}
		else {
			int counts[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
			int m = 0;
			int nonZ = 0;
			while(nonZ<10){
				m += n;
				int j = m;
				while(j>0){
					counts[j%10]=1;
					j = j / 10;
				}
				nonZ = countNonZero(counts);
			}		
			ans[i] = "Case #" +to_string(i+1) +": "+ to_string(m) + "\n";
		}

	}
	for (int i = 0; i < t; i++){
		cout << ans[i];
	}
	return 0;
}


