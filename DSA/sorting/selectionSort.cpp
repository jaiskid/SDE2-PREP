#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>&arr){
	int n = arr.size();
	for(int i = 0;i<n-1;i++){
		int min_index = i;
		for(int j = i+1;j<n;j++){
			if(arr[j]<arr[min_index])
				min_index = j;
		}
		swap(arr[min_index],arr[i]);
	}
}
int main(){
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	selectionSort(arr);
	for(auto i : arr){
		cout << i << "";
	}
}