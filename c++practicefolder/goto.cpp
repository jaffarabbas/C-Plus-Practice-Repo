#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5];

    cout << "Your arry : ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Array : " << arr[i] << endl;
    }

    return 0;
}
