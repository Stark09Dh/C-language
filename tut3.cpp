# include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"What is your age : ";
    cin>>age;
    if(age<18 & age>0){
        cout<<"You cannot come to my party"<<endl;
    }
    else if(age==18){
        cout<<"You are a kid and you need a kid pass of the party"<<endl;
    }
    else if(age<0){
        cout<<"Paida to hoja bsdk";
    }
    else{
        cout<<"You can come to the party"<<endl;
    }
    return 0;

}
