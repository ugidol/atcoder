#include <bits/stdc++.h>
using namespace std;
int main(void){
    float A,B;
    cin >> A >> B;
    float angle = atan2(B,A);
    float x = cos(angle);
    float y = sin(angle);
    cout << fixed << setprecision(10) << x << ' ' << y << endl;
    return 0;
}