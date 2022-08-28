#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b ,int c){
    return a+b+c;
}
int volume(int r, int h){
    return 3.14*r*r*h;
}
int main(){
    int a,b,c;

    cin>>a>>b>>c;
    cout<<"Sum of a and b is :  "<<sum(a,b)<<endl;
    cout<<"Sum of a, b and c is :  "<<sum(a,b,c)<<endl;
    cout<<"Volume is :  "<<volume(a,b);
    return 0;
}