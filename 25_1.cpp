// 1. Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex
// number
#include<iostream>
using namespace std;
class Complex {
    private :
    int real;
    int img;
    public:
    void setdata(int r,int i)
    {
        real=r;
        img=i;

    }
    void printdata(){
        cout<<"complex number is " <<real<<"+"<<img<<"i"; 
    }
};
int main(){
    Complex c1;
    int r=3;
   int i=4;
   c1.setdata(r,i);
    c1.printdata();
}
