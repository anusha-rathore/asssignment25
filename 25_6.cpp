#include<iostream>
using namespace std;
class Square {
    private:
    int number;
    int Square;
    static int count;
    public:
    void setdata(int num){
        number=num;
    }
    int getnumber(){
        return number;

    }
    void calculateSquare(){
       Square= number*number;
       count++;
    } 
    int getSquare(){
        return Square;
    }
     int getcount()
    {
        return count;
    }
};
int Square::count =0;

int main(){
    Square s1;
    s1.setdata(4);
    s1.calculateSquare();
    s1.calculateSquare();
    s1.calculateSquare();
    cout<<"number is"<<s1.getnumber()<<"  Square is "<<s1.getSquare()<<endl;
    // s1.calculateSquare();
    
    cout<<"number of times a function is called."<<s1.getcount();

    }