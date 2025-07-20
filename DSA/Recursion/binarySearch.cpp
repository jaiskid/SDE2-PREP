#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>&arr,int key,int s ,int e){

	if(s>e){
		return -1;
	}

	int mid = s + (e-s)/2;
	if(arr[mid] == key){
		return mid;
	}
	if(arr[mid]<key){
		return binarySearch(arr,key,mid+1,e);
	}
	else{
		return binarySearch(arr,key,s,mid-1);
	}
	
}
int main(){
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	int item;
	cin >> item;

	cout << binarySearch(arr,item,0,n-1);
}