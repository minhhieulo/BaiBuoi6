#include <stdio.h> 
#include <string.h> 
int main(){ 
    char a[100];
    printf("Nhap vao chuoi ky tu: "); 
    gets(a);
    char x;
    printf("Nhap vao ky tu muon tim:"); 
    scanf("%c",&x);
    int dem=0;
    for(int i=0; i<strlen(a); i++){
        if(a[i]==x){//neu a[i] = x thi tang bien dem len 1
            dem++;
        }
    }
    if(dem>0){
        printf("So lan xuat hien cua ky tu %c trong chuoi la: %d",x, dem);
    }else{
        printf("Ky tu %c khong co trong chuoi!",x);
    }
}
