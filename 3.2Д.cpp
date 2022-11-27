#include <iostream>
#include <cmath>

using namespace std;

int main (){
   float x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    if ((x * x + y * y) && (y > x))
        cout << 1;
    else
        cout << 0;



    return 0;
}


