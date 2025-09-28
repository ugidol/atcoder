#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    set<int> st;
    for(int i=0;i<N;i++){
        int a;
        cin >> a;
        st.insert(a);
    }
    cout << st.size() << endl;
    return 0;
}