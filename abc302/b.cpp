#include <bits/stdc++.h>
using namespace std;

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
bool operator == (const Point &l, const Point& r){ return ( l.x == r.x && l.y == r.y ) ; }
bool operator != (const Point &l, const Point& r){ return ( ! ( l == r ) ) ; }
Point operator+(const Point& l, const Point& r) { 
  Point ret(l);
  ret += r;
  return ret;
};

int main(void){
	int H,W;
	cin >> H >> W;
	vector<vector<char>> S(H,vector<char>(W));
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cin >> S[i][j];
		}
	}

	vector<Point> dir = {
		{-1,-1},
		{-1, 0},
		{-1, 1},
		{ 0,-1},
		{ 0, 1},
		{ 1,-1},
		{ 1, 0},
		{ 1, 1},
	};

	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			for(Point d:dir){
				string s(5,' ');
				bool b = true;
				Point p = {i,j};
				for(int k=0;k<5;k++,p += d){
					if ( ! ( p >= Point(0,0) && p < Point(H,W) ) ) {
						b = false;
						break;
					}
					s[k] = S[p.x][p.y];
				}
				if ( b && s == "snuke" ) {
					p = {i,j};
					for(int k=0;k<5;k++,p+=d){
						cout << p.x + 1 << ' ' << p.y + 1 << endl;
					}
					goto EOL;
				}
			}
		}
	}
EOL:
  return 0;
}
