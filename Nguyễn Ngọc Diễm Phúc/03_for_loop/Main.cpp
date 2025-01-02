#include <iostream>
#include <math.h>

using namespace std;

int main() {
    for (int i = 1; i <= 20; i *= 2) {
        cout << i << endl;
        if (i < 10) {
            i++;
        }
    }
}