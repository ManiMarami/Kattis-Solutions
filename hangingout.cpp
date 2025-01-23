#include <iostream>
#include <string>
using namespace std;

int main() {
    int maxPeople, events;
    cin >> maxPeople >> events;

    int currentPeople = 0;
    int deniedEntries = 0;

    for (int i = 0; i < events; i++) {
        string peopleChar;
        int people;
        cin >> peopleChar >> people;

        if (peopleChar == "enter") {
            if (currentPeople + people > maxPeople) {
                deniedEntries++;
            } else {
                currentPeople += people;
            }
        }

        if (peopleChar == "leave") {
            currentPeople -= people;
        }
    }

    cout << deniedEntries << endl;

    return 0;
}
