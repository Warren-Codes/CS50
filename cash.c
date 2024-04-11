#include <stdio.h>

int coinsReturned(int n);

int main(void) {
        int change;

    do {
        printf("Enter how much change, in pence, you require: ");
        scanf("%i", &change);

        if(change > 0) {
            int numCoins = coinsReturned(change);
            printf("Number of coins returned: %d\n", numCoins);

        }
    } while (change < 1);
    return 0;
}


int coinsReturned(int n) {
    int coinCount = 0;
    // The left-hand column divides n by the value of the appropriate coin and assigns the int number to coinCount
    // The right-hand column finds the remainder by using the modulo and updates n to the new value of the remainder - this is the updated change
    coinCount += n / 200; n %= 200;
    coinCount += n / 100; n %= 100;
    coinCount += n / 50; n %= 50;
    coinCount += n / 20; n %= 20;
    coinCount += n / 10; n %= 10;
    coinCount += n / 5; n %= 5;
    coinCount += n / 2; n %= 2;
    coinCount += n; // Remaining 1p coins
    return coinCount;

}

