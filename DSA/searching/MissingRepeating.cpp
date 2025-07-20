#include<bits/stdc++.h>
using namespace std;
void missingRep(vector<int>&arr){
	int n = arr.size();
	vector<int>temp(n+1,0);
	for(auto i : temp){
		cout << i  << " "; 
	}
	for(int i = 0;i<n; i++){
		temp[arr[i]]++;
	}

	for(auto i : temp){
		cout << i  << " "; 
	}
	for(int i = 0 ; i < n ; i++){
		if(temp[i] == 2){
			cout << i << " ";
		}
		if(temp[i] == 0){
			cout << i << " ";
		}
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	vector<int>arr;
	for(int i = 0 ; i < n; i++){
		cin >> arr[i];
	}
	missingRep(arr);
	return 0;
}