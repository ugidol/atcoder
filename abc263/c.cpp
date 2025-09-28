#include <bits/stdc++.h>
using namespace std;
int N,M;
void dump(deque<int> &stk){
    for(auto it : stk ) {
        cout << it << ' ';
    }
    cout << endl;
    return ;
}
void func(deque<int> &stk, int v){
    if ( stk.size() == (unsigned long)N ) {
        dump(stk);
        return ;
    }
    //
    for(int i=v+1;i<=M;i++){
        stk.push_back(i);
        func(stk, i);
        stk.pop_back();
    }
    return ;
}
int main(void){
    cin >> N >> M;
    //
    deque<int> stk;
    func(stk,0);
    return 0;
}