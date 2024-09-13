#include <iostream>
using namespace std;
int main(){


    int c[]={1,2,3,4,5};    
    
    int* p=c;
    for (int i = 0; i < 5; i++)
    {
        cout<<*p<<endl;
        p++;
    }
    
    

    int d[]={};


    for (int l = 0; l < 5; l++)
    {
        cin>>d[l];
    }


    for (int k = 0; k < 5; k++)
    {
        cout<<d[k]<<endl;
    }

    // cout<<endl<<endl<<a;


    

    

    
    return 0;
}