#include <iostream>

using namespace std;
//comment
int main()
{
    double a,b;
    cout<< "Enter A and B: ";
    cin>>a>>b;

    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n'
         <<"max= "<<max(a,b)<< '\n'
         <<"min= "<<min(a,b)<< '\n';


    return 0;
}
