#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <pair<int,int>> v;
    v.push_back(make_pair(1,10));
    v.push_back(make_pair(2,20));
    v.push_back(make_pair(3,30));

    for (auto i:v){
        cout<<i.first<<"  "<<i.second<<endl;
    }


    
    return 0;
}