#include<iostream>
using namespace std;
/*
int factorial(int n)
{
    if (n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Factorial of n is : "<<factorial(n);
    return 0;
} */

int fib(int n)
{
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<"Lelo yrr : "<<fib(n);
    return 0;
}