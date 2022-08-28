/*Structure : Type of user defined data type in which different type of data type can be stored.
 Union : Type of user defined data type in which different type of data type can be stored but only one stored value can be accessed 
and memory is shared throughout the data types.
Enum : 

*/


#include<iostream>

using namespace std;

struct Student
{
    /* data */
    int roll_no;
    char section;
    float cgpa;

};
// typedef struct Student
// {
//     /* data */
//     int roll_no;
//     char section;
//     float cgpa;

// }stu;    --------> using this (this code syntax) you can only use {stu} in place of {struct student}

union money
{
   int rice;
    char car;
    float pound; 
};



int main(){
    enum Meal(breakfast,lunch,dinner);
    union money m1;
    m1.rice = 34;
    cout<<"Value of rice "<<m1.rice<<endl; 
    struct Student shivam;
    shivam.roll_no = 874;
    shivam.section = 'A';
    shivam.cgpa = 8.65;

    cout<<"Roll number of shivam : "<<shivam.roll_no<<endl;
    return 0;
}

