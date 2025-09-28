#include <bits/stdc++.h>
using namespace std;
typedef struct _data {
    int t;
    int x;
    int a;
} DATA ;
int main(void){
    int N;
    cin >> N;
    vector<DATA> vec(N);
    for(int i=0;i<N;i++){
        DATA d;
        cin >> d.t >> d.x >> d.a ;
        vec[i] = d;
    }
    //
    DATA start ;
    stack<DATA> stk;
    stk.push(start);

    while( ! stk.empty() ) {
        stk.pop();
    }
    return 0;
}