#include<bits/stdc++.h>
#include<string>
using namespace std;

bool isSolve(int arr[]){
	int count1 = 0;
	for(int i = 0; i < 3; i++){
		if(arr[i] == 1)	count1++;
	}
	if(count1 > 1)	return true;
	else	return false;
}

int main(){
	int n, count = 0;
	cin >> n;
	while(n--){
		int arr[3];
		for(int i = 0; i < 3; i++){
			cin >> arr[i];
		}
		if(isSolve(arr))	count++;
	}
	cout << count;
	return 0;
}
