#include<bits/stdc++.h>
using namespace std;
void prefix(int *arr,int n){
	for(int i=1;i<n;i++){
		arr[i] = arr[i-1]+arr[i];
	}
	return;
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin >> arr[i];
	}
	prefix(arr,n);
	for(auto i : arr){
		cout << i << " ";
	}
}