#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* findCharsOrDigitSum(const char* input1, int input2) {
    char* result = (char*)malloc(20 * sizeof(char)); 
    int sum = 0;
    int hasAlpha = 0;

    if (input2 == 0) {
        for (int i = 0; i < strlen(input1); i++) {
            if (isdigit(input1[i])) {
                sum += input1[i] - '0';
            }
        }
        if (sum == 0) {
            strcpy(result, "ZERO");
        } else {
            sprintf(result, "%d", sum);
        }
    } else if (input2 == 1) {
        int index = 0;
        for (int i = 0; i < strlen(input1); i++) {
            if (isalpha(input1[i])) {
                result[index++] = input1[i];
                hasAlpha = 1;
            }
        }
      result[index] = '\0';
    }
    return result;
}

int main() {
    char input1[] = "1W213p4506";
    int input2 = 1;
    
    char* output = findCharsOrDigitSum(input1, input2);
    printf("Output: %s\n", output);
    return 0;
}