#include<bits/stdc++.h>
using namespace std;
int ImmediateSmaller(vector<int>&arr,int X){

	int min = INT_MAX;
	int final_index;
	for(int i = 0 ; i < arr.size() ; i++){
		if(abs(X-arr[i])<=min and X>arr[i]){
			min = abs(X-arr[i]);
			final_index = i;
		}
	}
	return (arr[final_index] == X)? -1 : arr[final_index];
}

int ImmediateSmallermax(vector<int>&arr,int X){

	int min = INT_MIN;
	int final_index;
	for(int i = 0 ; i < arr.size() ; i++){
		if(X>arr[i]){
			if(arr[i] >= min){
				min = arr[i];
			}
		}
	}
	return (min == INT_MIN)?-1:min;
}
int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int X;
	cin >> X;
	cout << ImmediateSmallermax(arr,X);

}