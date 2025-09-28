#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    map<string,int> mp;
    for(int i=0;i<N;i++){
        string s;
        cin >> s;
        int c = mp[s];
        if ( c > 0 ) {
            fprintf(stdout,"%s(%d)\n",s.c_str(),c);
        }
        else {
            fprintf(stdout,"%s\n",s.c_str());
        }
        mp[s] += 1;
    }
    return 0;
}