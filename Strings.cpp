#include <iostream>
#include <string>
using namespace std;
int main(){
    
    string b;
    cin>>b;
    cout<<b;

    string a="hello bro";
    cout<<a<<endl<<a.length()<<endl;
    

    cout<<a.find("l",0)<<endl;          //2nd arguement is the index from which the search will start
    cout<<a.find("l",3)<<endl;          //No matter 2nd arg mai kuch bhi do return actual index hi hoga
    cout<<a.find("l",4)<<endl;          //agar vo searched chars main string mai exist nhi krti toh garbage value return hogi
    cout<<a.find("q",4)<<endl;

    cout<<endl<<a.find("bro",0)<<endl;

    cout<<endl<<a.substr(6,10)<<endl;   //arg1 -> beginning index arg2 -> length of sub string (index doesnt go out of range)

    
    // string c=a;
    string c=a+" "+b;
    
    // strcat(c," ");
    // strcat(c,b);
    cout<<endl<<c<<endl;

    char x[]="HELLO";
    char y[]="BABE";
    x.copy(y,2,1);
    cout<<endl<<x<<endl; 

    return 0;
}