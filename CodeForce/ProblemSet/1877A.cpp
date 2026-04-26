#include <iostream>
using namespace std;

int main() {
    int t = 1;
    cin >> t ;
    while ( t -- ) {
        int n = 0;
        cin >> n ;
        int counter = 0;
        for ( int i = 0; i < n - 1 ; i++) {
            int a = 0;
            cin >> a ;
            counter += a ;
        }
        cout << counter*-1 << endl ;
    }    
        
    return 0; 
}