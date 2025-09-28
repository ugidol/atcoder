#include <bits/stdc++.h>
using namespace std;

long func(const string &s){
    long ret = 0;
    for(size_t i=1;i<s.size();i++){
        string a = s.substr(0,i);
        string b = s.substr(i);
        long la = stol(a);
        long lb = stol(b);
        long c = la * lb ;
        // printf("(%s,%s)=%ld\n",a.c_str(),b.c_str(),c);
        ret = max(ret,c);
    }
    return ret;
}

int main(void){
    string n;
    cin >> n ;
    long ans = 0;
    sort(n.begin(), n.end());
    do {
        // cout << n << endl ;
        ans = max(ans,func(n));
    }
    while(next_permutation(n.begin(),n.end()));
    cout << ans << endl;
    return 0;
}