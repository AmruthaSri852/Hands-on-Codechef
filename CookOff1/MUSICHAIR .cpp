#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	int k=0;
	cin>>t;
    while(t--)
	{
	    cin>>n;
	    int k=0;
	    for(int j=1;j<=sqrt(n-1);j++)
	    {
	        if( (n-1)%j == 0)
	        {
	            if((n-1)/j==j)
	            {
	                k=k+1;
	            }
	            else
	            {
	                k=k+2;
	            }
	        }
	    }
	    cout<<k<<endl;
	}
	 
	return 0;
}
