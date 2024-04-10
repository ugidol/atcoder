#include <bits/stdc++.h>
using namespace std;
long func(long a, long b){
    return a * a * a + a * a * b + a * b * b + b * b * b ;
}
#define MX (long)(1000000L)
int main(void){
    long N;
    cin >> N;
    long ans = LONG_MAX;
    for(long i=0;i<MX;i++){
        long a = i;
        long left = a;
        long right = MX;
        while(right>=left){
            long mid = ( left + right ) / 2;
            long value = func(a,mid);
            if ( value == N ) {
                ans = value;
                goto out_of_loop;
            }
            if ( value > N ) {
                ans = min(ans,value);
                right = mid - 1;
            }
            else if ( value < N ) {
                left = mid + 1;
            }
        }
    }
    out_of_loop:
    cout << ans << endl;
    return 0;
}