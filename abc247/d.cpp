#include <bits/stdc++.h>
using namespace std;
int main(void){
    int Q;
    cin >> Q;
    deque<int> deq; 
    for(int i=0;i<Q;i++){
        int q;
        cin >> q;
        if ( q == 1 ) {
            int x,c;
            cin >> x >> c;
            for(int i=0;i<c;i++){
                deq.push_back(x);
            }
        }
        if ( q == 2 ) {
            int c;
            cin >> c;
            long ans = 0;
            for(int i=0;i<c;i++){
                ans += deq.front();
                deq.pop_front();
            }
            cout << ans << endl;
        }
    }
    return 0;
}