#include<iostream>
using namespace std;
int main(){
    int a;
    char b;
    float c;
    double d;
    bool e;
    cin >> a >> b >> c >> d >> e;

    cout << a <<  " " << b << " " << c << " " << d << " " << e << endl;

    std::cout << "Size of char: " << sizeof(char) << " byte(s)" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " byte(s)" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " byte(s)" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " byte(s)" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " byte(s)" << std::endl;
    
    return 0;
}