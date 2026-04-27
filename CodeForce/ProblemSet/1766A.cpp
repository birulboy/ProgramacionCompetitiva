#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int t = 1;
    cin >> t;
    while ( t--) {
        int n = 0;
        cin >> n;
        int temp = n;
        int digitos = 0;
        while ( temp > 0) {
            digitos++;
            temp /= 10;
        }
        cout << (   (int)( n / (pow(10, digitos-1)) )  + (int)( (digitos - 1) * 9) )  << endl;
    } 
    return 0;
}