#include<iostream>
#include<cmath>

using namespace std;
class Point{
public:
	double x;
	double y;	
	
	double DistanceFromOrigin(){
		return sqrt(pow(x,2)+pow(y,2));
	}
	double DistanceFrom(Point p){
		int x2 = p.x,y2=p.y;
		return sqrt(pow((x2-x),2)+pow((y2-y),2));
	}
};

class Vector{
public:
	Point start;
	Point end;

	double Magnitude(){
		return start.DistanceFrom(end);
	}
	double Direction(){
		Point p;
		p.x = start.x - end.x;
		p.y = start.y - end.y;
		
		return std::atan(p.y/p.x);
	}

//Constructors overloaded
	Vector(){}
	Vector(Point _start, Point _end){
		start = _start;
		end = _end;
	}
	~Vector(){
		cout<<"FUCK YOU. Why you killing me bro??"<<endl;
	}

};

int main(){
	Point a,b;
	a.x = 3;a.y = 4;
	b.x = 3;b.y = 6;
	Vector *p =  (new Vector(a,b));
	
	//cout<<a.DistanceFromOrigin()<<endl;
	//cout<<a.DistanceFrom(b)<<endl;
	cout<<(*p).Magnitude()<< endl;
	cout<<(*p).Direction()<<" radian"<< endl;
	delete(p);
	
	return 0;
}


