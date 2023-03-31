#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    cout << "Permutations: " << endl;
    do {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}