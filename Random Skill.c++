#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string skills[4] = {
        "Fire",
        "Ice",
        "Wind",
        "Lightning"
    };

    cout << skills[rand()%4];

    return 0;
}
