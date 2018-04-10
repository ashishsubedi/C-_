#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;
 void calculate(int&a,int&b,int&c,int&d,int&m,int&n,float&x,float&y);
 int main(){
 	string e1,e2;
 	int a,b,c,d,m,n;
	float x=0,y=0;
 	vector<string> nums;
	cout<<"Enter equation"<<endl; 	
	getline(cin,e1);
	cout<<"Enter equation"<<endl;
	getline(cin,e2);
	
	stringstream s1(e1);
	string temp;
	char cx= 'x', cy = 'y', ce = '=',cn = '\0';
	while(getline(s1,temp,cx)){
		nums.push_back(temp);
		cout<<temp<<endl;
		break;
	}
	while(getline(s1,temp,cy)){
		nums.push_back(temp);
		cout<<temp<<endl;
		break;
	}
	while(getline(s1,temp,ce)){
		break;
	}
	while(getline(s1,temp,cn)){
		nums.push_back(temp);
		cout<<temp<<endl;
		break;
	}
	stringstream s2(e2);
	
	
	while(getline(s2,temp,cx)){
		nums.push_back(temp);
		cout<<temp<<endl;
		break;
	}
	while(getline(s2,temp,cy)){
		nums.push_back(temp);
		cout<<temp<<endl;
		break;
	}
	while(getline(s2,temp,ce)){
		break;
	}
	while(getline(s2,temp,cn)){
		nums.push_back(temp);
		cout<<temp<<endl;
		break;
	}
	
	a = stoi(nums[0]);
	b = stoi(nums[1]);
	m = stoi(nums[2]);
	c = stoi(nums[3]);
	d = stoi(nums[4]);
	n = stoi(nums[5]);
	
	calculate(a,b,c,d,m,n,x,y);
	cout<<"X = "<<x<<" and Y= "<< y<<endl;
 	return 0;
 }
 
 void calculate(int&a,int&b,int&c,int&d,int&m,int&n,float&x,float&y){
 	x = (float)(m*d-b*n)/(a*d-c*b);
 	y = (float)(n*a-m*c)/(a*d-c*b);
 }
