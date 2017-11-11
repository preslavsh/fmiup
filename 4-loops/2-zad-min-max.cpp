#include <iostream>

using namespace std;

int main() {
    int x,n,minn,maxx;
    cin>>n;
    int first = 0;
    cin >> first;
    minn = first;
    maxx = first;
    for(int i=0; i < n; i++)
    {
        cin>>x;
        if(x<minn)minn=x;
        if(x>maxx)maxx=x;
    }
    cout<<"Min = "<<minn<<endl;
    cout<<"Max = "<<maxx<<endl;
    return 0;
}
