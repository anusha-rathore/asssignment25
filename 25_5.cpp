#include<iostream>
using namespace std;
class Reverse{
   private :
   int number ,r;
   public :
   void setnumber(int n){
    number=n;
   }
   int getn(){
    return number;

   }
  int  getnumber(){
    
    int num=number;
    int r=0;
    while(num)
    {
        int rem=num%10;
        r= r*10+rem;
        num=num/10;
    }
    return r;
   }
    

    
   
};
int main()
{
    Reverse r1;
    r1.setnumber(123);
   
    cout<<"number is "<<r1.getn()<<"after revser number is "<<r1.getnumber();
}