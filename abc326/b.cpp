#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	int ans = 0;
	for(int i=N;i<1000;i++){
		int a = i / 100 % 10;
		int b = i / 10 % 10;
		int c = i % 10 ;
		if ( a * b == c ) {
			ans = i;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
