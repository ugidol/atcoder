#include <bits/stdc++.h>
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
bool operator <  (const Point& l, const Point& r){ return ( l.x < r.x ) && ( l.y < r.y ) ; } ;
bool operator >  (const Point& l, const Point& r){ return ( l.x > r.x ) && ( l.y > r.y ) ; } ;
bool operator <= (const Point& l, const Point& r){ return ( l.x <= r.x ) && ( l.y <= r.y ) ; } ;
bool operator >= (const Point& l, const Point& r){ return ( l.x >= r.x ) && ( l.y >= r.y ) ; } ;
bool operator == (const Point& l, const Point& r){ return ( l.x == r.x && l.y == r.y ) ; }
bool operator != (const Point& l, const Point& r){ return ( ! ( l == r ) ) ; }
Point operator+(const Point& l, const Point& r) { 
  Point ret(l);
  ret += r;
  return ret;
};

