#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

int temp,x,y,z;

cin >> temp;

if (temp <= 50)
{
    cout << "99";
    return 0;
}

x = (temp / 100) * 100 + 99;
    if (x > temp) 
    {
        x -= 100;
    }

y = ((temp / 100) + 1) * 100 - 1;

if (abs(temp - x) < abs(temp - y)) {
        cout << x;
    } else {
        cout << y;
    }

return 0;
}
