#include <iostream>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
	int a,b;
	cin>>a>>b;
	for (int i=0;i<=10;i++)
	{if (a == b )
    {
        cout << "YES"<<endl;
        break;
    }
    else if (a<b){cout<<"No"<<endl; break;}
    else {cout << "YES" << endl; break;}
	}}
	return 0;

}
