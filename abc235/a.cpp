#include <bits/stdc++.h>
using namespace std;
int main(void){
  string str;
  cin >> str;
  char a = str[0];
  char b = str[1];
  char c = str[2];
  int abc = (a-'0')*100 + (b-'0')*10 + (c-'0');
  int bca = (b-'0')*100 + (c-'0')*10 + (a-'0');
  int cab = (c-'0')*100 + (a-'0')*10 + (b-'0');
  int ans = abc + bca + cab ;
  cout << ans << endl;
  return 0;
}
