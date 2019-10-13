#include <stdio.h>

int main() {
    printf("Let's talk\n");
    char userimp[100];
    gets(userimp);
    printf("%s to you too. What's your name?", userimp);
    return 0;
}