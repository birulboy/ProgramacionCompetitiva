#include <iostream>
using namespace std;
bool IsNotDecreasent (int n , int ListOfNumbers[]) {
    int Comparador = -1;
    for ( int i = 0 ; i < n ; i++){
        if ( ListOfNumbers[i] < Comparador) {
            return false;
        } else if ( ListOfNumbers[i] >= Comparador ){
            Comparador = ListOfNumbers[i];
        }
    }
    return true;
}
int main() {
    int t = 1;
    cin >> t ;
    while ( t -- ) {
        int n = 0;
        int k = 0;
        cin >> n >> k;
        int ListOfNumbers[n];
        for ( int i = 0 ; i < n ; i++) {
            int a = 0;
            cin >> a ;
            ListOfNumbers[i] = a;
        }

        if ( k != 1 or IsNotDecreasent( n , ListOfNumbers) ) {
            cout << "YES" << endl ;
        } else {
            cout << "NO" << endl ;
        }
    }    
        
    return 0; 
}