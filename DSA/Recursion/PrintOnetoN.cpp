#include<bits/stdc++.h>
using namespace std;
void printOneTOn(int n){

	if(n>0){
		return;
	}
	return printOneTOn(n-1);
	cout << n << " ";
}
int main(){
	int n;
	cin >> n;
	printOneTOn(n);
}