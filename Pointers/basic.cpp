#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *aptr = &a;

    //aptr = &a;
    //cout<<&a<<endl;  //2000
    //cout<<aptr<<endl; //2000
    cout<<*aptr<<endl;  //10
    *aptr = 20;
    cout<<a<<endl;

    return 0;
}
