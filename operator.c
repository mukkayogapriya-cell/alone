#include <stdio.h>

int main() {
    int a, b;
    int x = 10;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // 1. Arithmetic Operators
    printf("\n--- Arithmetic Operators ---\n");
    printf("Addition       : %d + %d = %d\n", a, b, a + b);
    printf("Subtraction    : %d - %d = %d\n", a, b, a - b);
    printf("Multiplication : %d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("Division       : %d / %d = %d\n", a, b, a / b);
        printf("Modulus        : %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division and Modulus cannot be performed with 0\n");
    }

    // 2. Relational Operators
    printf("\n--- Relational Operators ---\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    // 3. Logical Operators
    printf("\n--- Logical Operators ---\n");
    printf("(a > 0 && b > 0) : %d\n", a > 0 && b > 0);
    printf("(a > 0 || b > 0) : %d\n", a > 0 || b > 0);
    printf("!(a > 0)         : %d\n", !(a > 0));

    // 4. Assignment Operators
    printf("\n--- Assignment Operators ---\n");

    x = 10;
    printf("x = 10   : %d\n", x);

    x += 5;
    printf("x += 5   : %d\n", x);

    x -= 3;
    printf("x -= 3   : %d\n", x);

    x *= 2;
    printf("x *= 2   : %d\n", x);

    x /= 2;
    printf("x /= 2   : %d\n", x);

    x %= 4;
    printf("x %%= 4   : %d\n", x);

    // 5. Increment and Decrement
    printf("\n--- Increment / Decrement Operators ---\n");

    x = 10;
    printf("Initial x : %d\n", x);
    printf("++x        : %d\n", ++x);
    printf("x++        : %d\n", x++);
    printf("After x++  : %d\n", x);
    printf("--x        : %d\n", --x);
    printf("x--        : %d\n", x--);
    printf("After x--  : %d\n", x);

    // 6. Bitwise Operators
    printf("\n--- Bitwise Operators ---\n");
    printf("a & b  : %d\n", a & b);
    printf("a | b  : %d\n", a | b);
    printf("a ^ b  : %d\n", a ^ b);
    printf("~a     : %d\n", ~a);
    printf("a << 1 : %d\n", a << 1);
    printf("a >> 1 : %d\n", a >> 1);

    // 7. Conditional / Ternary Operator
    printf("\n--- Conditional Operator ---\n");
    printf("Greater number: %d\n", (a > b) ? a : b);

    // 8. sizeof Operator
    printf("\n--- sizeof Operator ---\n");
    printf("Size of int    : %zu bytes\n", sizeof(int));
    printf("Size of float  : %zu bytes\n", sizeof(float));
    printf("Size of double : %zu bytes\n", sizeof(double));
    printf("Size of char   : %zu byte\n", sizeof(char));

    return 0;
}