#include <iostream>

using namespace std;
using std::string;

int main(){
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

        if (already_in_array) {
            i--;
        } else {
            arr[i] = randomValue;
        }
    }

    /* Min value */
    
    int min_value = arr[0];

    for (int i = 0; i < ARR_SIZE; i++) {
        if (min_value > arr[i]) {
            min_value = arr[i];
        }
    }

    /* Output */

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << arr[i] << " | ";
    }
    
    cout << endl << min_value << " <<< min value of array";
}