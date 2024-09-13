
#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n]={};
    for (int l = 0; l < n; l++)
    {
        cin>>arr[l];
    }
    for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<endl;
    }
    return 0;
}
