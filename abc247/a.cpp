#include <bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin >> s;
    s.insert(s.begin(),'0');
    s.erase(s.end()-1);
    cout << s << endl;
    return 0;
}