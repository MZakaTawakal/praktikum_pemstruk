#include <iostream>
using namespace std;

int main() {
    int n = 40;
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0) {
            continue; 
        }
        else if (i == 31) {
            cout << "NOT FOUND\n";
            break; 
        }
        else {
            cout << i << "\n";
        }
    }
    return 0;
}


