#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N,K;
    cin >> N >> K;
    int k = 0;
    vector<string> vec(K);
    for(int i=0;i<N;i++){
        string S;
        cin >> S;
        if ( k < K ) {
            vec[k] = S;
            k += 1;
        }
    }
    sort(vec.begin(),vec.end());
    for(auto itr : vec ) {
        cout << itr << endl;
    }
    return 0;
}