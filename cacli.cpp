#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"First integer : ";
    cin>>a;
    int b;
    cout<<"Second integer : ";
    cin>>b;
    int c;
    string d;
    cout<<"Select the Operator : ";
    cin>>d;
    if(d=="+"){
        c = a+b;
        cout<<"Answer : "<<c;
    }
    if(d=="-"){
        c = a-b;
        cout<<"Answer : "<<c;
    }
    if(d=="*"){
        c = a*b;
        cout<<"Answer : "<<c;
    }
    if(d=="%"){
        c = a%b;
        cout<<"Answer : "<<c;
    }
    if(d=="/"){
        c = a/b;
        cout<<"Answer : "<<c;
    }
   
    return 0;
}