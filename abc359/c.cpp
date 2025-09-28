#include <bits/stdc++.h>
using namespace std;

// 自分用Point
struct Point {
  long x,y;
  Point():x(0),y(0){};
  Point(long a, long b){
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
// 自分用Rectangle
struct Rectangle {
	Point p;
	int x,y;
	Rectangle():p(0,0),x(0),y(0){};
	Rectangle(int a, int b){
		x = a;
		y = b;
	}
	bool contains(const Point &arg){
		if ( arg.x >= p.x && arg.y >= p.y && arg.x < ( p.x + x ) && arg.y < ( p.y + y ) ) {
			return true;
		}
		return false;
	}
};
long f(Point &p){
	if ( p.y % 2 == 0 ) {
		return p.x / 2 * 2 - 1;
	}
	else {
		return (p.x+1) / 2 * 2;
	}
}
int main(void){
	Point S,T;
	cin >> S.x >> S.y >> T.x >> T.y ;
	long ans = 0;
	if ( f(S) > f(T) ) {
		swap(S,T);
	}
	ans += abs(S.y - T.y);
	long d = abs(f(S) - f(T));
	if ( S.y % 2 == T.y % 2 ) {
		if ( d > abs(S.y-T.y) * 2 ) {
			ans += ( d - ( abs(S.y-T.y) * 2 ) ) / 2 ;
		}
	}
	else {
	}
	cout << ans << endl;
  return 0;
}
