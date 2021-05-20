#include<iostream>
using namespace std;

int main(){
    int arr[] = {20,10,30};  //array will print zeroeth element of the set i.e. 20
    cout<<*arr<<endl;

    int *ptr = arr;  // we will print the full array with the help of pointer
    for(int i = 0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
    }

    return 0;
}