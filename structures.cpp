#include<iostream>
using namespace std;

// <------- Structures ------->
struct employee
{
    int eId;
    char favChar;
    float salary;
};

// <-------- Unioun ------->
union money
{
    int rice;
    char car;
    float pounds;
};

// <-------- Enums ------->
enum Meal {breakfast, lunch, dinner};

int main(){
    
    Meal m1 = breakfast; /*<---Enum--->*/
    cout<<m1;

    // union money m1;   /*<---Union--->*/
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.rice;

    // struct employee vishnu;   /*<---Struture--->*/
    // vishnu.eId = 1;
    // vishnu.favChar = 'c';
    // vishnu.salary = 1000000; 
    // cout<<"The Id Of Employee "<<vishnu.eId<<endl;
    // cout<<"The Char Of Employee "<<vishnu.favChar<<endl;
    // cout<<"The Salary Of Employee "<<vishnu.salary<<endl;

    return 0;
}    



