//Author Hristo Dimitrov
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    double de,a,b,c,x1,x2;
    cin >> a >> b >> c;
    if (a == 0) {
        cout << "uravnenieto ne e kvadratno" << endl;
        x1 = -c / b;
        cout << x1;
    }
    else {
        de = b*b - 4 * a*c;
        if (de < 0) {
            cout << "nqma reshenie v realni chisla" << endl;
        } else if (de == 0) {
            x1 = (-b + sqrt(de)) / (2 * a);
            cout << "x1,2 = " << x1;
        } else {
            x1 = (-b + sqrt(de)) / (2 * a);
            x2 = (-b - sqrt(de)) / (2 * a);
            cout << x1 << endl << x2 << endl;
        }
    }
    return 0;
}

