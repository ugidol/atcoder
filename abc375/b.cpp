#include <bits/stdc++.h>
using namespace std;
double f(double a, double b, double c, double d){
	double ret = 0;
	ret = ( a - c ) * ( a - c ) + ( b - d ) * ( b - d ) ;
	ret = std::sqrt(ret);
	return ret;
}
int main(void){
	int N;
	cin >> N;
	double x1,y1;
	x1=0,y1=0;
	double ans = 0;
	for(int i=0;i<N;i++){
		double x2,y2;
		cin >> x2 >> y2;
		double v = f(x1,y1,x2,y2);
#ifdef DEBUG
		cerr << v << endl ;
#endif
		ans += v;
		x1 = x2;
		y1 = y2;
	}
	ans += f(x1,y1,0,0);
	cout << fixed << setprecision(10) << ans << endl;
	return 0;
}
