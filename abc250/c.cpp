#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N,Q;
    cin >> N >> Q;
    vector<int> vec(N,0);
    map<int,int> mp;
    for(int i=0;i<N;i++){
        vec[i] = i+1;
        mp[i+1] = i;
    }
    //
    for(int i=0;i<Q;i++){
        int x ;
        cin >> x;
        int idx = mp[x];
        if ( idx < N - 1 ) {
            int y = vec[idx+1];
            swap(vec[idx],vec[idx+1]);
            mp[y] = idx;
            mp[x] = idx+1;
        }
        else {
            int y = vec[idx-1];
            swap(vec[idx],vec[idx-1]);
            mp[y] = idx;
            mp[x] = idx-1;
        }
    }
    //
    for(auto it : vec){
        cout << it << ' ';
    }
    cout << endl;
    return 0;
}