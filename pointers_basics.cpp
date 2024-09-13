#include <iostream>
using namespace std;

int fun1(int *x){
    *x=*x+1;
    cout<<*x<<endl;
}


int main(){
    int a=5;
    int *p= &a;
    cout<<a<<"      "<<*p<<endl;

    a=a+1;
    cout<<a<<"      "<<*p<<endl;

    fun1(p);

    // *p=*p+1;
    cout<<a<<"      "<<*p<<endl;


    return 0;
}