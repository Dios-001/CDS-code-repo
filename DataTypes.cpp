#include<iostream>
#include<string>
using namespace std;
int main(){
    int a;
    char b;
    float c;
    double d;
    bool e;
    cin >> a >> b >> c >> d >> e;

    cout << a <<  b << c << d << e;

    cout << "Size of char: " << sizeof(char) << " byte(s)" << endl;
    cout << "Size of int: " << sizeof(int) << " byte(s)" << endl;
    cout << "Size of float: " << sizeof(float) << " byte(s)" << endl;
    cout << "Size of double: " << sizeof(double) << " byte(s)" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte(s)" << endl;
    cout << "Size of String: " << sizeof(string) << " byte(s)" << endl;
    
    return 0;
}