#include <stdio.h>
#include <string.h>

int main() {
    char data[50];
    int i, len;
    fgets(data, 50, stdin);
    data[strlen(data)-1] = '\0';
    while (strcmp(data, "Done") != 0 && strcmp(data, "done") != 0 && strcmp(data, "d") != 0) {
        len = strlen(data);
        for (i = len-1; i >= 0; --i) {
            printf("%c", data[i]);
        }
        printf("\n");
        fgets(data, 50, stdin);
        data[strlen(data)-1] = '\0';
    }
    return 0;
}
