#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int n, int target, int &steps) {
    int low = 0, high = n - 1;
    steps = 0;
    while(low <= high) {
        steps++;
        int mid = (low + high) / 2;
        if(arr[mid] == target)
            return mid;
        else if(target < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: \n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter target: ";
    cin >> target;

    int steps;
    int result = binarySearch(arr, n, target, steps);

    if(result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found\n";

    cout << "Steps taken: " << steps << endl;
    return 0;
}
