#include <iostream>
using namespace std;

void exchange_val(float a, float b) {
    float temp = a;
    a = b;
    b = temp;
}

void exchange_addr(float* a, float* b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    float x = 5.5, y = 10.2;
    
    cout << "Before exchange_val: x = " << x << ", y = " << y << endl;
    exchange_val(x, y);
    cout << "After exchange_val: x = " << x << ", y = " << y << endl;
    
    cout << "Before exchange_addr: x = " << x << ", y = " << y << endl;
    exchange_addr(&x, &y);
    cout << "After exchange_addr: x = " << x << ", y = " << y << endl;
    
    return 0;
}