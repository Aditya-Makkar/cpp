#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(3,1);
    for (int i:a){
        cout<<i<<" ";
    }
    

    // cout<<endl<<"size of a= "<<a.size()<<endl<<"capacity of a= "<<a.capacity(); //output 3 , 3
    a.push_back(5);
    //cout<<endl<<"size of a= "<<a.size()<<endl<<"capacity of a= "<<a.capacity(); //output 4 , 6
    // a.pop_back();
    // cout<<endl<<a.front()<<"  "<<a.back();
    // cout<<endl<<"size of a= "<<a.size()<<endl<<"capacity of a= "<<a.capacity(); //output 4 , 6

    vector<int>:: iterator iter=a.begin();

    a.insert(iter+2,2,3);
    cout<<endl;
    sort(a.begin(),a.end(),greater<int>());
    // cout<<endl;
    for(int i=0;i<a.size();i++){
        cout << a.at(i)<<"  ";
    }
    vector<int> b;
    cout<<endl<<endl<<a.empty()<<endl<<b.empty()<<endl;
    sort(a.begin(),a.end());
    for (int i:a){
        cout<<i<<" ";
    }
}