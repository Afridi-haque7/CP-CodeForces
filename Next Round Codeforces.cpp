#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int *arr = new int[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	int val = arr[k-1];
	int ans = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] >= val && arr[i] > 0)	ans++;
		if(arr[i] < val || arr[i] <= 0)	break;
	}
	cout << ans;
	delete[] arr;
	return 0;
}
