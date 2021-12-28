#include <bits/stdc++.h>
using namespace std;
bool isvowel(char vow)
{
	if(vow=='a'||vow=='e'||vow=='i'||vow=='o'||vow=='u')
	return true;
	return false;
}
int main () {
    int t;
    cin>>t;
    while(t--){
        int n,ans=1e9;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        
        for (char i='a';i<='z';i++){ 
        string str1=s1;
        int count =0;
        string str2=s2;
        
        for (int j=0;j<n;j++){ 
        if (str1[j]=='?') str1[j]=i;
        if (str2[j]=='?') str2[j]=i;}
       
        for (int j=0;j<n;j++) {
            
        if (str1[j]==str2[j]) continue;
        else if (isvowel(str1[j])!=isvowel(str2[j]))
        count +=1;
        else count+=2;}
        ans = min (ans,count);
        }
            cout << ans << endl;
    }
     return 0;
}
