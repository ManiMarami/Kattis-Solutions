#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) 
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


bool isValid(int* arr, int size)
{
    for (int i = 1; i < size; i++) {
        if (gcd(arr[i - 1], arr[i]) <= 1) {
            return false;
        }
    }
    return true;
}

int main()
{
    int x,y,z,temp,input,output,i;

    cin >> x;

    int* inputs = new int[x];

    for (i = 0; i < x; i++)
    {
        cin >> inputs[i];
    }
    
    sort(inputs, inputs + x);

    bool found = false;

    do {
        if (isValid(inputs, x)) {
            found = true;
            for (int i = 0; i < x; i++) {
                cout << inputs[i] << " ";
            }
            cout << endl;
            break;
        }
    } while (next_permutation(inputs, inputs + x));

    if (!found) {
        cout << "Neibb" << endl;
    }

    delete[] inputs;

    return 0;
}