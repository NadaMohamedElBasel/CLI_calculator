#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculator.h"

int main(int argc, char* argv[]) {
    if (argc != 4) {
        printf("Usage: ./calc <add|sub|mul|div> <a> <b>\n");
        return 1;
    }

    char* op = argv[1];
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);

    if (strcmp(op, "add") == 0)
        printf("%d\n", add(a, b));
    else if (strcmp(op, "sub") == 0)
        printf("%d\n", sub(a, b));
    else if (strcmp(op, "mul") == 0)
        printf("%d\n", mul(a, b));
    else if (strcmp(op, "divide") == 0)
        printf("%f\n", divide((float)a, (float)b));
    else
        printf("Invalid operation.\n");

    return 0;
}
// int main (void)
// {
//     int a = 10, b = 5;
//     printf("Add: %d\n", add(a, b));
//     printf("Sub: %d\n", sub(a, b));
//     printf("Mul: %d\n", mul(a, b));
//     printf("Div: %.2f\n", divide((float)a, (float)b));
//     return 0;
// }