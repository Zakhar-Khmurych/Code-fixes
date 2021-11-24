#include <stdio.h>
#include <iostream>
using namespace std;

int MAX_PURCHASE;

int main() {
    cin >> MAX_PURCHASE;

    int i = 0;
    int total = 0;
    int purchase[] = { 1500, 100, 10, 50, 40 };

    for (int price: purchase) {
        total = total + purchase[i];
        i++;
    }

    if (total <= MAX_PURCHASE) {
        cout << total;
    }
}
