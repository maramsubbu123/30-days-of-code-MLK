#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    // declaring variables:
    int a, b; // int data-type

    double result; // double data-type
    float u; //float data-type
    bool x=false; //boolean data-type
    string s; //string data-type

    // initializing the values
    a = 29;
    b = 15;

    //operators used
    a = a + 1;
    result = a + b;

    cout << "Result of "<<a<<" + "<<b<<" is: "<<result<<endl;
    cout << "Result of "<<a<<" - "<<b<<" is: "<<a-b<<endl;
    cout << "Result of "<<a<<" * "<<b<<" is: "<<a*b<<endl;
    cout << "Result of "<<a<<" / "<<b<<" is: "<<a/b<<endl;
    
    cout <<"Data-Type of u is: " <<typeid(u).name() << endl;
    cout <<"Data-Type of a is: " <<typeid(a).name() << endl;
    cout <<"Data-Type of result is: " <<typeid(result).name() << endl;
    cout <<"Data-Type of x is: " <<typeid(x).name() << endl;
    cout <<"Data-Type of s is: " <<typeid(s).name() << endl;

    return 0;
}
