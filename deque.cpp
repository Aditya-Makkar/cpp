#include <iostream>
#include <deque>
#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> a(3,5);
    for(int i:a){
        cout<<i<<" ";
    }
  //  a.pop_front();

    a.push_back(3);
    a.push_front(4);
    cout<<endl;

    sort(a.begin(),a.end());
   // a.pop_back();

    a.erase(a.end()-3,a.end());
    for(int i:a){
        cout<<i<<" ";
    }
    
    return 0;
}