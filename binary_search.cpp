#include <bits/stdc++.h>
int main(void){
	{
//------------------------------------------------------------------------------
  /*
   * 二分探索
   * 条件を満たす最小の値を求める
   */
	std::function<bool(long)> f = [&](long v){
    return true;
  };
  long left  = -1;
  long right = LONG_MAX;
  while(std::abs(right-left)>1){
    long mid = ( left + right ) / 2;
    if ( f(mid) ) {
      right = mid;
    }
    else {
      left = mid;
    }
  }
	long ans = right;
//------------------------------------------------------------------------------
	}

	{
//------------------------------------------------------------------------------
  /*
   * 二分探索
   * 条件を満たす最大の値を求める
   */
	std::function<bool(long)> f = [&](long v){
    return true;
  };
  long left  = 0; // 条件を満たす
  long right = LONG_MAX; // 条件を満たさない
  while(std::abs(right-left)>1){
    long mid = ( left + right ) / 2;
    if ( f(mid) ) {
      left = mid;
    }
    else {
      right = mid;
    }
  }
	long ans = left;
//------------------------------------------------------------------------------
	}
}
