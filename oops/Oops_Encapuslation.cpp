#include <iostream>
using namespace std;

class stdclass{
    private:
    string Name;
    string AdmNo;
    int Age;
    public:
    void setName(string name){
        Name=name;
    }
    void setAdmNo(string admno){
        AdmNo=admno;
    }
    void setAge(int age){
        if (age>=18){
        Age=age;}
    }
    string getName(){
        return Name;
    }
    string getAdmNo(){
        return AdmNo;
    }
    int getAge(){
        return Age;
    }
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
    stdclass(string Name,int Age){
        this->Name=Name;
        this->Age=Age;
        this->AdmNo="N.A";
    }
    // Default Constructor
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

    // stdclass s2=stdclass("Aryan",20,"1111");
    // s2.intro();
    // int temp;
    // cout<<"enter new age";
    // cin>>temp;
    // cout<<"Age of "<<s2.getName()<<" is updated from "<<s2.getAge()<<" to ";
    // s2.setAge(temp);
    // cout<<s2.getAge();

    string n,admn;
    int age;
    cin>>n>>admn>>age;
    stdclass s3=stdclass(n,age,admn);
    s3.intro();

    stdclass s4;
    s4.intro();



    stdclass trial=stdclass("Adi",20);
    trial.intro();


}