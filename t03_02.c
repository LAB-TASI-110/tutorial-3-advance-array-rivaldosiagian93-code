#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nilai[n];
    int jumlah = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &nilai[i]);
        jumlah += nilai[i];
    }

    double rata = (double)jumlah / n;
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(nilai[i] >= rata) {
            count++;
        }
    }

    printf("%d\n", jumlah);
    printf("%.2f\n", rata);
    printf("%d\n", count);

    return 0;
}