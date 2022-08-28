#include<iostream>
using namespace std;

// Call by reference using pointer ----->>
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b  = temp;
}

//Call by reference using C++ refrence variable
void swapRefrencevar(int &a, int &b){
    int temp = a;
    a = b;
    b  = temp;
}

int main(){
    int x = 4,y = 5;
    cout<<"The value of x : "<<x<<" The value of y : "<<y<<endl;
    //swap(&x,&y);
    swapRefrencevar(x,y);
    cout<<"The value of x : "<<x<<" The value of y : "<<y<<endl;
    return 0;
}