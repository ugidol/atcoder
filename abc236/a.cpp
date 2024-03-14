#include <bits/stdc++.h>
using namespace std;
int main(void){
  string s;
  cin >> s;
  int a,b;
  cin >> a >> b;
  char c = s[a-1];
  s[a-1] = s[b-1];
  s[b-1] = c; 
  cout << s << endl;
  return 0;
}
