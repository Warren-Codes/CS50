#include <stdio.h>

void printSpaces(int n);
void printHash(int n);
void createTriangle(int height);

int main(void) {

    int triangleHeight;


    do {
        printf("Enter how many blocks high you want your triangle: ");
        scanf("%i", &triangleHeight);


        if(triangleHeight > 0 && triangleHeight < 9) {
            createTriangle(triangleHeight);

        }
    } while (triangleHeight < 1 || triangleHeight > 8);
    return 0;
}

void printSpaces(int n) {
    for (int i = 0; i < n; i++) {
        printf(" ");
    }
}

void printHash(int n) {
    for (int i = 0; i < n; i++) {
        printf("#");
    }
}

void createTriangle(int height) {
    for (int i = 0; i <= height; i++) {
        printSpaces(height - i);
        printHash(i);
        printf("  ");
        printHash(i);
        printf("\n");
    }

}

