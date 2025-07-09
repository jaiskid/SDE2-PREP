#include<bits/stdc++.h>
using namespace std;

int sumofnatural(int n){
	if(n == 0){
		return 0;
	}
	return n + sumofnatural(n-1);
}
int main(){

	int n;
	cin >> n;

	cout << sumofnatural(n);
}