#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main()
{
    bool win;
    char x,y;
    char a[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    /*
    cin >> a[0][0] >> a[0][1] >> a[0][2];
    cin >> a[1][0] >> a[1][1] >> a[1][2];
    cin >> a[2][0] >> a[2][1] >> a[2][2];
    */

    if ((a[0][0] == 'O'  && a[0][1] == 'O' && a[0][2] == 'O' ||
        a[1][0] == 'O'  && a[1][1] == 'O' && a[1][2] == 'O' )||
        a[2][0] == 'O'  && a[2][1] == 'O' && a[2][2] == 'O')
    {
        cout << "Jebb";
    }
    else if  ((a[0][0] == 'O'  && a[1][0] == 'O' && a[2][0] == 'O'||
        a[0][1] == 'O'  && a[1][1] == 'O' && a[2][1] == 'O' )||
        a[0][2] == 'O'  && a[1][2] == 'O' && a[2][2] == 'O')
        {
            cout << "Jebb";
        }
    else if ((a[0][0] == 'O'  && a[1][1] == 'O' && a[2][2] == 'O'||
        a[0][2] == 'O'  && a[1][1] == 'O' && a[2][0] == 'O' ))
        {
            cout << "Jebb";
        }
    else
    {
        cout << "Neibb";
    }
    return 0;
}