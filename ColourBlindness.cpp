#include<bits/stdc++.h>
using namespace std;

bool colorBlindness(int n, string s1, string s2){
	if(n < 1)	return true;
	for(int i = 0; i < n; i++){
		if((s1[i] == 'R' && s2[i] == 'B') || (s1[i] == 'R' && s2[i] == 'G'))	return false;
		if((s1[i] == 'B' && s2[i] == 'R') || (s1[i] == 'G' && s2[i] == 'R'))	return false;
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s1, s2;
		cin >> n;
		cin >> s1 >> s2;
		bool ans = colorBlindness(n, s1, s2);
		if(ans)	cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
