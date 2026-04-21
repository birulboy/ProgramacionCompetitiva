#include <iostream> 
#include <string>
using namespace std; 
int HowMuchCanISleep( int n , int k , string s ) {
    int Days = 0;
    int DiasDescanso = 0;
    for ( int i = 0 ; i < n ; i++) {
        if ( s[i] == '1' ){
            DiasDescanso = k;
        } else if ( s[i] == '0' and DiasDescanso == 0 ) {
            Days++;
        } else {
            DiasDescanso--;
        }
    }
    return Days;
}

int main() {
    int t = 1;
    cin >> t ;
    while ( t -- ) {
        int n = 0;
        int k = 0;
        string s ="";
        cin >>  n >> k ;
        cin >> s ;
        cout << HowMuchCanISleep( n , k , s) << endl;
    }

    return 0; 
}