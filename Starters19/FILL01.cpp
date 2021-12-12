#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	  while(t--){
	int n,k,i,h=0,a=0;
	cin>>n>>k;
	string str;
	cin>>str;
	for(i=0;i<str.length();i++){
	if (str[i]=='0'){
    h++;
  if (h>=k){a++;h=0;}}
  else {h=0;}
  }
      cout<<a;
    cout <<endl;
  }
return 0;
}
