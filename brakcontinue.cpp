#include<iostream>
using namespace std;

int main(){
//     for (int i=0; i<10; i++)
//     {
//        cout<<i<<endl;
//        if(i==8){
//            break;
// // <------ In break the the condition is end ------->
//        }
//     }
    
//     return 0;
// }  
  for (int i=0; i<10; i++)
    {
       if(i==8){
           continue;
       }
        cout<<i<<endl;
// <------- In continue the number we have send this number is remove and continue ----->
    }
    
    return 0;
}   