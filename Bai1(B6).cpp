#include <stdio.h>
void Nhap(int a[], int N){
    for (short i = 0; i < N; i++) scanf("%d", &a[i]);
}

void Xuat(int a[], int N){
    for(short i = 0; i < N; i++)  printf("%d ", a[i]);  
    printf("\n");
}

int main(void){
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int a[n];
    printf(">>Nhap phan tu:\n");
    Nhap(a, n);
    printf(">>Mang vua nhap:\n"); 
    Xuat(a, n);
    return 0; 
}
