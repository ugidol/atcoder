#include <bits/stdc++.h>
using namespace std;
int main(void){
    int L1,R1, L2, R2;
    cin >> L1 >> R1 >> L2 >> R2 ;
    int ans = min(R1,R2) - max(L1,L2);
    if ( ans < 0 ) {
        ans = 0;
    }
    cout << ans << endl;
    return 0;
}