#include <iostream>

using namespace std;

class student
{

int x,y;
public:
int setvaluer(int a,int b)
{
    if(x<=0 && y<=0)
    {
        x=a;
        y=b;
    }
    else
    {
        x=0;
        y=0;
    }
}
int getvalue()
{
    
cout<<x<<endl<<y;
}

};

int main()
{
    student obj;
    obj.setvaluer(10,5);
    obj.getvalue();
   
}