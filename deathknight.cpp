#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;


int main()
{
    string seq;
    int k;
    int ans = 0;

    cin >> k;

    for (size_t i = 0; i < k; i++)
    {
        cin >> seq;
        if (seq.find("CD")==string::npos)
        {
            ans++;
        }
        
    }
    cout << ans;

    return 0;
}
    
   
