#include<iostream>
#include<string>
#include<sstream>

using namespace std;

void calculate(int&a1,int&a2,int&b1,int&b2,int&m1,int&m2,float&x,float&y);
int main(){
    int a,b,m;
    int c,d,n;
    float x=0,y=0;
 
  
     //This is as lab report asked
    cout<< "Enter a,b and m of eqn 1"<<endl;
    cin>>a>>b>>m;
    cout<< "Enter a,b and m of eqn 2"<<endl;
    cin>>c>>d>>n;
  


    return 0;
}

void calculate(int&a,int&c,int&b,int&d,int&m,int&n,float&x,float&y){

    x = (float)(m*d - b*n)/(a*d - c*b);
    y = (float)(n*a - m*c)/(a*d - c*b);
}
