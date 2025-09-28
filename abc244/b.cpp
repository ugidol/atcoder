#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    string T;
    cin >> T;
    //
    int direction = 0;
    // east,south,west,north
    vector<int> vec = {0,0,0,0};
    for(int i=0;i<N;i++){
        char c = T[i];
        // go straight
        if ( c == 'S' ) {
            vec[direction] += 1;
        }
        // turn right
        else if ( c == 'R' ) {
            direction = (direction + 1 ) % 4 ;
        }
    }
    int x = vec[0] - vec[2];
    int y = vec[3] - vec[1];
    cout << x << ' ' << y << endl;
    return 0;
}