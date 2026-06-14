#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string quests[4] = {
        "Kill Dragon",
        "Find Treasure",
        "Save Village",
        "Escort Merchant"
    };

    cout << quests[rand()%4];

    return 0;
}
