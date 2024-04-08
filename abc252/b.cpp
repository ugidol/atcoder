#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N,K;
    cin >> N >> K;
    vector<pair<int,int>> A(N);
    for(int i=0;i<N;i++){
        int b ;
        cin >> b;
        pair<int,int> p = make_pair(i+1,b);
        A[i] = p;
    }
    //
    set<int> B;
    for(int i=0;i<K;i++){
        int b;
        cin >> b;
        B.insert(b);
    }
    //
    string ans = "No";
    sort(A.begin(), A.end(), [](pair<int,int> &a, pair<int,int> &b){ return a.second > b.second ; });
    int tmp = A[0].second;
    for(auto it : A ) {
        if ( tmp != it.second ) {
            break;
        }
        if ( B.find(it.first) != B.end() ) {
            ans = "Yes";
            break;
        }
    }
    //
    cout << ans << endl;

    return 0;
}