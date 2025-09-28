#include <bits/stdc++.h>
using namespace std;

int tbl[1000+2][1000+2];

bool func(int x, int y){
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;
    for(int i=0;i<6;i++){
        if ( tbl[x+i][y] == '#' ) {
            c1 += 1;
        }
        if ( tbl[x][y+i] == '#' ) {
            c2 += 1;
        }
        if ( tbl[x+i][y+i] == '#' ) {
            c3 += 1;
        }
        if ( tbl[x+i][y+(5-i)] == '#' ) {
            c4 += 1;
        }
    }
    if ( c1 >= 4 || c2 >= 4 || c3 >= 4 || c4 >= 4 ) {
        return true;
    }
    else {
        return false;
    }
}

bool func2(int x, int y){
    int c2 = 0;
    for(int i=0;i<6;i++){
        if ( tbl[x][y+i] == '#' ) {
            c2 += 1;
        }
    }
    if ( c2 >= 4 ) {
        return true;
    }
    else {
        return false;
    }
}
bool func3(int x, int y){
    int c1 = 0;
    for(int i=0;i<6;i++){
        if ( tbl[x+i][y] == '#' ) {
            c1 += 1;
        }
    }
    if ( c1 >= 4 ) {
        return true;
    }
    else {
        return false;
    }
}

int main(void){
    int N;
    cin >> N;
    memset(&tbl[0][0],'.',sizeof(tbl));
    for(int i=0;i<N;i++){
        string s;
        cin >> s;
        for(size_t j=0;j<s.size();j++){
            tbl[i][j] = s[j];
        }
    }
    //
    string ans = "No";
    for(int i=0;i<(N-5);i++){
        for(int j=0;j<(N-5);j++){
            bool b = func(i,j);
            if ( b ) {
                ans = "Yes";
                break;
            }
        }
    }
    //
    for(int i=(N-5);i<N;i++){
        for(int j=0;j<(N-5);j++){
            bool b = func2(i,j);
            if ( b ) {
                ans = "Yes";
                break;
            }
        }
    }
    //
    for(int i=0;i<=(N-5);i++){
        for(int j=(N-5);j<N;j++){
            bool b = func3(i,j);
            if ( b ) {
                ans = "Yes";
                break;
            }
        }
    }
    cout << ans << endl;

    return 0;
}