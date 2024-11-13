#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	int a,b,c;
	a = ( N / 100 ) % 10 ;
	b = ( N / 10 ) % 10;
	c = ( N % 10 ) ;
	cout << b * 100 + c * 10 + a << ' ' << c * 100 + a * 10 + b << endl;
	return 0;
}
