#include <bits/stdc++.h>
using namespace std;



int main(void){
    int n;
    cin >> n ;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec[i] ;
    }
    //
    vector<bool> visited(n);
    for(int i=0;i<n;i++){
        visited[i] = false;
    }
    //
    int idx = 0;
    while(true){
        int value = vec[idx] -1;
        if ( vec[idx] == 2 ) {
            visited[idx] = true;
            cout << count(visited.begin(), visited.end(), true) << endl; 
            break;
        }
        if ( visited[idx] == true ) {
            cout << -1 << endl ;
            break;
        }
        visited[idx] = true;
        idx = value ;
    }
    return 0;
}