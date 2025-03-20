#include <iostream>
using namespace std;

int main() {
    int numbers[] = {4, 5, 12, 23, 36, 55};
    int size = 6;
    int target = 36;
    
    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) {
            cout << "Target found at index: " << i << endl;
            return 0;  // Exit successfully after finding the element
        }
    }

    cout << "Target not found!" << endl;
    return -1;  // Return -1 if target is not found
}
