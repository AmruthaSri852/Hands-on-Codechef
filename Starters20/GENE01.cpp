#include <iostream>
using namespace std;
int main()
{
   // your code goes here
        char a,b,R,B,G;
        cin >> a >> b;
        int i=0;
        int j=0;

        if (a == 'R') {i=3;}
        else if (a=='B') {i= 2;}
        else {i=1;}

        if (b=='R') {j=3;}
        else if (b=='B') {j=2;}
        else {j=1;}

        if (i>j) { 
            //cout << i << endl; cout << j << endl;
                cout<< a << endl; }
        else {
                //cout << i << endl; cout << j << endl; 
        cout << b << endl; }

        return 0;
}
