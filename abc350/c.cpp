#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> idx(N); // 値(N)が何番目にいるか？を示す配列.
  for(int i=0;i<N;i++){
    int a;
    cin >> a;
    a -= 1;
    A[i] = a;
    idx[a] = i;
  }
  vector<array<int,2>> ans;
  for(int i=0;i<N;i++){
    // ソート済みなら処理しなくていい
    if ( A[i] == i ) {
      continue;
    }
    // ここにいるべき値はどこにいるのか？
    int j = idx[i];
    ans.push_back({i,j});
    swap(A[i],A[j]);
    // idxを更新
    idx[A[i]] = i;
    idx[A[j]] = j;
  }
  cout << ans.size() << endl;
  for(auto itr:ans){
    cout << itr[0] + 1 << ' ' << itr[1] + 1 << endl;
  }
  return 0;
}
