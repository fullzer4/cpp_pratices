#include <iostream>

using namespace std;

int main() {

    int width {0};
    cout << "Enter the width: ";
    cin >> width;

    int length {0};
    cout << "Enter the length: ";
    cin >> length;

    cout << "The area is " << width * length << " square feet" << endl;

    return 0;
}