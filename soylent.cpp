#include <iostream>

using namespace std;

int main ()
{
    int T,N,i;
    int calories,drinks=0;

    cin >> N;

    for (i = 0; i < N; i++)
    {
        cin >> calories;
        drinks = calories / 400;

        if (calories  % 400 != 0)
        {
            drinks = drinks + 1;
        }

        cout << drinks << endl;
    }
    

    return 0;
}