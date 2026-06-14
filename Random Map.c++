#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string maps[4] = {
        "Desert",
        "Forest",
        "Snow",
        "Island"
    };

    cout << maps[rand()%4];

    return 0;
}
