#include <stdio.h>

void rightTriangle(int triangleHeight);
void rightRow(int rowLength);

int main(void) {
    int triangleHeight;

    do {
        printf("Enter how many blocks high you want your triangle: ");
        scanf("%i", &triangleHeight);

        if(triangleHeight > 0 && triangleHeight < 9) {
            rightTriangle(triangleHeight);
        }
    } while (triangleHeight < 1 || triangleHeight > 8);
}

void rightTriangle(int triangleHeight) {
    for(int i = 0; i < triangleHeight; i++) {
        for (int j = 0; j < triangleHeight -i; j++) {
            printf(" ");
        }
        rightRow(i + 1);
    }
}

void rightRow(int rowLength) {
    for(int i = 0; i < rowLength; i++) {
        printf("#");
    }
    printf("\n");
}
