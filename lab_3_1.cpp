#include<iostream>
#include<cmath>

using namespace std;
class Graph{
private:
    int x,y;
public:
    int getX(){return x;}
    int getY(){return y;}
    void setX(int x){this->x = x;}//Basically I could have used  another name for variable and not use "this", but I prefer this way.
    void setY(int y){this->y = y;}//Because I am practicing.

    float Distance(int x, int y){
        float d = sqrt((float)(pow(x,2)+pow(y,2)));
        return d;
    }
    friend void toString(Graph g);
};
void toString(Graph g){
    cout<<"X = "<<g.x<<" and Y = "<<g.y<<endl;
}
int main(){
    Graph g,h ;
    int x,y;
    cout<<"Enter x and y"<<endl;
    cin>>x>>y;
    g.setX(x);
    g.setY(y);
    toString(g);

    cout<<"The Distance is "<<g.Distance(x,y)<<endl;

    return 0;
}










