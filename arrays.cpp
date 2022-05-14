#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {23, 45, 56, 89};

    cout << "These are marks" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    int mathmarks[4];
    mathmarks[0] = 2247;
    mathmarks[1] = 356;
    mathmarks[2] = 9894;
    mathmarks[3] = 8547;

    cout << "These are mathmarks" << endl;
    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;

    // <----- using for loop ---->
    for (int i = 0; i < 4; i++)
    {
        cout << "The Value Of marks " << i << " is " << marks[i] << endl;
    }

    //  <------using while loop ---->
    // int i=0;
    // while (i<4)
    // {
    //     cout<<"The Value Of marks " <<i<< " is " <<marks[i]<<endl;
    //     i++;
    // }

    // // <------ using do-while loop ------>
    // int i=0;
    // do
    // {
    //     cout<<"The Value Of marks  "<<i<< " is "<<marks[i]<<endl;
    //     i++;
    // } while (i<4);

    // Pointers and Arrays
    int *p = marks;
    cout << "The value of *p is " << *p << endl;
    cout << "The value of *(p+1) is " << (*p + 1) << endl;
    cout << "The value of *(p+2) is " << (*p + 2) << endl;
    cout << "The value of *(p+3) is " << (*p + 3) << endl;

    return 0;
}