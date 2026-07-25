#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
    vector<int> prime_List;
    unsigned int start, end;

    cout << "Enter the starting number of the list" << endl;
    cin >> start;
    cout << "Enter the ending number of the list" << endl;
    cin >> end;


    for (int x = start; x <= end; x++) {

        if (x < 2) continue;

        bool prime = true;


        for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) {
                prime = false;
                break;
            }
        }


        if (prime) {
            prime_List.push_back(x);
        }
    }



    cout << "Prime numbers in the range [" << start << ", " << end << "] are:" << endl;
    for (int num : prime_List) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
