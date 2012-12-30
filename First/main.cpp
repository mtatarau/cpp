#include <iostream>

using namespace std;
void afiseaza ();
int main()
{
    int x = 5;
    int *adr = &x;
    afiseaza();
    cout << "Hello world!" << endl;
    cout << "test" << endl;
    cout << adr << endl;
    return 0;
}
void afiseaza (){
    cout <<"1"<<endl;
}
