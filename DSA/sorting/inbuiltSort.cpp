#include<bits/stdc++.h>
using namespace std;
void inbuildSort(vector<int>&arr){
	sort(arr.begin(),arr.end());
}
void inbuildSortDesc(vector<int>&arr){
	sort(arr.begin(),arr.end(),greater<int>());
}
int main(){
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	inbuildSort(arr);
	for(auto i : arr){
		cout << i << " ";
	}
	inbuildSortDesc(arr);
	cout << endl;
	for(auto i : arr){
		cout << i << " ";
	}
}