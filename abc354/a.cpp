#include <bits/stdc++.h>
using namespace std;
long powl(long a, long b){
	long v = 1;
	for(int i=0;i<b;i++){
		v *= a;
	}
	return v;
}
int main(void){
	long H;
	cin >> H;
	long len = 0;
	long ans = 0;
	long i=0;
	while(len<=H){
		len += powl(2,i++);
		ans += 1;
	}
	cout << ans << endl;
  return 0;
}
