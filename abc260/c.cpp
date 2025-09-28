#include <bits/stdc++.h>
using namespace std;
void red(int,long);
void blue(int,long);
int N,X,Y;
long ans = 0;
void red(int level, long num){
    if ( level <= 1 ) {
        return ;
    }
    red(level-1,num);
    blue(level,num*X);
}
void blue(int level, long num){
    if ( level <= 1 ) {
        ans += num;
        return ;
    }
    red(level-1,num);
    blue(level-1,num*Y);
}
int main(void){
    cin >> N >> X >> Y;
    red(N,1);
    //
    cout << ans << endl;
    return 0;
}