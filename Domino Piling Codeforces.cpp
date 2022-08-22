#include<bits/stdc++.h>
using namespace std;

int main(){
	int M, N, ans;
	cin >> M >> N;
	if(M <= 0 || N <= 0)	return 0;
	int squareArea = M * N;
	cout << squareArea/2;
	return 0;
}
