#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	Task();
	//Task2();
	//TaskDZ();
}
int Task() {
    int count;
    char symbol;

    printf("¬ведите количество символов: ");
    scanf("%d", &count);
    printf("¬ведите символ: ");
    scanf(" %c", &symbol);
    for (int i = 1; i <= count; i++) {
        putchar(symbol);
    }
    putchar('\n');
    putchar('+');
    for (int i = 1; i <= count; i++) {
        putchar(symbol);
    }
    putchar('+');
    putchar('\n');
    char symbol2;
    printf("¬ведите второй символ: ");
    scanf(" %c", &symbol2);
    for (int i = 1; i <= count / 2; i++) {
        putchar(symbol);
    }
    for (int i = 1; i <= count - count / 2; i++) {
        putchar(symbol2);
    }
    putchar('\n');
    for (int i = 1; i <= count; i++) {
        putchar(symbol);
        putchar('!');
    }
    putchar('\n');

    return 0;
}
int Task2() {
    int m, n;
    long long s = 0;
    int k = 0;

    printf("¬ведите m и n: ");
    scanf("%d %d", &m, &n);

    for (int i = m; i <= n; i++) {
        s += i;
        k++;
        printf("¬ыполнено %d раз\n", k);
    }

    printf("–езультат: %lld\n", s);

    return 0;
}
int Task3() {
    int n, m;

    printf("¬ведите степень n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        long long result = (long long)pow(2, i);
        printf("2^%d = %lld\n", i, result);
    }
    long long final_result = (long long)pow(2, n);
    if (final_result >= 1024) {
        printf("–езультат: %.0fK\n", final_result / 1024.0);
    }
    else {
        printf("–езультат: %lld\n", final_result);
    }
    printf("\n¬ведите максимальное значение m: ");
    scanf("%d", &m);

    for (int i = 0; ; i++) {
        double result = pow(2, i);
        if (result > m) break;

        if (result >= 1024) {
            printf("2^%d = %.1fK\n", i, result / 1024.0);
        }
        else {
            printf("2^%d = %.1f\n", i, result);
        }
    }

    return 0;
}
int Task4() {
    double x, x_start, x_end, step;
    x_start = 0.2;
    x_end = 2.2;
    printf("‘ункци€: y = 1.8x^2 - sin(10x)\n");
    printf("ƒиапазон: [0.2; 2.2]\n");
    printf("¬ведите шаг табул€ции: ");
    scanf("%lf", &step);
    printf("\n_____________________\n");
    printf("|  x  |   f(x)   |\n");
    printf("|-----|----------|\n");

    for (x = x_start; x <= x_end + 0.0001; x += step) {
        double y = 1.8 * x * x - sin(10 * x);
        printf("| %4.1f | %7.4f |\n", x, y);
    }
    printf("|_____|__________|\n");

    return 0;
}
int TaskDZ() {
    double a, result = 1;
    int n;
    printf("¬ведите основание a: ");
    scanf("%lf", &a);
    printf("¬ведите степень n: ");
    scanf("%d", &n);
    int abs_n = n < 0 ? -n : n;
    for (int i = 1; i <= abs_n; i++) {
        result *= a;
    }
    if (n < 0) {
        result = 1 / result;
    }

    printf("%.2f^%d = %.6f\n", a, n, result);

    return 0;
}