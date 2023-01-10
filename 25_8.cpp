#include<iostream>
using namespace std;
class Rectangle{
    private :
    int l,w,area;
    public:
    void setvalue(int x,int y){
        l=x;
        w=y;
    }
    int getl(){
        return l;

    }
    int getw(){
        return w;
    }
    void calculatearea(){
        area=l*w;

    }
    int getarea(){
        return area;
    }

};
int main(){
    Rectangle r1;
    r1.setvalue(4,6);
    r1.calculatearea();

    cout<<"Rectangle length is "<<r1.getl()<< " and width is "<< r1.getw() << " and area is "<<   r1.getarea();
}