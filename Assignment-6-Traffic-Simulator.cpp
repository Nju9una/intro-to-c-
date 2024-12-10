#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    int time = 0;

    while (true) {
        switch (time % 3) {
            case 0:
                cout << "Red Light" << endl;
                break;
            case 1:
                cout << "Yellow Light" << endl;
                break;
            case 2:
                cout << "Green Light" << endl;
                break;
        }
        this_thread::sleep_for(chrono::seconds(3));
        time++;
    }

    return 0;
}
