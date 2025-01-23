#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string priceOriginalInput;
    int numberOfInput;
    
    cin >> numberOfInput;


    for (int i = 0; i < numberOfInput; i++) {
        cin >> priceOriginalInput;
    
        cout << priceOriginalInput.length() << endl;    
    }
    return 0;
    
}