#include<bits/stdc++.h>
using namespace std;

int main(){
	long long m, n, a;
	cin >> m >> n >> a;
	long long int ans = ((m + a - 1)/a) * ((n + a - 1)/a);
	cout << ans;
	return 0;
}
