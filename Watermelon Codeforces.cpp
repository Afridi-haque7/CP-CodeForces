#include<bits/stdc++.h>
using namespace std;
bool isDivisable(int w){
	if(w&1)	return false;
	else	return true;
}
int main(){
	int w;
	cin >> w;
	if(w <= 2){
		cout << "NO";
		return 0;
	}
	if(isDivisable(w)){
		cout << "YES" << endl;
	}
	else	cout << "NO" << endl;
	return 0;
}
