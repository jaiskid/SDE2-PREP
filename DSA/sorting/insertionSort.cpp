#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>&arr){
	for(int i  = 1 ; i < arr.size();i++){
		int j = i - 1;
		int key = arr[i];
		while(j>=0 and arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
int main(){
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	insertionSort(arr);
	for(auto i : arr){
		cout << i << " ";
	}
}