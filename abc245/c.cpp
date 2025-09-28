#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N,K;
    cin >> N >> K ;
    vector<int> A(N);
    vector<int> B(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    for(int i=0;i<N;i++){
        cin >> B[i];
    }
    vector<pair<int,int>> C(N);
    string ans = "Yes";
    for(int i=0;i<N-1;i++){
        //
        if ( abs(A[i] - A[i+1]) > K ) {
            if ( abs(B[i] - A[i+1]) > K ) {
                A[i+1] = 0;
            }
        }
        if ( abs(A[i] - B[i+1]) > K ) {
            if ( abs(B[i] - B[i+1]) > K ) {
                B[i+1] = 0;
            }
        }
        //
        if ( A[i+1] == 0 && B[i+1] == 0 ) {
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}