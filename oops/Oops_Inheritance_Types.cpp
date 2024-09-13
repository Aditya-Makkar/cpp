#include <iostream>
using namespace std;

class scls1{
    public:
        int A;
        void Hellu(){
            cout<<"Hellu"<<endl;
        }
};

//Single Inheritance
class scls2:public scls1{
    public:
        int b;
};


// Mullti Level Inheritance
class scls3:public scls2{
    public:
        int c;
};


class scls4{
    public:
    void bye(){
        cout<<"bye bye"<<endl;
    }
};
//Multiple Inheritance
class scls5: public scls1 , public scls4 {
    int lks;
};


int main(){
    scls3 x= scls3();
    x.Hellu();
    


    scls5 k= scls5();
    k.Hellu();
    k.bye();
return 0;
}