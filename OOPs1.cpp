#include<iostream>
using namespace std;

class Cars
{

    private:
    int durability;
    public:
    string name;
    string model;
    string engine_type;
    int getdurability(){
        return durability;
    }
    void setdurability(int Dura){
        durability = Dura;
    }
    string getname(){
        return name;
    }
    void setname(string nam){
        name = nam;
    }

};


int main(){
    Cars ford;
    ford.name="Mustang";
    ford.model="Shelby";
    ford.engine_type = "V8";
    ford.setdurability(70);
    cout<<"name is : "<<ford.name<<endl;
    cout<<"Model is : "<<ford.model<<endl;
    cout<<"Engine is : "<<ford.engine_type<<endl;
    cout<<"Durability is : "<<ford.getdurability()<<"%"<<endl;
    return 0;
}