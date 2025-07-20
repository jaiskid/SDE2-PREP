#include<bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int>&arrN,vector<int>&arrM){
	int n = arrN.size();
	int m = arrM.size();
	int i = 0;
	int j = 0;
	vector<int>temp;
	while(i < n and j < m){
		if(arrN[i] < arrM[j]){
			temp.push_back(arrN[i++]);
		}
		else{
			temp.push_back(arrM[j++]);
		}
	}
	while(i < n){
		temp.push_back(arrN[i++]);
	}
	while(j < m){
		temp.push_back(arrM[j++]);
	}
	return temp;
}
int main(){
	int n;
	cin >> n;
	vector<int>arrN(n);
	for(int i = 0 ; i < n ; i++){
		cin >> arrN[i];
	}
	int m;
	cin >> m;
	vector<int>arrM(m);
	for(int i = 0 ; i < m ; i++){
		cin >> arrM[i];
	}
	vector<int> finalarray = merge(arrN,arrM);
	for(auto i : finalarray){
		cout << i << " ";
	}
}