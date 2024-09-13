#include <iostream>
#include <list>
using namespace std;
int main(){
    list <int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_front(0);
    
    for (int i:l){
        cout<<i<<"  ";
    }
    cout<<endl;
    // cout<<endl<<l[1];            Indexing doesnt work in lists

    l.pop_back();
    l.pop_front();

    for (int i:l){
        cout<<i<<"  ";
    }
    cout<<endl;


    l.push_back(50);
    l.push_back(100);
    l.push_back(200);


    l.erase(l.begin());
    
    for (int i:l){
        cout<<i<<"  ";
    }
    cout<<endl;




    l.erase(l.begin(),l.end());
    
    for (int i:l){
        cout<<i<<"  ";
    }
    cout<<endl;



    return 0;
}