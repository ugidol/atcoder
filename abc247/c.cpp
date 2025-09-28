#include <bits/stdc++.h>
using namespace std;
string func(int v){
    if ( v == 1 ) {
        return to_string(1);
    }
    string s = func(v-1);
    return s + " " + to_string(v) + " " + s;
}
int main(void){
    int N;
    cin >> N;
    string ans = func(N);
    cout << ans << endl;
    return 0;
}