#include <iostream>
using namespace std;
int main ( ) {
    int t = 1;
    cin >> t;
    while ( t-- ){
        int n = 0;
        int a = 0;
        int b = 0;
        cin >> n >> a >> b;
        int ab = a + b;
        if ( ( a == 1 && b == 1 && ( n == 1 || n > 3) ) || ( n - ab >= 2) || ( n == a && b == a))  {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}