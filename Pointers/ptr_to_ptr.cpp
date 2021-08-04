#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;   // address of a is abcd so value of p is abcd  ///address is supposed

    //cout<<p<<endl;  // it print address of a  "p = &a"
    //cout<<&p<<endl;  // it print address of p
    cout<<*p<<endl;   //ptr to ptr  // it print value of a "*p = * &a" "10"

    int **q = &p;  //address of p is asdf let so value of q is asdf
    //int **q;
    //*q = &p;
    cout<<*q<<endl;  //it print address of p i.e.asdf   ///address is supposed
    cout<<**q<<endl;  // ptr to ptr to ptr // **q 1st calls the *q means address of &p then **q means value of a i.e.10

    return 0;
}
