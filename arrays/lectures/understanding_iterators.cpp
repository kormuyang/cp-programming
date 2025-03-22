#include <iostream>
#include <vector>

using namespace std;

// data structure
// Hospital 
// - parameter -> Name, Capacity, Location, Staff
// - method -> .heal(), .sleep()

// vector -> data structure
// vector -> .begin(), .end()

int main()
{
    // An iterator is a pointer-like object that points to an element of the STL container.
    vector<string> student_names;
    student_names.push_back("Ohm");
    student_names.push_back("Poom");
    student_names.push_back("Pop");

    vector<string>::iterator itr = student_names.begin();

    // how can we travel through vector's element via iterator
    for (itr = student_names.begin(); itr < student_names.end(); itr++)
    {
        cout << *itr << ' ';
    }
    cout << '\n';
    
    return 0;
}