
#include <iostream>
#include <string>
#include <vector>

using namespace std;


// Prints the vector values in console
void printV(vector<int> v) {
    for(int e : v) {
        cout << e << " ";
    }
    cout << endl;
}

int main() {

    // Declaring the int vector named nums
    vector<int> nums;

    // Initializing the nums with ten numbers (from 1 to 10)
    for(int i = 1; i < 11; i++) {
        nums.push_back(i);
    }

    printV(nums);
    cout << endl;

    // Changing the value of the elements of the vector
    for(int i = 0; i < 10; i++) {
        nums[i] = 2 * nums[i];
    }
    
    printV(nums);
    cout << endl;

    return 0;
}



