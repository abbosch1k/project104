#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string buildings[4] = {
        "House",
        "Tower",
        "Castle",
        "Shop"
    };

    cout << buildings[rand()%4];

    return 0;
}
