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


int main(void){
	int H,W;
	cin >> H >> W;
	vector<vector<char>> S(H,vector<char>(W,' '));
	Point pMin(1000,1000);
	Point pMax(-1,-1);
	vector<Point> vec;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cin >> S[i][j];
			if ( S[i][j] == '#' ) {
				pMin.x = std::min(pMin.x,i);
				pMin.y = std::min(pMin.y,j);
				pMax.x = std::max(pMax.x,i);
				pMax.y = std::max(pMax.y,j);
			}
			else if ( S[i][j] == '.' ) {
				Point p(i,j);
				vec.push_back(p);
			}
		}
	}
#ifdef DEBUG
	cerr << pMin << endl;
	cerr << pMax << endl;
#endif
	Rectangle rec;
	rec.p = pMin;
	rec.x = ( pMax.x - pMin.x) + 1;
	rec.y = ( pMax.y - pMin.y) + 1;
	string ans = "Yes";
	for(Point &p:vec){
		if ( rec.contains(p) ) {
			ans = "No";
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
