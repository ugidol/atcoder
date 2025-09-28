#include <bits/stdc++.h>
using namespace std;
int main(void){
  long double H;
  cin >> H ;
  long double ans = sqrt(H/100000 * (128 + H/100000) ) * 100000;
  fprintf(stdout,"%Lf\n",ans);
  return 0;
}
