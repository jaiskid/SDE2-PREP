#include<bits/stdc++.h>
using namespace std;
int equilibriumPoint(vector<int>&arr){
	int point = -1;
	int n = arr.size();
	for(int i = 0 ; i < n;i++){
		int left_sum = 0;
		int right_sum = 0;
		for(int left = 0; left < i ; left++){
			left_sum +=arr[left];
		}

		for(int right = i+1; right < n ; right++){
			right_sum +=arr[right];
		}
		if(left_sum == right_sum){
			point = i;
			break;
		}
	}
	return point;
}

// -7, 1, 5, 2, -4, 3, 0
// -6 s
int equilibriumOptimized(vector<int>&arr){
	int n = arr.size();
	int sum = 0;
	int left_sum = 0;
	for(int i = 0;i<n;i++){
		sum+=arr[i];
	}
	int point = -1;
	for(int i = 0 ; i<n;i++){
		sum-=arr[i];
		cout << sum << " " << left_sum << " ";
		if(sum == left_sum){
			point = i;
			break;
		}
		left_sum+=arr[i];
	}
	return point;
}
int main(){
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i = 0;i< n;i++){
		cin >> arr[i];
	}
	// cout << equilibriumPoint(arr);
	cout << equilibriumOptimized(arr);
}
