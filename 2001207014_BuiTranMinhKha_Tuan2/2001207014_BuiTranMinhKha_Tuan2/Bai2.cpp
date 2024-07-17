#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 100
#define _CRT_SECURE_NO_WARNINGS

typedef struct {
    int phanNguyen;
    int tuSo;
    int mauSo;
} HonSo;

void taoMangHonSo(HonSo b[], int n);
void xuatDanhSachHonSo(HonSo b[], int n);
int soSanhHonSo(HonSo hs1, HonSo hs2);
HonSo chuyenHonSoSangPhanSo(HonSo hs);
HonSo chuyenPhanSoSangHonSo(int tuSo, int mauSo);
HonSo tongHonSo(HonSo hs1, HonSo hs2);
HonSo hieuHonSo(HonSo hs1, HonSo hs2);
HonSo tichHonSo(HonSo hs1, HonSo hs2);
HonSo thuongHonSo(HonSo hs1, HonSo hs2);
void sapXepInterchange(HonSo b[], int n, int tangDan);
void sapXepSelection(HonSo b[], int n);
void sapXepQuick(HonSo b[], int low, int high);
void sapXepHonSo(HonSo b[], int n, int tangDan);

int main() {
    srand((unsigned int)time(NULL));
    HonSo b[MAX_SIZE];
    int n, luaChon;

    printf("Nhap so phan tu (n <= %d): ", MAX_SIZE);
    scanf_s("%d", &n);

    do {
        printf("\nMenu:\n");
        printf("1. Tao mang hon so ngau nhien\n");
        printf("2. Xuat danh sach hon so\n");
        printf("3. So sanh hai hon so\n");
        printf("4. Chuyen hon so sang phan so\n");
        printf("5. Chuyen phan so sang hon so\n");
        printf("6. Tinh toan hai hon so\n");
        printf("7. Sap xep hon so\n");
        printf("0. Thoat\n");
        printf("Chon mot tuy chon: ");
        scanf_s("%d", &luaChon);

        switch (luaChon) {
        case 1:
            taoMangHonSo(b, n);
            printf("Mang hon so da duoc tao.\n");
            break;
        case 2:
            printf("Danh sach hon so:\n");
            xuatDanhSachHonSo(b, n);
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

void taoMangHonSo(HonSo b[], int n) {
    for (int i = 0; i < n; i++) {
        b[i].phanNguyen = rand() % 10; // Phần nguyên từ 0 đến 9
        b[i].tuSo = rand() % 10 + 1;    // Tử số từ 1 đến 10
        b[i].mauSo = rand() % 9 + 2;     // Mẫu số khác 0 và từ 2 đến 10
    }
}

void xuatDanhSachHonSo(HonSo b[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d %d/%d ", b[i].phanNguyen, b[i].tuSo, b[i].mauSo);
    }
    printf("\n");
}

