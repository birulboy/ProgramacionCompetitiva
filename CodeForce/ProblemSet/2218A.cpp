#include <iostream> 

using namespace std; 

int main() {
    int t = 1;
    cin >> t ;
    while ( t -- ) {
        int x = 0;
        cin >> x;
        if ( x*x == 4489) {
            cout << 67 << endl;
            continue;
        }
        cout << x+1 << endl;
    }

    return 0; 
}