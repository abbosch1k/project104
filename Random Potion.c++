#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string potions[4] = {
        "Health",
        "Mana",
        "Speed",
        "Strength"
    };

    cout << potions[rand()%4];

    return 0;
}
