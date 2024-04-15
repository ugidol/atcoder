#include <bits/stdc++.h>
using namespace std;
int main(void){
    string A,B;
    cin >> A >> B ;
    if ( A.size() < B.size() ) {
        swap(A,B);
    }
    size_t len = max(A.size(),B.size());
    vector<char> AA(len,'0');
    copy(A.begin(),A.end(),AA.begin());
    vector<char> BB(len,'0');
    size_t diff = A.size() - B.size();
    copy(B.begin(),B.end(),BB.begin()+diff);
    string ans = "Easy";
    for(int i=0;i<len;i++){
        int idx = len - 1 - i;
        int a = AA[i] - '0';
        int b = BB[i] - '0';
        if ( a + b >= 10 ) {
            ans = "Hard";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}