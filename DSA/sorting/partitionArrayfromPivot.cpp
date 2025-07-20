#include<bits/stdc++.h>
using namespace std;
void parition(vector<int>&arr,int p){
	vector<int>temp;
	int n = arr.size();
	for(int i = 0 ; i < n ; i++){
		if(arr[i] <= arr[p]){
			temp.push_back(arr[i]);
		}
	}
	for(int i = 0 ; i<n ; i++){
		if(arr[i] > arr[p]){
			temp.push_back(arr[i]);
		}
	}
	arr =  temp;
}
int main(){
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i]; 
	}
	int p;
	cin >> p;
	parition(arr,p);

	for(auto i : arr){
		cout << i << " ";
	}
}