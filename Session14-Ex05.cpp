#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello world";
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    printf("Chuoi co %d tu\n", count + 1);

    return 0;
}
