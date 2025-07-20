#include<bits/stdc++.h>
using namespace std;
int mindiff(vector<int>&arr){
	int n = arr.size();
	int min = INT_MAX;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0; j < i ; j++ ){
			cout << arr[i] << " " << arr[j] << " "; 
			int diff = abs(arr[j]-arr[i]);
			if(diff < min){
				min = diff;
			}
		}
		cout << endl;
	}
	return min;
}
int main(){
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	cout << mindiff(arr);

}