#include <bits/stdc++.h>
using namespace std;
int main(void){
    unsigned long N;
    cin >> N;
    unsigned long X;
    cin >> X;
    string S;
    cin >> S;
    deque<int> q;
    //
    while(X>0){
        if ( X % 2 == 0 ) {
            q.push_front(0);
        }
        else {
            q.push_front(1);
        }
        X /= 2;
    }
    //
    for(unsigned long i=0;i<N;i++){
        char c = S[i];
        if ( c == 'U' ) {
            q.push_front(0);
            q.pop_back();
        }
        if ( c == 'L' ) {
            q.push_back(0);
        }
        if ( c == 'R' ) {
            q.push_back(1);
        }
    }
    //
    long ans = 0;
    long base = 1;
    while(!q.empty()){
        int v = q.back();
        q.pop_back();
        ans += v * base;
        base *= 2;
    }
    //
    cout << ans << endl;
    return 0;
}