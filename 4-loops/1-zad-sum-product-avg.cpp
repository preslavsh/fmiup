// Author Kristina Hristova
#include <iostream>

using namespace std;

int main() {
    int number, pow, number_to_power = 1;
    cin >> number;
    cin >> pow;
    for (int i = 0; i< pow; i++){
        number_to_power = number_to_power * number;
    }
    cout << number_to_power << endl;
    return 0;
}
