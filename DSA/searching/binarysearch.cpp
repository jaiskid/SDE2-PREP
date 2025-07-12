#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>&arr,int key){
	int s = 0;
	int e = arr.size()-1;
	while(s<=e){
		int mid = s + (e-s)/2;
		if(arr[mid] == key){
			return mid;
		}
		if(arr[mid]<key){
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}
	return -1;
}
int main(){
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	int key;
	cin >> key;
	cout << binarySearch(arr,key);
}

