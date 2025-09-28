#include <bits/stdc++.h>
using namespace std;
typedef struct _cls {
    string s;
    int ans;
} CLS;
int main(void){
    string S;
    cin >> S;
    if ( S == "atcoder" ) {
        cout << 0 << endl;
        return 0;
    }
    map<string,int> mp;
    deque<CLS> deq;
    CLS cls ;
    cls.s = S;
    cls.ans = 0;
    deq.push_front(cls);
    long ans = 0;
    while( ! deq.empty() ) {
        CLS &tmp = deq.back();
        deq.pop_back();
        if ( tmp.s == "atcoder" ) {
            ans = tmp.ans;
            break;
        }
        for(int i=0;i<6;i++){
            string s2 = tmp.s;
            swap(s2[i],s2[i+1]);
            if ( mp.find(s2) == mp.end() ) {
                CLS cls2 ;
                cls2.s = s2;
                cls2.ans = tmp.ans + 1;
                deq.push_front(cls2);
                mp[s2] = cls2.ans;
            }
        }
    }
    cout << ans << endl;
    return 0;
}