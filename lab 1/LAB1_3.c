#include <stdio.h>

void main() {
    char character;

    printf("enter char:");
    scanf("%c",&character);

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
        character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
        printf("enter char is voval:");
    } else {
    	printf("enter char is not a voval:");
        
    }

    return 0;
}

