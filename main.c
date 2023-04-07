#include <stdio.h>
#include <math.h>

float sum(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    if (y == 0) {
        printf("Error: Cannot divide by zero\n");
        return 0;
    }
    else {
        return x / y;
    }
}

float square_root(float x) {
    if (x < 0) {
        printf("Error: Cannot find square root of negative number\n");
        return 0;
    }
    else {
        return sqrt(x);
    }
}

float power(float x, int m) {
    return pow(x, m);
}

int main() {
    float num1, num2;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("\nSelect an operation:\n");
    printf("1. Sum\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Power\n");

    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("%.2f + %.2f = %.2f\n", num1, num2, sum(num1, num2));
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n", num1, num2, subtract(num1, num2));
            break;
        case 3:
            printf("%.2f * %.2f = %.2f\n", num1, num2, multiply(num1, num2));
            break;
        case 4:
            printf("%.2f / %.2f = %.2f\n", num1, num2, divide(num1, num2));
            break;
        case 5:
            printf("Square root of %.2f = %.2f\n", num1, square_root(num1));
            break;
        case 6:
            printf("%.2f ^ %d = %.2f\n", num1, (int)num2, power(num1, (int)num2));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

