#include <stdio.h>

void square(int length);
void row(int rowLength);
void triangle(int triangleHeight);

int main(void) {
    int rowLength;
    printf("Enter how many blocks you want in your row: ");
    scanf("%i", &rowLength);
    row(rowLength);

    printf("\n");

    int squareHeight;
    printf("Enter how many blocks high you want your square: ");
    scanf("%i", &squareHeight);
    square(squareHeight);

    printf("\n");

    int triangleHeight;
    printf("Enter how many blocks high you want your triangle: ");
    scanf("%i", &triangleHeight);
    triangle(triangleHeight);

    return 0;
}

void row(int rowLength) {
    for (int i = 0; i < rowLength; i++) {
        printf("#");
    }
    printf("\n");
}

void square(int length) {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            printf("#");
        }
        printf("\n");
    }
}

void triangle(int triangleHeight) {
    for(int i = 0; i < triangleHeight; i++) {
        row(i + 1);
    }
}
