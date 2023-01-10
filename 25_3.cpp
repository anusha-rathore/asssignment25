#include<iostream>
using namespace std;
class fact{
    private :
    int fact;
    int n;
    public:
    void setn(int n0){
        n=n0;
    }
    int getn(){
        return n;
    }
    int getfact(){
         return fact;
    }
    void calculatefact(){
        int f =1;
         for (int i =1; i<=n; i++)
        {
            f=n+i;
        }
        fact=f;
    }
};
int main(){
    fact f1;
    f1.setn(5);
    f1.calculatefact();
    
    cout<<"factorial of "<< f1.getn()<<" is " << f1.getfact();
}