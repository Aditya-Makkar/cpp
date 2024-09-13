#include<iostream>
using namespace std;
int main(){
    // int n1;
    // cout<<"no1";
    // cin>>n1;
    // int n2;
    // cout<<"no2";
    // cin>>n2;
    // int n=n1+n2;
    // cout<<"Output"<<n;


    int x=10;
    int y=x;
    int & z =x;
    x=20;
    cout<<x<<endl<<y<<endl<<z;

    return 0;
}