#include <bits/stdc++.h>
using namespace std;
int main(void){
    long int a , b , k;
    cin >> a >> b >> k;
    long int ans = 0;
    for(int i=0;i<100000000;i++){
        if ( a >= b ) {
            ans = i;
            break;
        }
        a *= k;
    }
    cout << ans << endl;
    return 0;
}