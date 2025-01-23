#include <iostream>
#include <map>
#include <string>
#include <cctype>

using namespace std;

int main(){
    
    map<char , string > totalMap = {
        {'a', "@"},
        {'b', "8"},
        {'c', "("},
        {'d', "|)"},
        {'e', "3"},
        {'f', "#"},
        {'g', "6"},
        {'h', "[-]"},
        {'i', "|"},
        {'j', "_|"},
        {'k', "|<"},
        {'l', "1"},
        {'m', "[]\\/[]"},
        {'n', "[]\\[]"},
        {'o', "0"},
        {'p', "|D"},
        {'q', "(,)"},
        {'r', "|Z"},
        {'s', "$"},
        {'t', "']['"},
        {'u', "|_|"},
        {'v', "\\/"},
        {'w', "\\/\\/"},
        {'x', "}{"},
        {'y', "`/"},
        {'z', "2"}
    };
    string input;
    string output;
    getline(cin, input);

    for (int i = 0; i < input.length(); i++)
    {
        if (isalpha(input[i])) {
            output += totalMap[tolower(input[i])];
        }
        else {
            output += input[i];
        }
    }
    cout << output << endl;
    
    return 0;
}