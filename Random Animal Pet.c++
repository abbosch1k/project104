#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string pets[4] = {
        "Dog",
        "Cat",
        "Fox",
        "Wolf"
    };

    cout << pets[rand()%4];

    return 0;
}
