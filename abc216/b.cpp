#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n ;
  cin >> n ;
  vector<string> vec(n);
  for(int i=0;i<n;i++){
    string a , b ;
    cin >> a >> b ;
    vec[i] = a + " " + b ;
  }
  string ans = "No";
  for(int i=0;i<n;i++){
    string s1 = vec[i];
    for(int j=i+1;j<n;j++){
      string s2 = vec[j];
      if ( s1 == s2 ) {
        ans = "Yes";
        goto end_loop;
      }
    }
  }
end_loop:
  cout << ans << endl; 
  return 0;
}
