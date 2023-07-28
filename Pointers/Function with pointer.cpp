#include<iostream>
using namespace std;

int maxx(int x,int y)
{
    return(x>y?x:y);
}

int minn(int x, int y)
{
    return x<y?x:y;
}

int main()
{
    int (*fp)(int, int );
    fp= maxx;
    (*fp)(10,5);

    fp= minn;
    (*fp)(10,5);
}
