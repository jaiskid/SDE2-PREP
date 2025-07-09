#include<bits/stdc++.h>
using namespace std;
// Time Complexity : O(N)
// Space Complexity : O(N)
void rotatebyDtemp(vector<int>&arr,int n,int d){
	vector<int> temp(n);
	int k = 0;
	for(int i = d ; i<n ; i++){
		temp[k++] = arr[i];
	}
	for(int i =0 ; i < d ; i++){
		temp[k++] = arr[i];
	}
	arr = temp;
}

// Time Complexity : O(N*d)
// Space Complexity : O(1)
void rotatebyOne(vector<int>&arr,int n,int d){
	int p = 0;
	while(p<d){
		int last = arr[0];
		for(int i = 0 ;i<n-1;i++){
			arr[i] = arr[i+1];
		}
		arr[n-1] = last;
		p++;
	}	
}
int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	int d;
	cin >> d;
	for(int i =0;i<n;i++){
		cin >> arr[i];
	}
	// rotatebyDtemp(arr,n,d);
	rotatebyOne(arr,n,d);
	for(auto i : arr){
		cout << i << " ";
	}
}