#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int secondsIn,hours;
double min,sec;
cin >> secondsIn;

hours = secondsIn/3600;
min = (secondsIn%3600)/60;
sec = secondsIn % 60;

cout << hours << " : " << min << " : " << sec << endl;

return 0;
}