#include <stdio.h>

int main() {
    int a, b, choice;

    printf("Nhap vao hai so nguyen: ");
    scanf("%d %d", &a, &b);

    do {
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("%d + %d = %d\n", a, b, a + b);
                break;
            case 2:
                printf("%d - %d = %d\n", a, b, a - b);
                break;
            case 3:
                printf("%d * %d = %d\n", a, b, a * b);
                break;
            case 4:
                if (b == 0) {
                    printf("Loi: Khong the chia cho 0!\n");
                } else {
                    printf("%d / %d = %.2f\n", a, b, (float)a / b);
                }
                break;
            case 5:
                printf("Tam biet!\n");
                break;
            default:
                printf("Chon khong hop le. Vui long chon lai!\n");
        }
    } while (choice != 5);

    return 0;
}
