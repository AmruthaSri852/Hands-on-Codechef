#include <iostream>
using namespace std;
int main()
{
   // your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        char a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        int i = 0;
        int j = 0;

        if (d==a) {i=3;}
        else if (d==b) {i= 2;}
        else {i=1;}

        if (e==a) {j=3;}
        else if (e==b) {j=2;}
        else {j=1;}

        if (i>j) { cout<< d << endl; }
        else { cout << e << endl; }
    }
        return 0;
}

