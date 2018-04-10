#include<iostream>
#include<cmath>


using namespace std;

int main(){

    int a,b,c;

    cout<<"Enter the coefficients a,b,c in that order"<< endl;
    cin>>a>>b>>c;

    if(pow(b,2)-(4*a*c)>= 0 ){
        cout<<"Yeah exists"<<endl;
    }
    else{
        cout<<"It's like your girlfriend, imaginary"<< endl;
    }

    return 0;
   
}
