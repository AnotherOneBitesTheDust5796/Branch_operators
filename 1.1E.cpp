#include <iostream>
#include <cmath>

using namespace std;

int main (){
    float x, y;
    cout << "x = ";
    cin >> x;
    if (x > 2)
        y = 2 * x - 15;
    else if (x == 2)
        y = 5;
    else if (x < 2)
        y = 3 * abs((x - 1)) - 8;
    cout << "f(x) = " << y;

    return 0;
}
