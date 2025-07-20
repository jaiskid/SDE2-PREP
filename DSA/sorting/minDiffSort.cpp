#include<bits/stdc++.h>
using namespace std;
void sorting(vector<int>&arr){
	int n = arr.size();
	for(int i  = 0 ;i < n - 1; i++){
		int min_index = i;
		for(int j = i+1; j < n; j++){
			if(arr[j] < arr[min_index]){
				min_index = j;
			}
		}
		swap(arr[i],arr[min_index]);
	}
}
int mindiff(vector<int>&arr){
	int n = arr.size();
	int min = INT_MAX;
	for(int i = 0 ; i < n -1; i ++ ){
		int diff = abs(arr[i]-arr[i+1]);
		if(diff < min){
			min = diff;
		}
	}
	return min;
}
int main(){
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	sorting(arr);
	cout << mindiff(arr);
}