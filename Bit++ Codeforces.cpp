#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x = 0;
	cin >> n;
	while(n--){
		string str;
		cin >> str;
		if(str[0] == '+' || str[2] == '+')	x++;
		if(str[0] == '-' || str[2] == '-')	x--;
	}
		
	cout << x;
}
