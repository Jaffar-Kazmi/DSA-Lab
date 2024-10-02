#include <iostream>
using namespace std;
int main()
{
    int age[10], max = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter age : ";
        cin >> age[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (age[i] > max)
            max = age[i];
    }
    cout << "Eldest student is " << max << " years old.";
    return 0;
}