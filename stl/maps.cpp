#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,string> m;

    m[1]="Hello";
    m[3]="Adiya";
    m[2]="Im";

    m.insert({-1,"Wassup"});
    m.insert({0,"Hi"});
    for(auto i:m){
        cout<<i.first<<"   "<<i.second<<endl;
    }

    cout<<"is 2 present ?? --->  "<<m.count(2)<<endl;
    cout<<"is 4 present ?? --->  "<<m.count(4)<<endl;

    m.erase(-1);
    cout<<endl<<"\nAfter Erase \n";
    for(auto i:m){
        cout<<i.first<<"   "<<i.second<<endl;
    }

    cout<<endl<<m[1]<<endl<<m[2];

    return 0;
}