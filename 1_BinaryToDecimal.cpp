#include <iostream>
using namespace std;

int main()
{
    char num[] = "1001";
    
    cout << stoi(num, 0, 2);

    return 0;
}