#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N,P,Q,R,S;
    cin >> N >> P >> Q >> R >> S;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        int a;
        cin >> a;
        A[i] = a;
    }
    P -= 1;
    Q -= 1;
    R -= 1;
    S -= 1;
    //
    int diff = R - P ;
    vector<int> B(N);
    for(int i=0;i<N;i++){
        if ( i >= P && i <= Q ) {
            B[i+diff] = A[i];
        }
        else if ( i >= R && i <= S ) {
            B[i-diff] = A[i];
        }
        else {
            B[i] = A[i];
        }
    }
    //
    for(auto itr : B ) {
        cout << itr << ' ';
    }
    cout << endl;
    return 0;
}