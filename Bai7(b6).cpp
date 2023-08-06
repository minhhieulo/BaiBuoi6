#include <stdio.h>
#include <string.h>
int kiemTraDoiXung(char ×[]){
   size_t len = strlen(x);
   for (int i=0; i‹len/2; i++){
     if(x[i]!=[len-i-1])
       return 0;
}
return 1;
}
void xoaXuongDong(char x[1){
size_t len = strlen(x);
if(x[len-1]== '\n '){
x[len-1]='\0';
}
}
int main(){
char s [50];
printf("Nhap s = ");
fgets (s, sizeof(s), stdin);
if (kiemTraDoiXung (s)){
printf("Day la chuoi doi xung!");
}else{
printf("Day la chuoi khong doi xung!");
}
}
