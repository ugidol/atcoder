#include <bits/stdc++.h>
using namespace std;
int main(void){
  long n ;
  cin >> n ;
  set<vector<int>> st;
  for(int i=0;i<n;i++){
    int l ;
    cin >> l ;
    vector<int> vec(l);
    for(int j=0;j<l;j++){
      cin >> vec[j];
    }
    st.insert(vec);
  }
  cout << st.size() << endl;
  return 0;
}
