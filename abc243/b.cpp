#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    vector<int> B(N);
    for(int i=0;i<N;i++){
        cin >> B[i];
    }
    int ans1 = 0;
    for(int i=0;i<N;i++){
        if ( A[i] == B[i] ) {
            ans1 += 1;
        }
    }
    sort(A.begin(),A.end());
    sort(B.begin(), B.end());
    int ans2 = 0;
    vector<int>::iterator itrA = A.begin();
    vector<int>::iterator itrB = B.begin();
    while(true){
        if ( itrA == A.end() || itrB == B.end() ) {
            break;
        }
        //
        if ( *itrA == *itrB ) {
            ans2 += 1;
            itrA++;
            itrB++;
            continue;
        }
        if ( *itrA < *itrB ) {
            itrA++;
            continue;
        }
        if ( *itrA > *itrB ) {
            itrB++;
            continue;
        }
    }
    cout << ans1 << endl;
    cout << ( ans2 - ans1 ) << endl;
    return 0;
}