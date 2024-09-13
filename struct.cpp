#include <iostream>
using namespace std;

struct student
    {
        int cls;
        int age;
        float perc;
    };



int main(){
    struct student aditya;
    struct student aryan;
    aditya.age=18;
    aditya.cls=12;
    aditya.perc=86.4;
    cout<<aditya.age<<endl<<aditya.cls<<endl<<aditya.perc<<endl;
    cout<</*aryan.age<<endl<<*/aryan.cls/*<<endl<<aryan.perc<<endl*/;
    return 0;
}