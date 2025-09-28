#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N,A,B;
    cin >> N >> A >> B;
    for(int i=0;i<A*N;i++){
        for(int j=0;j<B*N;j++){
            int v = 0;
            if ( ( i / A ) % 2 == 0 ) {
                v ^= 1 ;
            }
            if ( ( j / B ) % 2 == 0 ) {
                v ^= 1 ;
            }
            if ( v == 0 ) {
                cout << '.';
            }
            else {
                cout << '#';
            }
        }
        cout << endl;
    }
    return 0;
}