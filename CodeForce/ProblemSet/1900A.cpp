
#include <iostream> 
#include <string>
#include <vector>
using namespace std;

vector<int> RecorrerArraid ( int n , string s ){
    int Consecutive = 0;
    int Counter = 0;
    vector<int> Datos;
    for ( int i = 0;  i < n ; i++ ) {
        if (  ( i <= n-3 ) && ( s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'  ) ) {
        Consecutive = 1;
        }
        if ( s[i] == '.'){
            Counter++;
        }
    }
    Datos.push_back(Consecutive);
    Datos.push_back(Counter);
    return Datos;
}

int main()
{
    int t = 1;
    cin >> t ;
    while ( t--) {
        int n = 0;
        string s = "";
        cin >> n >> s ;
        vector<int> Resultados = RecorrerArraid( n , s);
        if ( Resultados.at(0) == 1 ) {
            cout << 2 << endl;
        } else {
            cout << Resultados.at(1) <<endl;
        }
    }
 return 0;
}