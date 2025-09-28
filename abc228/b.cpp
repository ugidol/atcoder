#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n, x;
    cin >> n >> x ;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec[i] ;
    }
    vector<bool> vec2(n);
    for(int i=0;i<n;i++){
        vec2[i] = false;
    }
    //
    int idx = x - 1;
    while(true){
        vec2[idx] = true;
        int value = vec[idx] - 1;
        if ( vec2[value] ) {
            break;
        }
        idx = value;
    }
    cout << count(vec2.begin(), vec2.end(), true) << endl; 
    return 0;
}
