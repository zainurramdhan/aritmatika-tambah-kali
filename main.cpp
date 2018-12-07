#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a = 6;
    float b = 4;
    float hasil;
    // operatornya +, -, *, /, %

    // urutan eksekusi
    hasil = (a + b) * a;
    cout << "("<< a << "+"<< b << ")" << "*" << a << "=" << hasil << endl;

    getch();
    return 0;
}
