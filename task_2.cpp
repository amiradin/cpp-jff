#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));
    const int ARR_SIZE = 10; 
    int arr[ARR_SIZE];

    /* Filling */

    bool already_in_array;
    int randomValue;
    for (int i = 0; i < ARR_SIZE; i++) {

        already_in_array = false;
        randomValue = rand() % 20;

        for (int j = 0; j < i; j++) {
            if (arr[j] == randomValue) {
                already_in_array = true;
                break;
            }
        }

        if (!already_in_array) {
            arr[i] = randomValue;
        } else {
            i--;
        }
    
    }
    
    /* Output */

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << arr[i] << " | ";
    }
    
    return 0;
}