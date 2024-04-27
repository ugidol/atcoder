#include <bits/stdc++.h>
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
