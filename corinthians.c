#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    float fatura;
    
    printf("Digite sua fatura: ");
    scanf("%f", &fatura);

    if (fatura <= 1000.00) {
        printf("Não haverá cashback\n");
    }

    if (fatura > 1000.00 && fatura <= 4000.00) {
        printf("Cashback de 1%%\n");
    }

    if (fatura > 4000.00 && fatura <= 8000.00) {
        printf("Cashback de 2%%\n");
    }

    if (fatura > 8000.00) {
        printf("Cashback de 5%%\n");
    }

    return 0;
}








