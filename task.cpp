#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));
    const int ARR_SIZE = 10; 
    int arr[ARR_SIZE];
    int randNum;

    /* Filling */

    for (int i = 0; i < ARR_SIZE; i++) {
        randNum = rand() % 20;
        for (int j = 0; j < ARR_SIZE; j++) {
            if (arr[j] != randNum){
                continue;
            } else {
                while (arr[j] == randNum) {
                    randNum = rand() % 20;
                }
            }
        }
        arr[i] = randNum;
    }
    
    /* Output */

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << arr[i] << " | ";
    }
    
    return 0;
}