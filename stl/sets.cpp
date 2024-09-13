#include <iostream>
#include <set>
using namespace std;
int main(){
    /*Is data type mai sirf unique elements add hote hai 
    Aur auto sort hote rhte hai

    Insert/ Find/ Erase/ Count ki complexicity -> O(log n)
    Begin/ End/ Size/ Empty ki complexicity -> O(n)
    */

    cout<<"bonk\n";

    set <int> a;
    
    a.insert(0);
    a.insert(10);
    a.insert(5);
    a.insert(20);
    a.insert(20);

    for (int i:a){
        cout<<i<<"  ";
    }

    cout<<"\n\nThis is used to check if that element is present Or Not---- "<<a.count(5)<<endl<<endl;
    cout<<"\n\nThis is used to check if that element is present Or Not---- "<<a.count(1)<<endl<<endl;
    cout<<"\n\nThis is used to check if that element is present Or Not---- "<<a.count(20)<<endl<<endl;

    cout<<"size of the set -->"<<a.size()<<endl;
    a.insert(2);
    cout<<"size of the set -->"<<a.size()<<endl;
    
for (auto i:a){
        cout<<i<<"  ";
    }
cout<<endl;
set<int>::iterator x=a.find(5);

// for (auto i=x;i!=a.end();i++){
//         cout<<i;
// }


    return 0;
}