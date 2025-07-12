#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<bool>arr(n,false);
	int t;
	cin >> t;
	while(t!= 999){
	  if(t == 111){
		int insert;
		cin >> insert;
		arr[insert] = true;
	  }
	  if(t == 222){
		int search;
		cin >> search;
		cout << arr[search] << endl;
	  }
	  if(t == 333){
	  	int del;
	  	cin >> del;
	  	arr[del] = false;
	  }
	  cin >> t;
	}
	
}