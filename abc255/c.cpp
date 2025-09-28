#include <bits/stdc++.h>
using namespace std;
int main(void){
    long X,A,D,N;
    cin >> X >> A >> D >> N;
    //
    long ans = 0;
    long mn = min(A, A + ( D * N ) ) ;
    long mx = max(A, A + ( D * N ) ) ;
    if ( mn <= X && X <= mx ) {

    }
    else {
        ans = min(
            abs(X) ,) ;
    }
    return 0;
}