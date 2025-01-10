#include <iostream>

using namespace std;

const long long MOD=1000000007;

int main()
{
    int a, b;
    cin >> a >> b;
    int c=1;
    int i=0;
    while(c < b)
    {
        if((c * a) % b == 1)
        {
            cout << c;
            i++;
            c=-1;
            break;
        }
        else
        {
            c++;
        }
    }
    if(i==0)
    {
        cout << "-1";
    }
    return 0;
}