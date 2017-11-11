//Author Hristo Dimitrov
#include <iostream>
#include <math.h>

using namespace std;
int main() {
    int x, a, b, c;
    cin >> x;
    if ((x >= 100 && x <= 999) || (x <= -100 && x >= -999)) {
        a = fabs(x / 100);
        b = fabs((x % 100) / 10);
        c = fabs((x % 100) % 10);
        cout << a << " " << b << " " << c << endl;

        if ((a+b+c)%3==0) {
            cout << "deli se na 3"<<endl;
        }
         if (c == 5 || c == 0) {
            cout << "deli se na 5" << endl;

        }
         if ((10 * b + c) % 4 == 0) {
            cout << "deli se na 4" << endl;
        }
    }
    else {
        cout << "ne e 3-cifreno" << endl;
    }
    return 0;
}
