#include <stdio.h>

int main() {
    int arr[100];
    int size = 0;
    int luaChon, phanTu, chiSo, min, max, tong;
    
    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra gia tri cac phan tu trong mang\n");
        printf("3. Tim gia tri nho nhat va lon nhat trong mang\n");
        printf("4. In ra tong cua tat ca cac phan tu\n");
        printf("5. Them mot phan tu vao cuoi mang\n");
        printf("6. Xoa phan tu tai mot vi tri cu the\n");
        printf("7. Sap xep mang (Bubble sort)\n");
        printf("8. Tim kiem phan tu (Linear search)\n");
        printf("9. In ra tat ca so nguyen to trong mang\n");
        printf("10. Sap xep mang theo thu tu tang dan (Selection sort)\n");
        printf("11. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d", &size);
                for (int i = 0; i < size; i++) {
                    printf("Nhap phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                for (int i = 0; i < size; i++) {
                    printf("arr[%d] = %d ", i, arr[i]);
                }
                printf("\n");
                break;

            case 3:
                if (size > 0) {
                    min = arr[0];
                    max = arr[0];
                    for (int i = 1; i < size; i++) {
                        if (arr[i] < min) {
                            min = arr[i];
                        }
                        if (arr[i] > max) {
                            max = arr[i];
                        }
                    }
                    printf("Gia tri nho nhat: %d\n", min);
                    printf("Gia tri lon nhat: %d\n", max);
                }
                break;

            case 4:
                tong = 0;
                for (int i = 0; i < size; i++) {
                    tong += arr[i];
                }
                printf("Tong cac phan tu: %d\n", tong);
                break;

            case 5:
                printf("Nhap phan tu can them: ");
                scanf("%d", &phanTu);
                arr[size] = phanTu;
                size++;
                break;

            case 6:
                printf("Nhap chi so can xoa: ");
                scanf("%d", &chiSo);
                if (chiSo < 0 || chiSo >= size) {
                    printf("Chi so khong hop le\n");
                } else {
                    for (int i = chiSo; i < size - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    size--;
                }
                break;

            case 7:
                for (int i = 0; i < size - 1; i++) {
                    for (int j = 0; j < size - 1 - i; j++) {
                        if (arr[j] > arr[j + 1]) {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                break;

            case 8:
                printf("Nhap phan tu can tim: ");
                scanf("%d", &phanTu);
                chiSo = -1;
                for (int i = 0; i < size; i++) {
                    if (arr[i] == phanTu) {
                        chiSo = i;
                        break;
                    }
                }
                if (chiSo != -1) {
                    printf("Phan tu o chi so %d\n", chiSo);
                } else {
                    printf("Khong tim thay phan tu\n");
                }
                break;

            case 9:
                for (int i = 0; i < size; i++) {
                    int laSoNguyenTo = 1;
                    if (arr[i] < 2) {
                        laSoNguyenTo = 0;
                    } else {
                        for (int j = 2; j <= arr[i] / 2; j++) {
                            if (arr[i] % j == 0) {
                                laSoNguyenTo = 0;
                                break;
                            }
                        }
                    }
                    if (laSoNguyenTo) {
                        printf("%d ", arr[i]);
                    }
                }
                printf("\n");
                break;

            case 10:
                for (int i = 0; i < size - 1; i++) {
                    int minIndex = i;
                    for (int j = i + 1; j < size; j++) {
                        if (arr[j] < arr[minIndex]) {
                            minIndex = j;
                        }
                    }
                    int temp = arr[minIndex];
                    arr[minIndex] = arr[i];
                    arr[i] = temp;
                }
                break;

            case 11:
                printf("Thoat chuong trinh\n");
                break;

            default:
                printf("Lua chon khong hop le\n");
                break;
        }
    } while (luaChon != 11);

    return 0;
}
