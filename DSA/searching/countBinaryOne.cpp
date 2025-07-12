#include<bits/stdc++.h>
using namespace std;
int countBinary(vector<int>&arr){
	int s = 0;
	int e = arr.size()-1;
	int firstzero = arr.size();
	while(s<=e){
		int mid = s+(e-s)/2;
		if(arr[mid] == 0){
			firstzero = mid;
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
	}
	return firstzero;
}
int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0 ; i < n ; i ++){
		cin >> arr[i];
	}
	cout << countBinary(arr);
}