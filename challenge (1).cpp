#include <iostream>

using namespace std;

int main()
{

int green, red;
int count;
int tempR,tempB;

green = 0;
red = 0;
count = 0;

cin >> green >> red;

tempR = red;
tempB = green;

//see which one is the smallest one and use it as max to subtract from the temp
if (green >= red)
{
    for (int i = 0; i < tempR; i++)
{
    red = red - 1;
    green = green - 1;
    count = count + 10;
}
}
else{
    for (int i = 0; i < tempB; i++)
{
    red = red - 1;
    green = green - 1;
    count = count + 10;
}
}

/*
One green herb: Boosts health by 1
.

Two green herbs: Boosts health by 3
.

Three green herbs: Boosts health by 10
.*/

count += 10 * (green/3);
green %= 3;

count += 3 * (green/2);
green %= 2;

count += green;
//red and green are for test purposes
cout << count;

return 0;
}