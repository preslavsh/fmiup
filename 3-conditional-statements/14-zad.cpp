//Author Toni Stoqnov

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a < 0 || a>100)
	{
		cout << "wrong cin" << endl;
	}
	else if (a >= 0 && a <= 10 || a >= 20 && a <= 100)
	 {
		switch (a)
		{
            case 0: cout << "zero" << endl; break;
            case 10:cout << "ten" << endl; break;
            case 20:cout << "twenty" << endl; break;
            case 30:cout << "thirty" << endl; break;
            case 40:cout << "forty" << endl; break;
            case 50:cout << "fifty" << endl; break;
            case 60:cout << "sixty" << endl; break;
            case 70:cout << "seventy" << endl; break;
            case 80:cout << "eighty" << endl; break;
            case 90:cout << "ninety" << endl; break;
            case 100:cout << "one hundred" << endl; break;
			return 0;
		}
		int c = a / 10;
		switch (c)
		{
            case 2:cout << "twenty "; break;
            case 3:cout << "thirty "; break;
            case 4:cout << "forty "; break;
            case 5:cout << "fifty "; break;
            case 6:cout << "sixty "; break;
            case 7:cout << "seventy "; break;
            case 8:cout << "eighty "; break;
            case 9:cout << "ninety "; break;
		}
		int b = a % 10;
		switch (b)
		{
            case 1: cout << "one" << endl; break;
            case 2: cout << "two" << endl; break;
            case 3: cout << "three" << endl; break;
            case 4: cout << "four" << endl; break;
            case 5: cout << "five" << endl; break;
            case 6: cout << "six" << endl; break;
            case 7: cout << "seven" << endl; break;
            case 8: cout << "eight" << endl; break;
            case 9: cout << "nine" << endl; break;
		}
    }
	else
	{
		switch (a)
		{
		case 11:cout << "eleven" << endl; break;
		case 12:cout << "twelve" << endl; break;
		case 13:cout << "thirteen" << endl; break;
		case 14:cout << "fourteen" << endl; break;
		case 15:cout << "fifteen" << endl; break;
		case 16:cout << "sixteen" << endl; break;
		case 17:cout << "seventeen" << endl; break;
		case 18:cout << "eighteen" << endl; break;
		case 19:cout << "nineteen" << endl; break;
		}
	}
	return 0;
}
