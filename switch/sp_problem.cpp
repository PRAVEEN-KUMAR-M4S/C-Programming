#include <iostream>
using namespace std;

int main() {
    int n = 1330;
    int count100 = 0, count50 = 0, count20 = 0, count1 = 0;

    if (n >= 100) {
        count100 = n / 100;
        n = n - (count100 * 100);
    }

    if (n >= 50) {
        count50 = n / 50;
        n = n - (count50 * 50);
    }

    if (n >= 20) {
        count20 = n / 20;
        n = n - (count20 * 20);
    }

    if (n >= 1) {
        count1 = n / 1;
        n = n - (count1 * 1);
    }

    cout << "100: " << count100 << endl;
    cout << "50: " << count50 << endl;
    cout << "20: " << count20 << endl;
    cout << "1: " << count1 << endl;

    return 0;
}
