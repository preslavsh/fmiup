// Author Mitko
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    cout << (a + b - abs(a-b))/2 << endl;
    return 0;
}
