#include<iostream>
using namespace std;
inline int product(int a, int b)
{
    return a*b;
}
int main(){
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Product of a and b is : "<<product(a,b);
    return 0;
} 