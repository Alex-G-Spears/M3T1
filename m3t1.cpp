#include <iostream>
using namespace std;

int main() {
    // declare variables
    int widthOne, lengthOne, widthTwo, lengthTwo;
    int areaOne, areaTwo;

    // ask for user input

    cout << "Please enter the width and height of the first" << endl;
    cout << "rectange seperate by a space or newline" << endl;
    cin >> widthOne >> lengthOne;

    cout << "Please enter the width and height of the second" << endl;
    cout << "rectange seperate by a space or newline" << endl;
    cin >> widthTwo >> lengthTwo;

    // calculate answer
    areaOne = widthOne * lengthOne;
    areaTwo = widthTwo * lengthTwo;

    // display results
    cout << "Rectange one has an area of " << areaOne << endl;
    cout << "Rectange two has an area of " << areaTwo << endl;

}