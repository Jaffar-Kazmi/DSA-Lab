// Question # 01

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

// Question # 02

#include <iostream>
using namespace std;
int main()
{
    int sor, key;
    cout << "Enter size of arrays : ";
    cin >> sor;
    int *dyarr1 = new int(sor);
    int *dyarr2 = new int(sor);
    int *dyarr3 = new int(sor);
    int *sum = new int(sor);
    cout << "For Array 1 : \n";
    for (int i = 0; i < sor; i++)
    {
        cout << "Enter element : ";
        cin >> dyarr1[i];
    }
    cout << "For Array 2 : \n";
    for (int i = 0; i < sor; i++)
    {
        cout << "Enter element : ";
        cin >> dyarr2[i];
    }
    cout << "For Array 3 : \n";
    for (int i = 0; i < sor; i++)
    {
        cout << "Enter element : ";
        cin >> dyarr3[i];
    }
    for (int i = 0; i < sor; i++)
    {
        sum[i] = dyarr1[i] + dyarr2[i] + dyarr3[i];
    }
    for (int i = 0; i < sor; i++)
    {
        cout << "Sum = " << sum[i] << endl;
    }
    return 0;
}

// Question #03

#include <iostream>
using namespace std;
int main()
{
    int sor, key;
    bool found = false;
    cout << "Enter size of array : ";
    cin >> sor;
    int *dyarr = new int(sor);
    for (int i = 0; i < sor; i++)
    {
        cout << "Enter element : ";
        cin >> dyarr[i];
    }
    for (int i = 0; i < sor; i++)
    {
        cout << dyarr[i] << endl;
    }
    cout << "Enter number you want to search : ";
    cin >> key;
    for (int i = 0; i < sor; i++)
    {
        if (dyarr[i] == key)
        {
            cout << "Number \"" << key << "\" is found at index : " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Number not found.";
    }
    return 0;
}
