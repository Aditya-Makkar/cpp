#include <iostream>
using namespace std;







int main(){
    
    int n;
    cin>>n;

    int* arr=new int[n];

    
    for (int i=0;i<n;i++){
        cin>>arr[i];

    }

    for (int i=0;i<n;i++){
        cout<<arr[i];
    }

    delete []arr;


    int arr2[n];
    int* ptr=&arr2[0];

    for (int i=0;i<n;i++){
        cin>>*(ptr+i);
        // *ptr++;
    }    
    ptr=&arr2[0];
    for (int i=0;i<n;i++){
        cout<<*ptr+i<<"  ";
    }

    return 0;
}