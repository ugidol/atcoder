#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    vector<vector<char>> vec(N,vector<char>(N));
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> vec[i][j];
        }
    }
    //
    string ans = "correct";
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if ( vec[i][j] == 'W' ) {
                if ( vec[j][i] != 'L' ) {
                    ans = "incorrect";
                    goto eol;
                }
            }
            else if ( vec[i][j] == 'L' ) {
                if ( vec[j][i] != 'W' ) {
                    ans = "incorrect";
                    goto eol;
                }
            }
            else if ( vec[i][j] == 'D' ) {
                if ( vec[j][i] != 'D' ) {
                    ans = "incorrect";
                    goto eol;
                }
            }
        }
    }
eol:
    cout << ans << endl;
    return 0;
}