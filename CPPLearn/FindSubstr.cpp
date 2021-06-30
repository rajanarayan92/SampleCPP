#include <iostream>

using namespace std;

int main()
{
    string name = "Raj:myname";
    
    cout << "substr:" << name.substr(0, name.find(":"));

    return 0;
}
