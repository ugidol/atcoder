#include <bits/stdc++.h>
using namespace std;
int main(void){
    vector<char> s(3);
    for(int i=0;i<3;i++){
        cin >> s[i];
    }
    string t;
    for(int i=0;i<3;i++){
        char c ;
        cin >> c;
        t.push_back(c);
    }
    //
    set<string> st;
    //
    for(int left=0;left<3;left++){
        for(int right=left+1;right<3;right++){
            char ary[3];
            copy(s.begin(),s.end(),ary);
            swap(ary[left],ary[right]);
            string s(ary);
            st.insert(s);
        }
    }
    //
    string ans = "Yes";
    if ( st.find(t) != st.end() ) {
        ans = "No";
    }
    cout << ans << endl; 
    return 0;
}