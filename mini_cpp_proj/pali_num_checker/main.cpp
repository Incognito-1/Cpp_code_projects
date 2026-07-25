#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    cout << "Enter a positive number: ";
    string input;
    cin >> input;


    string reversedInput = input;
    reverse(reversedInput.begin(), reversedInput.end());


    if (input == reversedInput) {
        cout << input<<""<<"backwards is:"<<reversedInput<< ".Therefore it is A palindrome number" << endl;
    } else {
        cout <<input<<""<<"backwards is:"<<reversedInput<< ".Therefore it is NOT a palindrome number" << endl;
    }
    return 0;
}
