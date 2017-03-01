#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int m;
    int n;
    int r;
    cin >> m >> n >> r;
    int numLayers = (int)(min(m, n)/2.0+.5);
    vector<vector<int>> frontlayers;
    vector<vector<int>> backlayers;
    frontlayers.push_back(vector<int>(0));
    backlayers.push_back(vector<int>(0));
    int l = 0;
   	for (int i = 0; i<(m/2.0)-.5; i++){
   		int curLay = 0;
   		for (int c = 0; c<(n/2.0)-.5; c++){
   			int in;
   			cin >> in;
   			if(curLay < l){
   				backlayers[curLay].push_back(in);
   				curLay++;
   			}
   			else{
   				frontlayers[curLay].push_back(in);
   			}
   		}
   		for (int c = (int)(n/2.0+.5); c<n; c++){
   			int in;
   			cin >> in;
            frontlayers[curLay].push_back(in);
   			if(curLay == (n-1)-c){
   				//backlayers[curLay].push_back(in);
   				curLay--;
   			}
   			/*else{
   				frontlayers[curLay].push_back(in);
   			}*/
   		}
   		if(l<numLayers-1){
   			frontlayers.push_back(vector<int>(0));
            backlayers.push_back(vector<int>(0));
   			l++;
   		}
   	}
   	for (int i = (int)(n/2.0+.5); i<m; i++){
   		int curLay = 0;
   		for (int c = 0; c<(n/2.0)-.5; c++){
   			int in;
   			cin >> in;
            backlayers[curLay].push_back(in);
   			if(curLay < l){
   				//backlayers[curLay].push_back(in);
   				curLay++;
   			}
   			/*else{
   				frontlayers[curLay].push_back(in);
   			}*/
   		}
   		for (int c = (int)(n/2.0+.5); c<n; c++){
   			int in;
   			cin >> in;
   			if(curLay == (n-1)-c){
   				frontlayers[curLay].push_back(in);
   				curLay--;
   			}
   			else{
   				backlayers[curLay].push_back(in);
   			}
   		}
   		if(l== (m-1)-i){
   			l--;
   		}
   	}
    //data is read into layer vectors
        cout << "frontlayers\n";
   		for(int i =0; i<frontlayers.size();i++){
   			for(int j=0; j<frontlayers[i].size(); j++){
   				cout << frontlayers[i][j] << " ";
   			}
   			cout << '\n';
   		}
        cout << "backlayers\n";
        for(int i =0; i<backlayers.size();i++){
   			for(int j=0; j<backlayers[i].size(); j++){
   				cout << backlayers[i][j] << " ";
   			}
   			cout << '\n';
   		}
    

    
    return 0;
}


