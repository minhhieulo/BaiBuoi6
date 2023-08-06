#include <stdio.h>
void Nhap(int a[], int N){
    for (short i = 0; i < N; i++) scanf("%d", &a[i]);
}

void Xuat(int a[], int N){
    for(short i = 0; i < N; i++)  printf("%d ", a[i]);  
    printf("\n");
}

void chuxenke(char *a)
{
int n=strlen(a);
for(int i=0;i<n;i++)
{
if(i%2==0)
if((int)a[i]>=97 && (int)a[i]<=122)
a[i]=char((int)a[i]-32);
if(i%2==1)
if((int)a[i]>=65 && (int)a[i]<=90)
a[i]=char((int)a[i]+32);
}

puts(a);
}
int main(void){
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap phan tu:\n");
    Nhap(a, n);
    printf("Mang vua nhap:\n"); 
    Xuat(a, n);
    printf("sau khi chuyen la : \n") ;
    chuxenke(a,n); 
    return 0; 
}
