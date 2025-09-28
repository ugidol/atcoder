#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N,M;
    cin >> N >> M ;
    map<int,int> A;
    for(int i=0;i<N;i++){
        int a;
        cin >> a ;
        A[a] += 1;
    }
    string ans = "Yes";
    for(int i=0;i<M;i++){
        int b;
        cin >> b;
        A[b] -= 1;
        if ( A[b] < 0 ) {
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
