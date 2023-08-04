#include<iostream>
using namespace std;
class  chayan
{
private:
    int x,y;
    double z;
public:
    chayan (int a,int b)
    {
        x=a;
        y=b;
        cout<<"Contructor funtion Run"<<endl;
    }

      chayan (double a,int b)
    {
        z=a;
        y=b;
        cout<<"Contructor funtion Run"<<endl;
    }
    void getvalue()
    {
        cout<<x<<endl<<y<<endl;
    }
    void getvalue2()
    {
        cout<<z<<endl<<y<<endl;
    }
};
int main(int argc, char const *argv[])
{
    chayan obj(10,15),obj2(10.5,5);
    obj.getvalue();
    obj2.getvalue2();
    return 0;
}



