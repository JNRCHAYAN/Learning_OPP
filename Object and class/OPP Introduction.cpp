#include<iostream>
using namespace std;

class Rect
{
   public:
    int le;
    int br;

    int area()
    {
        return le*br;

    }
    int per()
    {
        return 2*(le+br);
    }
};
int main()
{
    Rect r1,r2;
    r1.le=10;
    r1.br =17;



    cout<<"perimeter is "<<r1.per()<<endl;
    cout<<"Area of "<<r1.area()<<endl;

}
