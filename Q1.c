#include <stdio.h>
 
void modifyValue(int num) {
    num = 20; // This changes the local copy of 'num', not the original one.
}
 
int main() {
    int number = 10;
    printf("Before function call: %d\n", number);
 
    modifyValue(number); // Call by value
 
    printf("After function call: %d\n", number);
    return 0;
}
