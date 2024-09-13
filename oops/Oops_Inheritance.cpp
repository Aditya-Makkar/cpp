#include <iostream>
using namespace std;


//Inheritence rules png saved in same folder


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

class sclass2 : public stdclass{
    public:
        int xyz;

    int getxyz(){
        return xyz;
    }
    int getage2(){
        return Age;
    }
    // void intro2(){
    //     cout<< "Name - "<<Name<<endl;
    //     cout<< "Age - "<<Age<<endl;
    //     cout<< "Adm No - "<<AdmNo<<endl;
    // }
};


int main(){
    
    sclass2 a1= sclass2();
    a1.xyz=10;
    a1.Age=18;
    a1.Name="Hellu";
    a1.AdmNo="1122";
    a1.intro();
    cout<<a1.getxyz()<<endl;
    cout<<a1.getage2()<<endl;

    return 0;
}