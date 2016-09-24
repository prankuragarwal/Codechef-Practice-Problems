#include<bits/stdc++.h>
using namespace std;
//prankuragarwal
 
int rec(string a, string b){
	int n=a.length(), m= b.length(),i=0,j=0;
	for(; i<n &&  j<m; ){
		if(a[i]==b[j]){
			i++; j++;
		}else{
			i++;
		}
	}
	if(j==m) return 1;
	return 0;
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		string a, b;
		cin>>a>>b;
		int n= a.length(), m= b.length();
		if(n==m){
			if(a==b) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}else if(n>m && rec(a, b))cout<<"YES"<<endl;
		else if(m>n && rec(b,a))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}	
} 
