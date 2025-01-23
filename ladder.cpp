#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;


int main()
{
    double h,v;
    double z;

    cin >> h >> v;

    z = ceil(h/sin(v * M_PI / 180.0));

    cout << z;

    return 0;
}
    
   
