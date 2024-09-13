#include<iostream>
using namespace std;

int main(){
    cout<<" Using Do While Loop"<<endl<<endl;
    int i=1;
    do{
        cout<<"6 x "<<i<<" = "<<(6*i)<<endl;
        i++;
    }while(i<11);

    cout<<endl<<endl<<" Using While Loop"<<endl<<endl;
    i=1;
    while(i<11){
        cout<<"5 x "<<i<<" = "<<(5*i)<<endl;
        i++;
    }

    cout<<endl<<endl<<" Using for Loop"<<endl<<endl;
    for(int i=1;i<=10;i++){
        cout<<"10 x "<<i<<" = "<<10*i<<endl;
    }
    return 0;
}