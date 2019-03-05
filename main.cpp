#include <iostream>

using namespace std;

int main()
{
    cout<< "Enter A and B: ";

   int a,b,min, max;
 cout << "A + B = " << a + b << '\n'
      << "A - B = " << a - b << '\n'
      << "A * B = " << a * b << '\n'
      << "A / B = " << a / b << '\n';
    if (a>b)
        max=a;
    cout<<'max= '<<max;


if (a<b)
        min=a;
    cout<<'min= '<<min;


    return 0;
}
