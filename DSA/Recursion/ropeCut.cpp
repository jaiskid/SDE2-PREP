#include<bits/stdc++.h>
using namespace std;
int maxCuts(int n,int a,int b,int c){
	if(n==0){
		return 0;
	}
	if(n<0){
		return -1;
	}
	int maxA = maxCuts(n-a,a,b,c);
	int maxB = maxCuts(n-b,a,b,c);
	int maxC = maxCuts(n-c,a,b,c);
	int res = max({maxA,maxB,maxC});
	if(res == -1){
		return -1;
	}
	return res+1;
}

int main(){
	int n;
	cin >> n;
	int a,b,c;
	cin >> a >> b >> c;
	cout << maxCuts(n,a,b,c);
}