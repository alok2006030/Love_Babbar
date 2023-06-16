#include <iostream>

int main() {
    using namespace std;
    
    char n;
    cout << "Enter a character: ";
    cin >> n;

    if (n >= 'a' && n <= 'z') {
        cout << "The character is lowercase." << endl;
    } else if (n >= 'A' && n <= 'Z') {
        cout << "The character is uppercase." << endl;
    } else if (n >= '0' && n <= '9') {
        cout << "The character is an integer." << endl;
    } else {
        cout << "The character is not a lowercase, uppercase, or integer." << endl;
    }

    return 0;
}
