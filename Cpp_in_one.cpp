#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age :";
    cin >> age;
    if (age > 150)
    {
        cout << "Invalid age";
    }
    else if (age >= 18 || age < 1)
    {
        cout << "You can Vote";
    }
    else
    {
        cout << "You cannot vote";
    }

    return 0;
}
