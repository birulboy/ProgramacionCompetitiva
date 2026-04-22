#include <iostream> 

using namespace std; 
int MiniumCapacityOfTheTank ( int GasolinerasPositions[] , int ImportantStops ) {
    int CapacityNeeded = 0;
    for ( int i = 0 ; i < ImportantStops - 1 ; i ++) {
        int StartPoint = GasolinerasPositions[i];
        int FinalPoint = GasolinerasPositions[i+1];
        if ( ( FinalPoint - StartPoint )*2 >= CapacityNeeded and FinalPoint == GasolinerasPositions[ImportantStops -1] ) {
            CapacityNeeded = ( FinalPoint-StartPoint)*2;
        } else if ( ( FinalPoint - StartPoint ) > CapacityNeeded ) {
            CapacityNeeded = ( FinalPoint - StartPoint );
        }
    }
    return CapacityNeeded;
}
int main() {
    int t = 1;
    cin >> t ;
    while ( t -- ) {
        int n = 0;
        int x = 0;
        
        cin >> n >> x;
        int GasolinerasPositions[n+2];
        GasolinerasPositions[0]=0;
        GasolinerasPositions[n+1]= x;
        for ( int i = 1 ; i < n + 1 ; i++) {
            int Position = 0;
            cin >> Position ;
            GasolinerasPositions[i] = Position;
        }
        
        cout << MiniumCapacityOfTheTank ( GasolinerasPositions , n+2) << endl ;
    }
    return 0; 
}