//complete

#include<iostream>

int main() {

    int Number, r, rev = 0;
    int *numPoint;

    printf("Enter a number:");
    scanf("%d", &Number);

    numPoint = &Number;

    while (*numPoint > 0) {
        r = *numPoint % 10;
        rev = rev * 10 + r;
        *numPoint = *numPoint / 10;
    }

    printf("Reverse number:%d", rev);

    return 0;
}
