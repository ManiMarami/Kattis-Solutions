#include <iostream>
using namespace std;

int main()
{
    int start=0,end=0,count=0,size=0;
    cin >> size;

    if (!(size%2 == 0))
    {
        cout << "still running";
        return 0;
    }
    
    for (size_t i = 0; i < size/2; i++)
    {
        cin >> start >> end;
        count += end-start;
    }
    
    cout << count;
    return 0;
}