#include <iostream>
#include <climits>  // For INT_MAX and INT_MIN
using namespace std;

int main() {
    // // Array declaration
    // int numbers[] = {2, 4, 15, -12, 13, 6};  
    // int size2 = 6;

    // // Initialize smallest and largest numbers with their indices
    // int smallestNum = INT_MAX, largestNum = INT_MIN;
    // int smallestIndex = -1, largestIndex = -1;

    // for (int i = 0; i < size2; i++) {
    //     // Check for smallest number
    //     if (numbers[i] < smallestNum) {
    //         smallestNum = numbers[i];  
    //         smallestIndex = i;        
    //     }

    //     // Check for largest number
    //     if (numbers[i] > largestNum) {
    //         largestNum = numbers[i];  
    //         largestIndex = i;        
    //     }
    // }

    // // Output results
    // cout << "Smallest number: " << smallestNum  << " at index " << smallestIndex << endl;
    // cout << "Largest number: " << largestNum << " at index " << largestIndex << endl;

    int numbers[] = {2, 4, 15, -12, 13, 6};  
    int size2 = sizeof(numbers) / sizeof(numbers[0]);
    int minVal = numbers[0];

    for (int i = 0; i < size2; i++)
    {
        if (numbers[i] < minVal)
        {
            minVal = numbers[i];
        }
        
    }
    cout << "smallet number in numbers array is : " << minVal ;

    
    // int numbers[] = {2, 4, 15, -12, 13, 6};  
    // int size2 = sizeof(numbers) / sizeof(numbers[0]); // Get array size dynamically
    // int minVal = numbers[0]; // Initialize minVal with the first element

    // for (int i = 1; i < size2; i++) { // Start from index 1
    //     if (numbers[i] < minVal) { // Check for smallest number
    //         minVal = numbers[i];
    //     }
    // }

    // cout << "Smallest number in numbers array is: " << minVal << endl;
    return 0;
}
