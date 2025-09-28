#include <bits/stdc++.h>
using namespace std;
long func1(multiset<long> &st, long x){
    st.insert(x);
    return 0;
}
long func2(multiset<long> &st, long x, long k){
    long ret = 0;
    //sort(vec.begin(), vec.end());
    multiset<long>::iterator it = st.upper_bound(x);
    for(int i=0;i<k&&it!=st.begin();i++){
        it--;
    }
    ret = *it;
    return ret;
}
long func3(multiset<long> &st, long x, long k){
    long ret = 0;
    //sort(vec.begin(), vec.end());
    multiset<long>::iterator it = st.lower_bound(x);
    for(int i=0;i<k-1&&it!=st.end();i++){
        it++;
    }
    if ( it == st.end() ) {
        return -1;
    }
    ret = *it;
    return ret;
}
int main(void){
    int Q;
    cin >> Q;
    multiset<long> st;
    st.insert(-1);
    for(int i=0;i<Q;i++){
        long q=0,x=0;
        cin >> q;
        cin >> x;
        if ( q == 1 ) {
            func1(st,x);
        }
        else if ( q == 2 ) {
            long k ;
            cin >> k;
            long ans = 0;
            ans = func2(st,x,k);
            cout << ans << endl;
        }
        else if ( q == 3 ) {
            long k ;
            cin >> k;
            long ans = 0;
            ans = func3(st,x,k);
            cout << ans << endl;
        }
    }
    return 0;
}