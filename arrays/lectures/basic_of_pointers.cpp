#include <iostream>

using namespace std;

int main()
{
    // What will happen if we code "if (array_one == array_two)" ?
    int array_one[] = {0, 1, 2, 3},
        array_two[] = {0, 1, 2, 3};
    
    if (array_one == array_two)
    {
        cout << "Equal!\n";
    }
    else
    {
        cout << "Not the Same!\n";
    }

    return 0;
}