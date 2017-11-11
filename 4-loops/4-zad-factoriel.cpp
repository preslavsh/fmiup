// Author Mitko
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int number, fact = 1;
    cin >> number;
    for(int i = number; i > 0; i--){
        fact = fact * i;
    }
    cout << fact << endl;
    return 0;
}
