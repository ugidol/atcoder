#include <bits/stdc++.h>
using namespace std;
int main(void){
    string S;
    cin >> S;
    string t(S.size(),' ');
    //
    char ary[] = { 'o','x','x' };
    //
    for(size_t i=0;i<S.size();i++){
        t[i] = ary[i%3];
    }
    //
    if ( S == t ) {
        cout << "Yes" << endl;
        return 0;
    }
    for(size_t i=0;i<S.size();i++){
        t[i] = ary[(i+1)%3];
    }
    if ( S == t ) {
        cout << "Yes" << endl;
        return 0;
    }
    for(size_t i=0;i<S.size();i++){
        t[i] = ary[(i+2)%3];
    }
    if ( S == t ) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}