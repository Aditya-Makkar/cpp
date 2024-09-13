#include <iostream>
using namespace std;

int linearSearch(int n,int a[],int x){
    if (a[n]==x){
        return n;
    }
    else if (n<0){
        return -1;
    }
    else{
        linearSearch(n-1,a,x);
    }
}

int main(){
    int a[8]={50,10,70,20,60,30,80,90};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<n<<endl;
    n=n-1;
    int x;
    cin>>x;
    int ans;
    ans=linearSearch(n,a,x);
    cout<<"present index => "<<ans;
    return 0;
}