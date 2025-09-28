#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N,X;
    cin >> N >> X ;
    vector<pair<int,int>> vec(N);
    for(int i=0;i<N;i++){
        int a, b;
        cin >> a >> b;
        if ( a > b ) {
            swap(a,b);
        }
        pair<int,int> p = make_pair(a,b);
        vec[i] = p;
    }
    int min = 0;
    int max = 0;
    for(int i=0;i<N;i++){
        pair<int,int> &p = vec[i];
        min += p.first;
        max += p.second;
    }
    string ans = "Yes";
    if ( X < min ) {
        ans = "No";
        cout << ans << endl;
        return 0;
    }
    if ( X > max ) {
        ans = "No";
        cout << ans << endl;
        return 0;
    }
    vector<set<int>> ary(N+1);
    set<int> st;
    st.insert(0);
    ary[0] = st;
    for(int i=0;i<N;i++){
        pair<int,int> &p = vec[i];
        for(auto it : ary[i]){
            ary[i+1].insert(it + p.first);
            ary[i+1].insert(it + p.second);
        }
    }
    bool ret = binary_search(ary[N].begin(), ary[N].end(), X);
    if ( ret ) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}