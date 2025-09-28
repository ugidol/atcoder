#include <bits/stdc++.h>
using namespace std;

long double func(pair<int,int> &a, pair<int,int> &b){
    int x = 0;
    if ( ( a.first > 0 && b.first > 0 ) || ( a.first < 0 && b.first < 0 ) ) {
        x = abs(a.first - b.first);
    }
    else {
        x = abs(a.first) + abs(b.first);
    }
    int y = 0;
    if ( ( a.second > 0 && b.second > 0 ) || ( a.second < 0 && b.second < 0 ) ) {
        y = abs(a.second - b.second);
    }
    else {
        y = abs(a.second) + abs(b.second);
    }
    long double ret = sqrt(x * x + y * y );
    return ret;
}

int main(void){
    int N;
    cin >> N;
    vector<pair<int,int>> vec(N);
    for(int i=0;i<N;i++){
        int x,y;
        cin >> x >> y;
        pair<int,int> p = make_pair(x,y);
        vec[i] = p;
    }
    //
    long double ans =0;;
    for(int i=0;i<N;i++){
        pair<int,int> &a = vec[i];
        for(int j=i+1;j<N;j++){
            pair<int,int> &b = vec[j];
            long double v = func(a,b);
            ans = max(ans,v);
        }
    }
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}