// Author Mitko
#include <iostream>

using namespace std;

int main() {
    int x, factoriel=1;
    cin >> x;
    for(int i = x; i > 0; i--){
        factoriel = factoriel *i;
    }
    cout<< factoriel ;
    return 0;
}
