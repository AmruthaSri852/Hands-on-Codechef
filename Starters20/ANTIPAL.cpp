#include<iostream>
using namespace std;
int main() {
        int t;
        cin>>t;
        while (t--){
            int n;
            cin >>n;
            if (n%2!=0) {
                cout<< -1 << endl;
            }
            else {
                string str="";
                for (int i=0;i<n/2;i++){
                    str+="10";
                }
                cout << str << endl;
            }

        }
        return 0;
}
