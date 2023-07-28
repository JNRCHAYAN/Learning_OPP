#include<iostream>

using namespace std;

int main()
{
    int x=10;
    int *p;  // Declaration of a pointer
    p=&x;  // initialization value in pointer


    cout<<x<<endl; // print x value
    cout<<&x<<endl;// print x address
    cout<<p<<endl;   // print x address with store in pointer p
    cout<<&p<<endl; // Print pointer own address
    cout<<*p<<endl; //print x value which is store in pointer p

    // Access Heap Memory

    int a[5] ={1,2,3,4,5};   // Stack memory
    int *h;
    h= new int[10]; // Heap memory (new array using pointer to increase size)

    h[0]=12;
    h[1]=13;
    cout<<h[1]<<endl;

   delete []h; // delete previous memory size and set new size of and array using pointer


    // Pointer arithmetic operations

    int k[5]={2,4,6,7,8};
    int *o=k;
    int *q =&k[3];
    o++;
    cout<<o<<endl;
    o--;
    cout<<o<<endl;
    o=o+2;
    cout<<o<<endl;
    o=o-2;
    cout<<o<<endl;
    int d= q-o;
    cout<<d<<endl;

    cout<<*(p+2)<<endl;







}
