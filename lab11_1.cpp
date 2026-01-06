#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "Press Enter 3 times to reveal your future." << endl;

    cin.get();
    cin.get();
    cin.get();

    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    int size = 9;

    srand(time(0));
    int index = rand() % size;

    cout << "You will get " << grades[index] << " in this 261102.";

    return 0;
}
