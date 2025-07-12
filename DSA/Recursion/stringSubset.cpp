#include<bits/stdc++.h>
using namespace std;
//abc
void subset(string &s, int l,string curr){

	if(l==s.length()){
		cout << curr << endl;
		return;
	}

	subset(s,l+1,curr+s[l]);
 	subset(s,l+1,curr);
}
int main(){
	string s;
	cin >> s;
	subset(s,0,"");
}