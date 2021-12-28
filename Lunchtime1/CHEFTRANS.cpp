#include<iostream>
using namespace std;
int main () {
	int t,x,y,z;
	cin>>t;
	while (t--) {
	cin>>x>>y>>z;
	if (x+y<z)
	cout << "PlANEBUS" <<endl;
	else if (x+y>z)
	cout << "TRAIN" <<endl;
	else cout << "EQUAL" <<endl;




} return 0;

}
