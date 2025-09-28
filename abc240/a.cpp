#include <bits/stdc++.h>
using namespace std;
int main(void){
    int a,b;
    cin >> a >> b ;
    string ans = "No";
    if ( abs(b - a) == 1 || abs(a-b) == 9 ) {
        ans = "Yes";
    }
    cout << ans << endl;
    return 0;
}