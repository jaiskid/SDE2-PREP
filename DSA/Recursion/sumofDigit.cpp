#include<bits/stdc++.h>
using namespace std;
int sum(int n){
	if(n<=9){
		return n;
	}
	return n%10 + sum(n/10);
}
int main(){
	int n;
	cin >> n;
	cout << sum(n);
}