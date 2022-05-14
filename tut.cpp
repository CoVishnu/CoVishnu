#include<iostream>
using namespace std;

int main (){
    string name1, name2, name3;
    cout<<"Enter Your First Name \n";
    cin>>name1;

    cout<<"Enter Your Middle Name \n";
    cin>>name2;

    cout<<"Enter Your Last Name \n";
    cin>>name3;

    cout<<"Your Full Name Is " << name1 + name2 + name3;  

    return 0;
}