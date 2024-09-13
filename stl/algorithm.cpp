#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    
    cout<<"Is 40 present in vector v using Binary Search -->" <<binary_search(v.begin(),v.end(),40)<<endl;
    cout<<"Is 45 present in vector v using Binary Search -->" <<binary_search(v.begin(),v.end(),45)<<endl;

    for (auto i:v){
        cout<<i<<"  ";
    }

    cout<<endl<<lower_bound(v.begin(),v.end(),40)-v.begin()<<endl;
    cout<<upper_bound(v.begin(),v.end(),40)-v.begin()<<endl;

    cout<<max(40,50)<<"   "<<min(20,50)<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    for (auto i:v){
        cout<<i<<"  ";
    }
    cout<<endl;
    
    rotate(v.begin(),v.begin()+2,v.end());
    for (auto i:v){
        cout<<i<<"  ";
    }
    cout<<endl;
    
    string s="ABCDE";
    reverse(s.begin(),s.end());
    for (auto i:s){
        cout<<i<<"  ";
    }

    return 0;
}