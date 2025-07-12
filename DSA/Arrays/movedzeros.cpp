#include<bits/stdc++.h>
using namespace std;
void moveZeroBruteforce(vector<int>&arr){
	int n = arr.size();
	for(int i = 0;i<n;i++){
		if(!arr[i]){
			for(int j = i+1;j<n;j++){
				if(arr[j])
				swap(arr[i],arr[j]);
			}
		}
	}
}
void moveZeroToEnd(vector<int>&arr){
	int n = arr.size();
	vector<int>zeros;
	int zeroCnt = 0;
	for(int i = 0;i<n;i++){
		if(arr[i]){
			zeros.push_back(arr[i]);
		}
		else{
			zeroCnt++;
		}
	}
	while(zeroCnt--){
		zeros.push_back(0);
	}
	arr = zeros;
}

void moveZeroLinear(vector<int>&arr){
	int n = arr.size();
	int count = 0;
	for(int i = 0;i<n;i++){
		if(arr[i]){
			swap(arr[i],arr[count]);
			count++;
		}
	}
}
int main(){
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i  = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	// moveZeroToEnd(arr);
	// moveZeroBruteforce(arr);
	moveZeroLinear(arr);
	for(auto i : arr){
		cout << i << " ";
	}
}