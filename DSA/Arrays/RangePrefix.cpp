#include<bits/stdc++.h>
using namespace std;
vector<int>rangeL_R(vector<int>&arr){
	int n = arr.size();
	vector<int>prefix(n);
	prefix[0] = arr[0];
	for(int i = 1; i<n ; i++){
		prefix[i] = prefix[i-1]+arr[i];
	}
	return prefix;
}

// 4 5 3 2 5
// 4 9 12 14 19

int main(){
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	vector<int> range = rangeL_R(arr);
	int t;
	cin >> t;
	while(t-- >0){
		int a;
		int b;
		cin >> a >> b;
		if(a == 0){
			cout << range[b] << endl;
		}
		else{
			cout << range[b] - range[a-1] << endl;
		}
	}
}