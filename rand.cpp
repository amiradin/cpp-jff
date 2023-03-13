#include <iostream>
#include <ctime>

/* Random digits */

using namespace std;

int main(){


    srand(time(NULL));

    cout << rand() % 100 << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     int randint = rand() % 10;
    //     cout << randint << endl;
    // }

}