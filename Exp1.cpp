/*
 * This Example about Variable and Pointers
 * Pass by Value and Pass by Reference Example
 */

#include <iostream>
#include <climits>
using namespace std;

// Function Prototype

void PassByValue(int);
void PassByReference(int &a);

int main(){
    // int a {22};

    // cout << "a" <<  " " << a << endl;
    // cout << "&a" << " " << &a << endl;

    // PassByValue(a);
    // cout << "a" << " " << a << endl;

    // PassByReference(a);
    // cout << "a" << " " << a << endl;
    // cout << "---------- " << endl;


    int *p {nullptr};
    p =  new int;
    *p = 99;

    cout << "*p" << " "<< *p << endl;
    cout << "p" << " "<< p << endl;
    // PassByValue(*p);
    PassByReference(*p);
    cout << "After Function Execution " << "*p" << " " << *p << endl;
    //delete p;


    return 0;

}

void PassByValue(int a){
    cout << "Inside Function PassByValue " << endl;
    cout << "a" << " " << a << endl;
    cout << "a" << " " << &a << endl;


}

void PassByReference(int &a){
    cout << "Inside Function Pa&assByReference " << endl;
    cout << "a" << " " << a << endl;
    cout << "a" << " " << &a << endl;

}
