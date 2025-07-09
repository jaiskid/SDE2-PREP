#include<bits/stdc++.h>
using namespace std;
bool ispallindrome(string s,int start,int end){
	if(start>=end){
		return true;
	}
	return (s[start] == s[end]) && ispallindrome(s,start+1,end-1);
}
int main(){
	string s;
	cin >> s;
	int start = 0;
	int end = s.length();
	cout << ispallindrome(s,start,end);
}