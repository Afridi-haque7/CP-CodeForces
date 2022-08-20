#include<bits/stdc++.h>
#include<string>
using namespace std;

string wayTooLong(string str){
	int s = str.length();
	string res = "";
	if(s <= 10)	return str;
	else{
		res += str[0];
		res += to_string(s-2);
		res += str[s-1];
	}
	return res;
}
int main(){
	int n;
	cin >> n;
	while(n--){
		string str;
		cin >> str;
		string ans = wayTooLong(str);
		cout << ans << endl;
	}
	return 0;
}
