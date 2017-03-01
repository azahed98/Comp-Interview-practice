#include <string>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int main() {
	int n;
	string hackerrank = "hackerrank";
	string x;
	cin >> n;
	for(int i = 0; i<n; i++){
		cin >> x;
		int cur = 0;
		int pos = 0;
		while(cur<10 && pos< x.length()){
			if(hackerrank[cur] == x[pos]){
				cur++;
			}
			pos++;
		}
		if(cur == 10){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}


}