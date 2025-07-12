#include<bits/stdc++.h>
using namespace std;
int sumOfKWindow(int *arr,int n,int k){
	int window_sum = 0;
	for(int i = 0;i<k;i++){
		window_sum+=arr[i];
	}
	int max = window_sum;
	for(int i = k;i<n;i++){
		window_sum+=(arr[i]-arr[i-k]);
		if(max < window_sum){
			max = window_sum;
		}
	}
	return max;
}
int main(){
	int n;
	cin >> n;
	int k;
	cin >> k;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin >> arr[i];
	}
	cout << sumOfKWindow(arr,n,k);
}