#inlude<iostream>
using namespace std;
class largestnumber{
     private :
     int a,b,c,l;

     public:
     void setvalue(int x,int y,int z){
           a=x;
           b=y;
           c=z;

     }
    void largestnumber()
       {
        if(a>b && c>b)
       {
        if (a>c)
           l=a;
        else 
           l=c;
         }
         else 
         l=b;
       }
    int getnumber(){
        return l;
    } 

};
int main(){
    largestnumber l1;
    l1.setvalue(2,6,4);
    l1.largestnumber();
    cout<< "largest number is "<<l1,getdata();
}