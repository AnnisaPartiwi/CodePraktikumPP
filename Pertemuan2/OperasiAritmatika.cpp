#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 4;
    int c = a + b;

    cout << "Nilai a : " << a << endl;
    cout << "Nilai b : " << b << endl;
    cout << "Nilai c : " << c << endl;

    a = a + b;

    cout << "Nilai a setelah (a = a + b) : " << a << endl;

    return 0;
}