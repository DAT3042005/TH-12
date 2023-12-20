#include <stdio.h>


void nhap_mang(int arr[], int n, int i) {
    if (i == n) {
        return;
    }
    printf("Nhap phan tu thu %d: ", i + 1);
    scanf("%d", &arr[i]); 
    nhap_mang(arr, n, i + 1);
}

void xuat_mang(int arr[], int n, int i) {
    if (i == n) {
        return;
    }
    printf("%d ", arr[i]);
    xuat_mang(arr, n, i + 1);
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int mang[n]; 
    nhap_mang(mang, n, 0);
    printf("Mang vua nhap la: ");
    xuat_mang(mang, n, 0);

    return 0;
}
