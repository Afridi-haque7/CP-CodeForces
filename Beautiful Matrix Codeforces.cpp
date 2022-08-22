#include<bits/stdc++.h>
using namespace std;

int main (){
	vector<vector<int>> matrix;
	
	//	Taking matrix input
	for(int i = 0; i < 5; i++){
		vector<int> v;
		for(int j= 0; j < 5; j++){
			int element;
			cin >> element;
			v.push_back(element);
		}
		matrix.push_back(v);
	}
	
	// Calculating position of single 1
	int r, c;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(matrix[i][j] == 1){
				r = i;
				c = j;
				break;
			}
		}
	}
	
	// Calculating min number of steps
	int steps = abs(r-2) + abs(c-2);
	cout << steps;
	return 0;
}
