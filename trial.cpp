// #include <iostream>
// using namespace std;

// int main(){
//     int t,n,max,ans,count;
//     cin>>t;
//     for (int u=0;u<t;u++){
//         max=0;
//         ans=0;
//         cin>>n;
//         int a[n],b[n];
//         for (int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         for (int i=0;i<n;i++){
//             cin>>b[i];
//         }
//         for (int i=0;i<n;i++){
//             count=0;
//             for (int j=0;j<n;j++){
//                 if ((a[i]>a[j]) || (b[i]>b[j])){
//                     count++;
//                 }
//             }
//             if (count>max){
//                 max=count;
//             }
//         }
//         for (int i=0;i<n;i++){
//             count=0;
//             for (int j=0;j<n;j++){
//                 if ((a[i]>a[j]) || (b[i]>b[j])){
//                     count++;
//                 }
//             }
//             if (count==max){
//                 ans++;
//             }
//         }
//         cout<<ans<<endl;
        
//     }
// }



#include <iostream>
using namespace std;

int main(){
    int t,n,max,ans,count;
    cin>>t;
    for (int u=0;u<t;u++){
        max=0;
        ans=0;
        cin>>n;
        int a[n],b[n];
        for (int i=0;i<(2*n);i++){
            if(i<n)
            cin>>a[i];
            else
            cin>>b[i-n];
        }
        for (int i=0;i<n;i++){
            count=0;
            for (int j=0;j<n;j++){
                if ((a[i]>a[j]) || (b[i]>b[j])){
                    count++;
                }
            }
            if (count==max){
                ans++;
            }
            else if (count>max){
                max=count;
                ans=0;
            }
        }
        // for (int i=0;i<n;i++){
        //     count=0;
        //     for (int j=0;j<n;j++){
        //         if ((a[i]>a[j]) || (b[i]>b[j])){
        //             count++;
        //         }
        //     }
        //     if (count==max){
        //         ans++;
        //     }
        // }
        cout<<ans<<endl;
        
    }
}