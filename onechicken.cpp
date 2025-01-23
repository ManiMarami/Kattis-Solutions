#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int needed,availabe, total;

    cin >> needed >> availabe;
    total = availabe - needed;

    total = (availabe - needed);
    

    if (total > 1)
    {
        cout << "Dr. Chaz will have "<< total <<" pieces of chicken left over!";
        return 0;
    }
    if (total == 1)
    {
        cout << "Dr. Chaz will have "<< total <<" piece of chicken left over!";
        return 0;
    }
    if (total == -1)
    {
        cout << "Dr. Chaz needs " << abs(total) <<" more piece of chicken!";
        return 0;
    }
    else
        cout << "Dr. Chaz needs " << abs(total) <<" more pieces of chicken!";
        return 0;
    
}