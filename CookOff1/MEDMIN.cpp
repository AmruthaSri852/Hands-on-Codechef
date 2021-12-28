#include <bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++)
    cin>>a[i];
    sort (a,a+n);
    cout << (abs(a[n/2]-a[n/2-1]))<<endl;
    }
    return 0;


}
