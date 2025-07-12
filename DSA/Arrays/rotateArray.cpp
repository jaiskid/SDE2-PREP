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

void rotatebyDSpace(vector<int>&arr,int n,int d){
	vector<int> temp(d);
	for(int i = 0 ; i < d ; i++){
		temp[i] = arr[i];
	}
	for (int i = d; i < n; i++)
	{
		arr[i-d] = arr[i];
	}
	for (int i = 0; i < d; i++)
	{
		arr[n-d+i] = temp[i];
	}
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

// 5
// 1 2 3 4 5
// 2 1 5 4 3
// 3 4 5 1 2

void reverse(vector<int>&arr,int low,int high){
	while(low<high){
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		low++;
		high--;
	}
}

void optimizedVersionOptimized(vector<int>&arr,int d){
	int n = arr.size();
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
}
int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i =0;i<n;i++){
		cin >> arr[i];
	}
	int d;
	cin >> d;
	if(d > n){
		d=d%n;
	}
	// rotatebyDtemp(arr,n,d);
	// rotatebyOne(arr,n,d);
	// rotatebyDSpace(arr,n,d);
	optimizedVersionOptimized(arr,d);
	for(auto i : arr){
		cout << i << " ";
	}
}