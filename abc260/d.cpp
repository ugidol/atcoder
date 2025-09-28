#include <bits/stdc++.h>
using namespace std;
int main(void){
    unsigned long N,K;
    cin >> N >> K;
    vector<int> ans(N+1,-1);
    vector<list<int>> vec(0,list<int>(0));
    for(unsigned long i=0;i<N;i++){
        int p;
        cin >> p ;
        list<int> v;
        v.push_front(p);
        auto it = lower_bound(vec.begin(), vec.end(),v,[](const list<int> &a, const list<int> &b){
            int left = *a.begin();
            int right = *b.begin();
            return left < right ;
        });
        list<int> &ptr = *it;
        // みつかったら
        if ( it != vec.end() ) {
            ptr.push_front(p);
            if ( ptr.size() == K ) {
                for(auto it : ptr ) {
                    ans[it] = i+1;
                }
                vec.erase(it);
            }
        }
        // みつからなかったら
        else {
            if ( v.size() != K ) {
                vec.push_back(v);
            }
            else {
                ans[p] = i+1;
            }
        }
        //
    }
    //
    for(unsigned long i=1;i<=N;i++){
        cout << ans[i] << endl;
    }
    return 0;
}