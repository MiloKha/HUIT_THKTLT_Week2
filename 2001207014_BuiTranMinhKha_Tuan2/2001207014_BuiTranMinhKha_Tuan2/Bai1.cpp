#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 100
#define _CRT_SECURE_NO_WARNINGS

void taoMangNgauNhien(int a[], int n, int k);
void taoMangChan(int a[], int n);
int timKiemTuLin(int a[], int n, int x);
void sapXepInterchange(int a[], int n, int tangDan);
void sapXepSelection(int a[], int n);
void sapXepQuick(int a[], int low, int high);
int timKiemNhiPhan(int a[], int n, int x);

int main() {
    srand((unsigned int)time(NULL));
    int a[MAX_SIZE];
    int n = rand() % (MAX_SIZE - 15) + 15; // So phan tu >= 15
    taoMangNgauNhien(a, n, 100); // Tao mang ngau nhien tu 0 den 100

    int luaChon, x, pos;

    do {
        printf("\nMenu:\n");
        printf("1. Tao mang mot chieu ngau nhien\n");
        printf("2. Tao mang chua toan so chan\n");
        printf("3. Tim kiem x trong a (Linear Search)\n");
        printf("4. Sap xep a (Interchange Sort)\n");
        printf("5. Tim kiem x trong a (Binary Search)\n");
        printf("6. Sap xep a (Selection Sort)\n");
        printf("7. Sap xep a (Quick Sort)\n");
        printf("0. Thoat\n");
        printf("Chon mot tuy chon: ");
        scanf_s("%d", &luaChon);

        switch (luaChon) {
        case 1:
            taoMangNgauNhien(a, n, 100);
            printf("Mang ngau nhien da duoc tao.\n");
            break;
        case 2:
            taoMangChan(a, n);
            printf("Mang chua toan so chan da duoc tao.\n");
            break;
        case 0:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long thu lai.\n");
        }

    } while (luaChon != 0);

    return 0;
}

void taoMangNgauNhien(int a[], int n, int k) {
    for (int i = 0; i < n; i++) {
        a[i] = rand() % (k + 1);
    }
}
void taoMangChan(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = (rand() % 50) * 2; // So chan tu 0 den 100
    }
}