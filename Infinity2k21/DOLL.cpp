
#include <iostream>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--){
        int N,A,H,count=0;
        cin>>N>>A;
	for(int i=0;i<N;i++){
	cin>>H;
	if(H>A)
	count++;
	}
	cout<<count<<endl;
     }
     return 0;


}
