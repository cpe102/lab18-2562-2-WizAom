#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect p1,Rect p2){
	double x1=max(p1.x,p2.x);
	double y1=min(p1.y,p2.y);
	double x2=min((p1.x+p1.w),(p2.x+p2.w));
	double y2=max((p1.y-p1.h),(p2.y-p2.h));
	double a=(x2-x1)*(y1-y2);
	if(a>0) return a;
	else return 0;
}

int main(){
	double x,y,w,h;
	cout << "Please input Rect 1 (x y w h): ";
	Rect p1,p2;
	cin >> p1.x >> p1.y >> p1.w >> p1.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin >> p2.x >> p2.y >> p2.w >> p2.h;
	cout << "Overlap area = " << overlap(p1,p2);	
	return 0;
}
