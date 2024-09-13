#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;}

int lcm(int a, int b, int gcd_ab) {
    return (a / gcd_ab) * b;
}

int main(){
    int N=5;
    int A[5]={1,24,4,5,3};
    set <int> A_set;
    
    for (int i=0;i<N;i++){
        A_set.insert(A[i]);
    }
    for (auto i:A_set){
        cout<<i<<"  ";
    }
    int count=0;
    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            cout<<"es\n";
            int gcd_t=gcd(A[i],A[j]);
            int lcm_t=lcm(A[i],A[j],gcd_t);
            if (A_set.count(gcd_t*lcm_t)){
            cout<<"es\n";
                count++;
            }
        }
    }
    cout<<count;
    
    return 0;
}