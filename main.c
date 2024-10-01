#include <stdio.h>

int main(void) {
    int num1, num2, num3;
    printf("inserisci il primo numero:");
    scanf("%d", &num1);
    printf("inserisci il secondo numero:");
    scanf("%d", &num2);
    printf("inserisci il terzo numero:");
    scanf("%d", &num3);
    if (num1 > num2)
        if (num1 > num3) {
            printf("il primo numero è maggiore");
        }
    if (num2 > num1)
        if (num2 > num3) {
            printf("il secondo numero è maggiore");
        }
    if (num3 > num1)
        if (num3 > num2) {
            printf("il terzo numero è maggiore");
        }
    return 0;
}
