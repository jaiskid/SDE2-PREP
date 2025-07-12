#include<bits/stdc++.h>
using namespace std;
int largestSumSubarray(vector<int>&arr){
	int ms = INT_MIN;
	int cs = 0;
	for(int i = 0;i<arr.size();i++){
		cs+=arr[i];
		if(cs < arr[i]){
			cs = arr[i];
		}
		if(cs >= ms){
			ms = cs;
		}
	}
	return ms;
}
int main(){
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i = 0;i<n;i++){
		cin >> arr[i];
	}
	cout << largestSumSubarray(arr);
}