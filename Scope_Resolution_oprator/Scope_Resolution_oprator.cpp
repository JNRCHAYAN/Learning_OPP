#include<iostream>
using namespace std;

class car
{
    int price, quantity;
    public:
    void setdata(int a, int b);
    void showdata();
};

void car::setdata(int a,int b)
{
    price = a;
    quantity= b;
}
void car::showdata()
{
    int total;
    total= price * quantity;
    cout<<total<<endl;
}
int main()
{
    int x,y;
    car objl;
    cin>>x>>y;
    objl.setdata(x,y);
    objl.showdata();
}

