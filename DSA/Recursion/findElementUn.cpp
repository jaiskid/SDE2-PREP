#include<bits/stdc++.h>
using namespace std;
bool findElement(vector<int>&arr,int x,int s,int e){
	if(s>e){
		return false;
	}
	if(arr[s] == x){
		return true;
	}
	if(arr[e] == x){
		return true;
	}
	return findElement(arr,x,s+1,e-1);
}


int findElementbyIndex(vector<int>&arr,int x,int s,int e){
	if(s>e){
		return -1;
	}
	if(arr[s] == x){
		return s;
	}
	if(arr[e] == x){
		return e;
	}
	return findElementbyIndex(arr,x,s+1,e-1);
}

int main(){
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	int x;
	cin >> x;
	cout << findElement(arr,x,0,n-1);
	cout << findElementbyIndex(arr,x,0,n-1);
}