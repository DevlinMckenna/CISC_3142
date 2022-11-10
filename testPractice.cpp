#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    vector<int> vec(10, 0);
    vector<int>::iterator iter;

    for (iter = vec.begin(); iter < vec.end(); iter++) {
        cout << *iter << endl;
    }

    for(int num : vec) {
        num= 2;
    }

    for (iter = vec.begin(); iter < vec.end(); iter++) {
        cout << *iter << endl;
    }
}
