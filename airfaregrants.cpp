#include <bits/stdc++.h>
int main() {
    int mn = 0, mx = 0, input = 0, temp = 0;
    std::cin >> input;
    std::cin >> temp;
    mx = temp;
    mn = temp;
    for (int i = 0; i < input -1; i++) {
        std::cin >> temp;
        if (temp < mn) mn = temp;
        if (temp > mx) mx = temp;
    }
    std::cout << std::max(0,(mn - (mx/2)));
}