#include<bits/stdc++.h>
using namespace std;

bool cmp(string a,string b){
	return a+b>b+a;
}

int main(){
	int n;
	cin >> n;
	string s[n];
	
	for(int i = 0;i<n;i++){
		cin >> s[i];
	}
	sort(s,s+n,cmp);
	string sss;
	for(int i = 0;i<n;i++){
		sss = sss + s[i];
	}
	cout <<sss;
} 
