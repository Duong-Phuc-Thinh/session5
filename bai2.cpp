#include <stdio.h>

int main() {
    int soChoTruoc = 27;
    int soNhap;

    printf("Nhap v�o mot so: ");

    do {
        scanf("%d", &soNhap);
        if (soNhap != soChoTruoc) {
            printf("Sai roi, hay nhap lai: ");
        }
    } while (soNhap != soChoTruoc);

    printf("Ch�c mung ban d� nhap dung so!\n");

    return 0;
}
