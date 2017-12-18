// Author Mitko
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int dec_number = 51;
    int left = 0;
    while(dec_number){
        if(dec_number < 16 ) left = dec_number;
        else left = dec_number%16;

        if(left < 10) cout << left;
        else {
            switch(left){
                case 10: cout << "A" << endl;
                case 11: cout << "B" << endl;
                case 12: cout << "C" << endl;
                case 13: cout << "D" << endl;
                case 14: cout << "E" << endl;
                case 15: cout << "F" << endl;
            }
        }
        dec_number/=16;
    }
    return 0;
}
