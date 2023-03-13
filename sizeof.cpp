#include <iostream>

using namespace std;


int main(){
    double arr[]{123, 323, 3201};

    // cout << sizeof(arr) << endl;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << endl;
    }
    
}