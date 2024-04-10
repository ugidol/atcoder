#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N,K,X;
    cin >> N >> K >> X ;
    vector<int> vec(N);
    for(int i=0;i<N;i++){
        int v ;
        cin >> v;
        vec[i] = v;
    }
    /*
    for(int i=0;i<K;i++){
        auto itr = st.end();
        itr--;
        st.erase(itr);
        int val = *itr - X ;
        if ( val < 0 ) {
            val = 0;
        }
        itr = st.upper_bound(val);
        st.insert(itr,val);
    }
    */
   for(int i=0;i<N;i++){
       int v = vec[i];
       while ( v > X && K > 0 ) {
           v -= X ;
           K -= 1 ;
       }
       vec[i] = v;
   }
   sort(vec.begin(),vec.end(),[](int a, int b){return a>b;});
   //
   for(int i=0;i<N&&K>0;i++){
       int v = vec[i];
       v -= X ;
       if ( v < 0 ) {
           v = 0;
       }
       vec[i] = v;
       K -= 1;
    }
    long ans = 0;
    for(auto it : vec ) {
        ans += it;
    }
    cout << ans << endl;
    return 0;
}