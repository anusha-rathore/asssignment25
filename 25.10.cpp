#include<iostream>
using namespace std;
class Area{
    private :
    float  l,w,side,radius;

    public:
    void setractangle(int x,int y){
        l=x;
        w=y;
    }
    void setradius(int r){
       radius =r;
    }
    void setside(int s){
        side=s;
    }

    float areaofcircle(){
        return 3.14*radius*radius;

    }
    float areaofractangle(){
        return l*w;
    }
    float areaofsquare(){
        return side*side;
    }
    
};
int main(){
    Area a1;
    a1.setside(4);
    a1.setractangle(4,6);
    a1.setradius(5);
    cout<<"area of  square "<< a1.areaofsquare()<<endl;
    cout<<"area of  ractangle "<< a1.areaofractangle()<<endl;
    cout<<"area of  circle "<< a1.areaofcircle();

    }