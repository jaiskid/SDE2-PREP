#include<bits/stdc++.h>
using namespace std;
vector<int> bubbleSort(vector<int> arr){
	int n = arr.size();
	bool swapped = true;
	for(int i = 0;i<n-1;i++){
		for(int j = 0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped = false;
			}
		}
		if(!swapped){
			break;
		}
	}
	return arr;
}
int main(){
	int n;
	cin >> n;
	vector<int> arr(n,0);
	for(int i = 0 ;i<n;i++){
		cin >> arr[i];
	}
	auto a = bubbleSort(arr);
	for(auto result : a){
		cout << result<< endl;
	}
}