#include <iostream>

using namespace std;

int main()
{
    int first,c,p,count,attempt;
    count = 0;
    cin >> first >> c >> p;

    for (int i = 0; i < first; i++)
    {
        cin >> attempt;

        if (attempt > (c + p))
        {
            count = count + 1;
            p = c;
            c = attempt;
        }
        
    }
    cout << count;
    return 0;
}