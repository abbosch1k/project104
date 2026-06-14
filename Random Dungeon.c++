#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string dungeons[4] = {
        "Cave",
        "Castle",
        "Forest",
        "Tower"
    };

    cout << dungeons[rand()%4];

    return 0;
}
