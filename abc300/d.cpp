#include<bits/stdc++.h>
using namespace std;
vector<long> primes;
void shieve(long v){
  vector<int> mem(v+1,1);
  for(int i=2;i<=v;i++){
    for(int j=2;j<=v/i;j++){
      mem[i*j] = 0;
    }
  }
  for(int i=2;i<=v;i++){
    if ( mem[i] == 1 ) {
      primes.push_back(i);
    }
  }
}
bool isprime(long v){
  bool ret = binary_search(primes.begin(), primes.end(), v);
  return ret;
}
int main(void){
  long N;
  cin >> N;
#ifdef DEBUG
//  fprintf(stderr,"N=[%ld]\n",N);
#endif
  shieve(288675);
  long ans = 0;
  /*
   * a <= N^(1/5) のループ
   */
  for(long a=2;a*a*a*a*a<=N;a++){
    /*
     * 素数じゃなかったら対象外
     */
    if ( ! isprime(a) ) {
      continue;
    }
    /*
     * b <= N^(1/3) のループ
     */
    for(long b=a+1;b*b*b<=N;b++){
      /*
       * 素数じゃなかったら対象外
       */
      if ( ! isprime(b) ) {
        continue;
      }
      /*
       * a * a * b が N を超えたら、
       * それ以上探さなくていい
       */
      if ( ( a * a * b ) > N ) {
        break;
      }
      auto D = sqrt(N/(a*a*b));
      if ( b > D ) {
        break;
      }
      auto left = lower_bound(primes.begin(), primes.end(), b);
      auto right = prev(upper_bound(primes.begin(), primes.end(),D));
      ans += distance(left,right);
    }
  }
  cout << ans << endl;
  return 0;
}

