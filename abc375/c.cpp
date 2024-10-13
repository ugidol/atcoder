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
	int N;
	cin >> N;
	vector<vector<char>> A(N,vector<char>(N));
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cin >> A[i][j];
		}
	}
	//
	function<Point(int,int)> f = [&](int x, int y){
		Point p(x,y);
		if ( x < (N/2) && y < (N/2) ) {
			return p;
		}
		if ( p.x >= (N/2) ) {
			p.x = (N-1-x);
		}
		if ( p.y >= (N/2) ) {
			p.y = (N-1-y);
		}
		return p;
	};
	//
	function<int(Point&)> g = [&](Point& p){
		int v = std::min(p.x,p.y);
		return v%4;
	};
	//
	vector<vector<char>> B(N,vector<char>(N,' '));
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			Point p = f(i,j);
			int v = g(p);
			// 90
			if ( v == 0 ) {
				B[j][N-1-i] = A[i][j];
			}
			// 180
			else if ( v == 1 ) {
				B[N-1-i][N-1-j] = A[i][j];
			}
			// 270
			else if ( v == 2 ) {
				B[N-1-j][i] = A[i][j];
			}
			else {
				B[i][j] = A[i][j];
			}
		}
	}
	//
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout << B[i][j] ;
		}
		cout << endl;
	}
	//
	return 0;
}
