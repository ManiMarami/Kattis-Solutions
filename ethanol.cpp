#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << fixed << setw(3) << "H" << endl;
        cout << fixed << setw(3) << "|" << endl;
        cout << "H-C-OH" << endl;
        cout << fixed << setw(3) << "|" << endl;
        cout << fixed << setw(3) << "H" << endl;
    }

    if (n == 2)
    {
    cout << fixed << setw(3) << "H" <<setw(2) << "H" << endl;
    cout << fixed << setw(3) << "|" <<setw(2) << "|"<< endl;
    cout << "H-C-C-OH" << endl;
    cout << fixed << setw(3) << "|" <<setw(2) << "|"<< endl;
    cout << fixed << setw(3) << "H" <<setw(2) << "H"<< endl;
    }

    if (n > 2)
    {
    
    cout << fixed << setw(3) << "H" <<setw(2) << "H"; for(int i = 3; i <= n; i++)
    {
        cout << setw(2) << "H";
    }
    cout << endl;
    cout << fixed << setw(3) << "|" <<setw(2) << "|"; for(int i = 3; i <= n; i++)
    {
        cout << setw(2) << "|";
    }
    cout << endl;
    cout << "H-C-C"; for(int i = 3; i <= n; i++)
    {
        cout << setw(2) << "-C";
    } cout << "-OH" << endl;

    cout << fixed << setw(3) << "|" <<setw(2) << "|"; for(int i = 3; i <= n; i++)
    {
        cout << setw(2) << "|";
    }
    cout << endl;
    cout << fixed << setw(3) << "H" <<setw(2) << "H"; for(int i = 3; i <= n; i++)
    {
        cout << setw(2) << "H";
    }
    cout << endl;

    }
    return 0;
    
}