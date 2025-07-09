#include<bits/stdc++.h>
using namespace std;
bool sortedbyIncreasing(vector<int>&arr){
	int n = arr.size();
	bool sorted = false;
	for(int i = 0;i<n-1;i++){
		if(arr[i] <= arr[i+1]){
			sorted = true;
		}
		else{
			break;
		}
	}
	return sorted;
}

bool sortedbyDecreasing(vector<int>&arr){
	int n = arr.size();
	bool sorted = false;
	for(int i = 1;i<n;i++){
		if(arr[i-1] >= arr[i]){
			sorted = true;
		}
		else{
			break;
		}
	}
	return sorted;
}

int main(){
	int n;
	cin >> n;
	vector<int> arr;
	for(int i  = 0 ; i < n;i++){
		int x;
		cin >> x;
		arr.push_back(x);
	}
	cout << sortedbyIncreasing(arr);
	cout << sortedbyDecreasing(arr);
}