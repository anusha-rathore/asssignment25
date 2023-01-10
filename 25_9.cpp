#include<iostream>
using namespace std;
class Circle{
    private :
    int radius;
    float area;
    public:
    void setvalue(int r){
       radius =r;
    }
    int getr(){
        return radius;

    }
    
    void calculatearea(){
        area=3.14*radius*radius;

    }
    float getarea(){
        return area;
    }

};
int main(){
    Circle c1;
    c1.setvalue(4);
    c1.calculatearea();

    cout<<"Circle length is "<< c1.getr() << " and area is "<<   c1.getarea();
}