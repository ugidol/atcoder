#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    vector<int> vec(N);
    for(int i=0;i<N;i++){
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end());
    int ans = 0;
    for(size_t i=0;i<vec.size();i++){
        if ( ans < vec[i] ) {
            break;
        }
        if ( ans == vec[i] ) {
            ans += 1;
            continue;
        }
        if ( ans > vec[i] ) {
            continue;
        }
    }
    cout << ans << endl;
    return 0;
}