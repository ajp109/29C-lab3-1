#include "mbed.h"

int main() {

    int x = 65;
    char a = 65;
    int y = 'A';
    char b = 'A';

    printf("The value of a as an integer is %d\n", a);
    printf("The value of b as an integer is %d\n", b);
    printf("The value of x as an integer is %d\n", x);
    printf("The value of y as an integer is %d\n", y);

    printf("The value of a as a character is %c\n", a);
    printf("The value of b as a character is %c\n", b);
    printf("The value of x as a character is %c\n", x);
    printf("The value of y as a character is %c\n", y);

    while (true) {
        sleep();
    }
}
