#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));
    const int ARR_SIZE = 10; 
    int arr[ARR_SIZE];

    /* Filling */

    for (int i = 0; i < ARR_SIZE; i++) {
        arr[i] =  rand() % 20;
        for (int j = 0; j < ARR_SIZE; j++) {
            if (j == i) {
                continue;
            }
            if (arr[j] == arr[i]){
                i--;
                break;
            }
        }
    }
    
    /* Output */

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << arr[i] << " | ";
    }
    
    return 0;
}