#include<stdio.h>
#include <string.h>

void reverseString(char str[], int start, int end) {
//	dieu kien dung 
    if (start >= end) {
        return;
    }

//  doi vi tri 
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

//	de quy giua  
    reverseString(str, start + 1, end - 1);
}
int main(){
	char str[100];

//  nhap chuoi 
    printf("Nhap chuoi: ");
    scanf("%99[^\n]", str); 

    int length = strlen(str); // tinh do dai 

//  goi ham 
    reverseString(str, 0, length - 1);

  
    printf("Chuoi dao nguoc: %s ", str);
}
