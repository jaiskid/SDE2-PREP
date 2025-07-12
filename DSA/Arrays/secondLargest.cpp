#include<bits/stdc++.h>
using namespace std;
int largest(vector<int>&arr){
	int largest_index;
	int max_element = INT_MIN;
	for(int i = 0;i<arr.size();i++){
		if(arr[i]>=max_element){
			max_element = arr[i];
			largest_index = i;
		}
	}
	cout << largest_index << endl;
	return largest_index;
}
int secondLargest(vector<int>&arr){
	int largest_index = largest(arr);
	int second_Largest = INT_MIN;
	for(int i = 0;i<arr.size();i++){
		if(arr[i]!=arr[largest_index] and arr[i]>=second_Largest){
			second_Largest = arr[i];
		}
	}
	return second_Largest;
}
int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0;i<n;i++){
		cin >> arr[i];
	}
	cout << secondLargest(arr);
}