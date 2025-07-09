#include<bits/stdc++.h>
using namespace std;
vector<int> insertionSort(vector<int>arr){
	int n = arr.size();
	for(int i = 1;i<=n-1;i++){
		int current = arr[i];
		int prev = i -1;
		while(prev>=0 and arr[prev]>current){
			arr[prev+1] = arr[prev];
			prev--; 
		}
		arr[prev+1] = current;
	}
	return arr;
}
int main(){
	int n;
	cin >> n;
	vector<int> arr(n,0);
	for(int i = 0 ;i<n;i++){
		cin >> arr[i];
	}
	auto a = insertionSort(arr);
	for(auto result : a){
		cout << result<< endl;
	}
}
