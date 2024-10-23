#include <bits/stdc++.h>
using namespace std;

// 自分用Point
struct Point {
  int x,y;
  Point():x(0),y(0){};
  Point(int a, int b){
    x = a;
    y = b;
  }
  Point(const Point& p){
    x = p.x;
    y = p.y;
  }
  Point& operator=(const Point& r){
    x = r.x;
    y = r.y;
    return *this;
  };
  Point& operator+=(const Point& r){
    x += r.x;
    y += r.y;
    return *this;
  };
};

std::ostream& operator<<(std::ostream& os, const Point& p){
  os << '{' << p.x << ',' << p.y << '}' ;
  return os;
}
bool operator <  (const Point& l, const Point& r){ 
	if ( l.x == r.x ) {
		return ( l.y < r.y ) ;
	}
	else {
		return ( l.x < r.x ) ;
	}
};
bool operator >  (const Point& l, const Point& r){ 
	if ( l.x == r.x ) {
		return ( l.y > r.y ) ;
	}
	else {
		return ( l.x > r.x ) ;
	}
} ;
bool operator <= (const Point& l, const Point& r){ 
	if ( l.x == r.x ) {
		return ( l.y <= r.y ) ;
	}
	else {
		return ( l.x <= r.x ) ;
	}
} ;
bool operator >= (const Point& l, const Point& r){ 
	if ( l.x == r.x ) {
		return ( l.y >= r.y );
	}
	else {
		return ( l.x >= l.y );
	}
} ;
bool operator == (const Point& l, const Point& r){ return ( l.x == r.x && l.y == r.y ) ; }
bool operator != (const Point& l, const Point& r){ return ( ! ( l == r ) ) ; }
Point operator+(const Point& l, const Point& r) { 
  Point ret(l);
  ret += r;
  return ret;
};
int main(void){
	Point A,B,C;
	cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y ;
	vector<double> vec(3);
	double ab = std::pow(std::abs(A.x-B.x),2)+std::pow(std::abs(A.y-B.y),2);
	double bc = std::pow(std::abs(B.x-C.x),2)+std::pow(std::abs(B.y-C.y),2);
	double ac = std::pow(std::abs(A.x-C.x),2)+std::pow(std::abs(A.y-C.y),2);
	vec[0] = ab;
	vec[1] = bc;
	vec[2] = ac;
	std::sort(vec.begin(), vec.end(), std::greater<double>());
	string ans = "No";
	if ( vec[0] == ( vec[1] + vec[2] ) ) {
		ans = "Yes";
	}
	cout << ans << endl;
	return 0;
}
