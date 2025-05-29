#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

int main() {
    vector<int> vect{ 10, 20, 30, 40};

    for (int& x : vect) {
        x = 2*x;
    }

    for (int x : vect) {
        cout << x << " ";
    }
    return 0;
}
