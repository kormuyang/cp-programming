#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int cnt = 0;
    for(int i = 2; i * i <= a; i++)
    {
        bool prime = true;
        // check i is prime or not
        for (int j = i; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if(prime)
        {
            cnt += 1;
        }
    }
    cout<<cnt;
    return 0;
}