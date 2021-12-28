#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
	int N;
	cin>>N;
	string str;
	cin>>str;
	int a=0,b=0,i;
	for(int i=0;i<N;i++)
	if(str[i]=='1')
	a++;
	else b++;
	int ans=0;
	ans = max (ans,min(a,b)-1);
	cout<<ans<<endl;
	    
	} 
	return 0; 
    
}
