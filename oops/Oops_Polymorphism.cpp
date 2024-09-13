#include <iostream>
using namespace std;


//Polymorphism
//  Ek hi function ko baar baar alag tara se act krana like a man is also a father,brother,son,.....
//      ->Compiler Time Polymorphism    aka Static Polym
//              ->Function Overloading
//              ->Operator Overloading
//      ->Runtime Polymorphism          aka dynamic polym
//              ->Function Overwriting




// function overloading
class abc{  
    public:  
void func(){
    cout<<"hello peeps\n";
}
void func(int a){
    cout<<"hello peeps "<<a<<endl;
}
void func(string b){
    cout<<"hello peeps "<<b<<endl;
}

    //this wouldn't work because overloading sirf diff arguments se ho sakti hai na ki function specifier type 

    /*string func(string b){
        cout<<"hello peeps "<<b<<endl;
        return("hellowwwww");
    }   */

};
// Opperator overloading

class B{
public:

    int a;
    int b;

void operator+(B &obj){
    int value1= this -> a;
    int value2=obj.a;
    cout<<"output =  " <<value2-value1<<endl;
}
void operator() (){
    cout<<"Brackets Are Used  "<<this->a<<endl;
}
};



//  RUntime
class animal{
    public:
        void sound(){
            cout<<"speak\n";
        };
};
class dog: public animal{
    public:
        void sound(){
            cout<<"bark\n";

}};
class cat: public animal{
    public:
        void sound(){
            cout<<"meow\n";}

};




int main(){
    cout<<endl;
    
    abc a=abc();
    a.func();
    a.func(1);
    a.func("okay :)");
    

    cout<<endl;


    B obj1,obj2;
    obj1.a=70;
    obj2.a=20;
    obj1 + obj2;

    obj1();


    animal a1;
    a1.sound();
    cat c1;
    c1.sound();
    dog d1;
    d1.sound();


    return 0;
}