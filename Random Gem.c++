#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string gems[4] = {
        "Ruby",
        "Diamond",
        "Emerald",
        "Sapphire"
    };

    cout << gems[rand()%4];

    return 0;
}
