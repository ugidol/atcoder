#include <bits/stdc++.h>
using namespace std;

int func(vector<int> &vec, int max){
    auto it = upper_bound(vec.begin(), vec.end(), max);
    if ( it == vec.end() ) {
        return 1;
    }
    else {
        return distance(it,vec.end()) + 1;
    }
}

int main(void){
    // 入力
    int n , k ;
    cin >> n >> k ;

    vector<int> vec(n);
    vector<int> vec2(n);
    for(int i=0;i<n;i++){
        int score[3];
        cin >> score[0] >> score[1] >> score[2];
        int sum = score[0] + score[1] + score[2];
        vec[i] = sum ;
        vec2[i] = sum;
    }

    // 昇順でソート
    sort(vec2.begin(), vec2.end());

    //
    for(int i=0;i<n;i++){
        int max = vec[i] + 300 ;
        if ( max > 1200 ) {
            max = 1200 ;
        }
        string ans = "No";
        int cnt = func(vec2,max);
        if ( cnt <= k ) {
            ans = "Yes";
        }
        cout << ans << endl; 
    }

    return 0;
}
