#include <stdio.h>
#include <iostream>
using namespace std;

int MAX_VALUE;


int main() {
    printf("Begin\n");
    cin >> MAX_VALUE;

    for (int i = 0; i < MAX_VALUE; i++) {
        cout << "i: " << i << "\n";
    }

    printf("The end\n");
}
