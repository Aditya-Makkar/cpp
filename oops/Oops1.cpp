#include <iostream>
using namespace std;

class stdclass{
    public:
    string Name;
    string AdmNo;
    int Age;
    void intro(){
        cout<< "Name - "<<Name<<endl;
        cout<< "Age - "<<Age<<endl;
        cout<< "Adm No - "<<AdmNo<<endl;
    }
    //Constructor
    stdclass(string name,int age,string admnno){
        Name= name;
        Age=age;
        AdmNo=admnno;
    }
    stdclass(){
        Name="N.A";
        Age=0;
        AdmNo="0000";
    }
};

int main() {
    stdclass s1=stdclass("Aditya",20,"1176");
    // s1.Name="Aditya";
    // s1.Age=20;
    // s1.AdmNo="1176";
    // cout<<s1.Name; 
    s1.intro();

    stdclass s2=stdclass("Aryan",20,"1111");
    s2.intro();
    cout<<s1.Name<<" is "<<s1.Age<<"yr old"<<endl;
    s2.Age=50;//Update without encapulation
    cout<<s2.Name<<" is "<<s2.Age<<"yr old"<<endl;
}