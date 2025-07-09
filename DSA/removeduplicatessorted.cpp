#include<bits/stdc++.h>
using namespace std;
void removeDuplicatesorted(vector<int>&arr){
	int inc = 0;
	vector<int>temp;
	for(int i =0;i<arr.size();i++){
		if(arr[i] == arr[i+1]){
			continue;
		}
		else{
			temp.push_back(arr[i]);
		}
	}
	for(auto i : temp){
		cout << i << " ";
	}
}
int main(){
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i =0;i<n;i++){
		cin >> arr[i];
	}
	removeDuplicatesorted(arr);
	// for(auto i : arr){
	// 	cout << i << endl;
	// }
}