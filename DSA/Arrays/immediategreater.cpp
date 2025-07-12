#include<bits/stdc++.h>
using namespace std;
int immediateGreater(vector<int>&arr,int x){
	int max = INT_MAX;
	int n = arr.size();
	for(int i = 0; i < n ; i++){
		if(x<arr[i]){
			if(max>=arr[i]){
				max = arr[i];
			}
		}
	}
	return (INT_MAX == max) ? -1 : max;
}
int main(){
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i  = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	int x;
	cin >> x;
	cout << immediateGreater(arr,x);
}