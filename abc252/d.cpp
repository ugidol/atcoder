#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin >> A[i];
  }

  // 1から2*10^5までの数の個数を累積和で管理
  vector<long> cnt(2*1e5+1);
  for(int i=0;i<N;i++){
    cnt[ A[i] ] += 1;
  }
  for(int i=0;i<(int)cnt.size()-1;i++){
    cnt[i+1] += cnt[i];
  }

  // x < y < z で考えると、
  // xの取り得る値はA[j]より小さい数の個数
  // zの取り得る値はA[j]より大きい数の個数
  long ans = 0;
  for(int j=0;j<N;j++){
    long x = cnt[ A[j] - 1 ];
    long z = N - cnt[ A[j] ];
    long a = x * z ;
    ans += a;
  }
  cout << ans << endl;
  return 0;
}
