#include <iostream>
#include <cmath>

using namespace std;

int main (){
    float x, y;
    cout << "x = ";
    cin >> x;
    if (x > 3)
        y = 2 * x - 10;
    else if (x == 3)
        y = 10;
    else if (x < 3)
        y = pow((2 * x + 1),2) - 1;
    cout << "f(x) = " << y;

    return 0;
}
