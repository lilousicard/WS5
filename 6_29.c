#include <stdio.h>
#include <string.h>

void IntToReverseBinary(int integerValue, char binaryValue[]){
    int i =0;
    while (integerValue>0){
        binaryValue[i] = integerValue%2 == 1 ? '1' : '0';
        integerValue = integerValue/2;
        i++;
    }
}
void StringReverse(char inputString[], char reversedString[]){
    int len = strlen(inputString);
    int index = 0;
    for (int i = len-1; i >= 0; --i) {
        reversedString[index++] = inputString[i];
    }
}

int main() {
    int input;
    char binaryValue[50];
    char reverseB[50];
    for (int i = 0; i<50; i++){
        binaryValue[i]='\0';
        reverseB[i]='\0';
    }
    scanf("%d" ,&input);
    IntToReverseBinary(input, reverseB);
    StringReverse(reverseB, binaryValue);
    printf("%s\n", binaryValue);
    return 0;
}
