#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int i;

    for (i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == 's' && str[i + 1] == 's')
        {
            cout << "hiss" << endl;
            return 0;
        }
    }

    cout << "no hiss" << endl;

    return 0;
}
