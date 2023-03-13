#include <iostream>

using namespace std;
using std::string;

int main(){

    // Initialization

    const int SIZE = 5;

    int arr[SIZE];

    // for (int i = 0, j = 101; i < SIZE; i++, j++)
    // {   
    //     arr[i] = j;
    // }

    // for (int i = 0; i < SIZE; i++)
    // {   
    //     cout << arr[i] << endl;
    // }

    // Array with five values of zero

    int arr2[SIZE] = {0};

    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << endl;
    }   
}