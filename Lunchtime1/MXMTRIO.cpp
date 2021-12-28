#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
long long t;
	cin>>t;
	while(t--)
	{
	    long long N;
	    cin>>N;
	   
	    long long arr[N];
	    for(long long i=0;i<N;i++)
	    {
	        cin>>arr[i];
	    }
	     sort(arr, arr + N);

     cout<<(arr[N-1]-arr[0])*arr[N-2]<<endl;
	
   }
    return 0;
}
