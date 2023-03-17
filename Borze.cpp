#include <bits/stdc++.h>
using namespace std;

void solve(){
	string code;
	cin >> code;
	string num = "";

	int i = 0;
	while(i < code.length()){
		if(code[i] == '.'){
			num += '0';
			i++;
		}
		else{
			if(code[i+1] == '.'){
				num += '1';
				i += 2;
			}
			else{
				num += '2';
				i += 2;
			}
		}
	}
	cout << num << "\n";
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


	int t = 1;
	//cin >> t;
	while (t--){
	   solve();
	}
}
