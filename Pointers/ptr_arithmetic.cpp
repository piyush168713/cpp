#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *aptr = &a;
    cout<<aptr<<endl; //it will print address of a  "2000"

    aptr++;  //increament
    cout<<aptr<<endl;  //the value will increases by 4 bytes because int takes 4 bytes "2004"

    return 0;
}

// if in char will exist in place of int then address will increases by 1 bytes because char takes 1 bytes