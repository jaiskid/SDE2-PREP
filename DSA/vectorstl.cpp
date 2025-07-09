#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0;i<n;i++){
		cin >> arr[i];
	}
	// auto start = arr.begin();
	// cout << *start;
	auto size = arr.size();
	cout << size << endl;
	arr.push_back(6);
	cout << arr.capacity();

}
