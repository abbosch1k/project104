#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string swords[4] = {
        "Iron Sword",
        "Steel Sword",
        "Magic Sword",
        "Golden Sword"
    };

    cout << swords[rand()%4];

    return 0;
}
