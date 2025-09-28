#include <bits/stdc++.h>
using namespace std;

int main(){
  string  a, b, c;
  set<string> values ;
  values.insert("ABC");
  values.insert("ARC");
  values.insert("AGC");
  values.insert("AHC");

  cin >> a >> b >> c ;
  values.erase(a);
  values.erase(b);
  values.erase(c);

  for(auto it : values){
    cout << it << endl;
  }

  return 0 ;
}
