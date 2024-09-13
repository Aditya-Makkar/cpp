#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> a;

    cout<<a.size()<<"       "<<a.max_size()<<endl;
    a.push_back(2);
    a.push_back(3);
    a.push_front(1);
    cout<<a.size()<<"       "<<a.max_size()<<endl;

    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    
    a.pop_back();
    a.pop_front();

    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;


    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);
 
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    cout<<"front- "<<a.front()<<"      back-"<<a.back()<<endl;
 
    cout<<a[0]<<" "<<a[1];
 
    return 0;
}