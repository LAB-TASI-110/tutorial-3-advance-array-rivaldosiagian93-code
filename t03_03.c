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
    int max = nilai[0];
    int min = nilai[0];

    for(int i = 0; i < n; i++) {
        if(nilai[i] >= rata) {
            count++;
        }
        if(nilai[i] > max) {
            max = nilai[i];
        }
        if(nilai[i] < min) {
            min = nilai[i];
        }
    }

    int range = max - min;

    printf("%d\n", jumlah);
    printf("%.2f\n", rata);
    printf("%d\n", count);
    printf("%d\n", range);

    return 0;
}