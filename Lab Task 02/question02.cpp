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
