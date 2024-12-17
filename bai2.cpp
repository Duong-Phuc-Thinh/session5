#include <stdio.h>

int main() {
    int soChoTruoc = 27;
    int soNhap;

    printf("Nhap vào mot so: ");

    do {
        scanf("%d", &soNhap);
        if (soNhap != soChoTruoc) {
            printf("Sai roi, hay nhap lai: ");
        }
    } while (soNhap != soChoTruoc);

    printf("Chúc mung ban dã nhap dung so!\n");

    return 0;
}
