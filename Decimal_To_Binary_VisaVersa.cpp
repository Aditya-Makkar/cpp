#include <iostream>
#include <math.h>
using namespace std;

int dtob(int x){
    int ans=0,i=1;
    while (x>0){
        ans += (x % 2) * i;

        // ans = (ans + ((n%2)*(pow(10,i))));                         -> Ye code pta nhi kaam kyu nhi krra  i=0 se initialize aur increment by 1

        i*=10;
        x=x/2;
    }
    return ans;
    // cout<<(ans)<<endl;
}

int btod(int x){
    int ans=0;
    int i=0;
    while (x>0){
        ans+=(pow(2,i))*(x%10);
        i++;
        x=x/10;
        }
    return ans;
}

int main(){

    cout<<dtob(4)<<endl<<endl;
    cout<<btod(100)<<endl;
    
    return 0;
}