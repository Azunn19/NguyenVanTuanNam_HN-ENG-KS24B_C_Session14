#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    printf("Nhap xau ky tu bat ky: ");
    gets(str);
    printf("Xau vua nhap: %s",str);
    printf("\nDo dai chuoi: %d",strlen(str));
    
	return 0;
}

