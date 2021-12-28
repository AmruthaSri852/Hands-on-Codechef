#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
	int A[N];
	for (int i=0;i<N;i++)
	    { 
	        cin>>A[i];
	        
	    }
	    sort(A,A+N);
    int prize=0;
    for (int i=1;i<N;i++)
     { 
         prize +=A[i];
         
     }
    
    cout<<prize<<endl;

    } return 0;

}
