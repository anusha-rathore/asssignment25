#include<iostream>
using namespace std;
class Time{
  private:
  int hour;
  int minute;
  int second;
  public:
  void setdata(int h,int m, int s){
    hour=h;
    second=s;
    minute=m;
    
  }
  void printdata(){
    cout<<hour <<" hr " <<minute <<" min "<<second <<"sec .";
  }
};
int main(){
    Time t1;
    t1.setdata(1,40,60);
    t1.printdata();
}