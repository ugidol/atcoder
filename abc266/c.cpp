#include <bits/stdc++.h>
using namespace std;
double func(pair<int,int> &a, pair<int,int> &b){
    double radian = atan2( b.second - a.second, b.first - a.first);
    double ret = radian * 180 / M_PI;
    if ( ret < 0 ) {
        ret += 360 ;
    }
#ifdef DEBUG
    fprintf(stderr,"%lf\n",ret);
#endif
    return ret;
}
double func2(double a, double b){
    double ret = a - b ;
    if ( ret < 0 ) {
        ret += 360;
    }
    return ret;
}
int main(void){
    pair<int,int> A,B,C,D;
    cin >> A.first >> A.second ;
    cin >> B.first >> B.second ;
    cin >> C.first >> C.second ;
    cin >> D.first >> D.second ;
    //
    double ab = func(A,B);
    double ad = func(A,D);
    double a = func2(ad,ab) ;
    //
    double ba = func(B,A);
    double bc = func(B,C);
    double b = func2(ba,bc) ;
    //
    double cb = func(C,B);
    double cd = func(C,D);
    double c = func2(cb,cd) ;
    //
    double dc = func(D,C);
    double da = func(D,A);
    double d = func2(dc,da) ;
    #ifdef DEBUG
    fprintf(stderr,"%f,%f,%f,%f\n",a,b,c,d);
    #endif
    string ans = "No";
    if ( a < 180 && b < 180 && c < 180 && d < 180 ) {
        ans = "Yes";
    }
    cout << ans << endl ;
    return 0;
}