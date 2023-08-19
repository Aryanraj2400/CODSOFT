#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


int main() {
    srand(time(0));
    int num = rand() % 100;
    int tries = 0;
    int guess_number;
    cout << "Enter any Number : ";
    cin >> guess_number;
    while (num != guess_number) {

        if (guess_number > num) {
            cout << "You have entered larger number" << endl;
            cout << "Enter any Number : ";
            cin >> guess_number;
        } else {
            cout << "You have entered smaller number" << endl;
            cout << "Enter any Number : ";
            cin >> guess_number;
        }
    }
    if (num == guess_number) {
        cout << "Hurray ! You won the game " << endl;
    }
}