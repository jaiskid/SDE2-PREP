#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>&arr){
	int n = arr.size();
	int s = 0;
	int e = n-1;
	int temp;
	while(s<=e){
		temp = arr[s];
		arr[s] = arr[e];
		arr[e] = temp;
		s++;
		e--;
	}
}
int main(){
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i = 0;i<n;i++){
		cin >> arr[i];
	}
	reverse(arr);
	for(auto i : arr){
		cout << i << " ";
	}
}