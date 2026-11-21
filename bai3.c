#include <stdio.h>

int main() {
    double a, b, tich;

    // Nhap so thu nhat
    printf("Nhap so thu nhat: ");
    scanf("%lf", &a);

    // Nhap so thu hai
    printf("Nhap so thu hai: ");
    scanf("%lf", &b);

    // Tinh tich hai so
    tich = a * b;

    // Hien thi ket qua
    printf("Tich hai so la: %g\n", tich);

    return 0;
}