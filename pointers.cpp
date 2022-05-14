#include<iostream>
using namespace std;

int main(){
    // What is Pointer ----> Data type which holds the address of other data types
    int a=3;
    int *b;
    int *b = &a;
    // & ---> (Address of) operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * ---> Deference operator
    cout<<"The Value at address b is "<<*b<<endl;

    return 0;
}