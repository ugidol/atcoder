#include <bits/stdc++.h>
using namespace std;
bool is_kaibun(string &s){
    bool ret = true;
    for(int i=0;i<(int)(s.size()/2);i++){
        char left = s[i];
        char right = s[s.size()-1-i];
        if ( left != right ) {
            ret = false;
            break;
        }
    }
    return ret;
}
int main(void){
    int N;
    cin >> N;
    string s = to_string(N);
    int len = (int)s.size();
    string ans = "No";
    for(int i=0;i<len;i++){
        bool b = is_kaibun(s);
        if ( b ) {
            ans = "Yes";
            break;
        }
        s = '0' + s ;
    }
    cout << ans << endl;
    return 0;
}