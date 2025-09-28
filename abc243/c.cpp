#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    vector<pair<int,int>> vec(N);
    for(int i=0;i<N;i++){
        int x,y;
        cin >> x >> y;
        pair<int,int> p = make_pair(x,y);
        vec[i] = p;
        //
    }
    string S;
    cin >> S;
    map<int,int> mpR;
    map<int,int> mpL;
    for(int i=0;i<N;i++){
        pair<int,int> &p = vec[i];
        int x = p.first;
        int y = p.second;
        if ( S[i] == 'R' ) {
            if ( mpR[y] == 0 ) {
                mpR[y] = x;
            }
            else {
                mpR[y] = min(mpR[y],x);
            }
        }
        else {
            if ( mpL[y] == 0 ) {
                mpL[y] = x;
            }
            mpL[y] = max(mpL[y],x);
        }
    }
    // ▼
    string ans = "No";
    for(auto r : mpR){
        int rx = r.second;
        int ry = r.first;
        int lx = mpL[ry];
        if ( lx > rx ) {
            ans = "Yes";
            break;
        }
    }
    cout << ans << endl;

    return 0;
}