#include <iostream>
using namespace std;

int main() {
    int K, N;
    cin >> K >> N;

    int totalTime = 0;
    int currentPlayer = K;

    for (int i = 0; i < N; i++) 
    {
        int T;
        char Z;
        cin >> T >> Z;

        totalTime += T;

        if (totalTime >= 210) 
        {
            break;
        }

        if (Z == 'T') 
        {
            currentPlayer = (currentPlayer % 8) + 1;
        }
    }

    cout << currentPlayer << endl;
    return 0;
}
