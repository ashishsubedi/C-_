#include<iostream>
#include<string>

using namespace std;
class Vehicle{

private:
    int noOfWheels;
    int height;
    string color;
    string name;

    static int noOfVehicles;

public:
    int a;
    int getNoOfWheels(){ return noOfWheels;}
    int getHeight(){ return height;}
    string getColor(){  return color;}
    string getName(){   return name;}

    void setNoOfWheels(int num){ noOfWheels = num;}
    void setHeight(int h){  height = h;  }
    void setColor(string c){ color = c;}
    void setName(string n ){ name = n;}


    Vehicle(int noOfWheels,int height, string color, string name){ // Constructor no 1
        this -> noOfWheels = noOfWheels;
        this -> height = height;
        this -> color = color;
        this -> name = name;
        noOfVehicles++;
    }
    Vehicle(){
        noOfVehicles++;
    }//Constructor no 2
    ~Vehicle(); // Destructor of object, just prototype, definition is outside of class
    void toString(){
        cout<<name<<endl;
    }
    static int getNoOfVehicles(){ return noOfVehicles; }



};
int Vehicle::noOfVehicles = 0;
//Defining it outside of any class
Vehicle::~Vehicle(){
    cout<<name<<" is destroyed"<< endl;
        noOfVehicles--;
}

class FlyingVehicle : public Vehicle{
private:
    int flyingHeight;
public:
    int getFlyingHeight(){ return flyingHeight;}
    void setFlyingHeight(int h){ flyingHeight = h;}

    FlyingVehicle(int noOfWheels,int height, string color, string name, int flyingHeight):Vehicle( noOfWheels, height,  color,  name){
        this->flyingHeight = flyingHeight;
    }
    FlyingVehicle():Vehicle(){}

};
int main(){
    Vehicle v(3,2,"RED","BLAK");
    FlyingVehicle fv(5,25,"BLACK","LUFTANSA",2500);

     fv.toString();

    return 0;
}
