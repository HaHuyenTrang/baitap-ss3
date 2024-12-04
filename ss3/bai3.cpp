#include<stdio.h>

int main(){
	  int n;

//	nhap so lan hien thi fibonacci
    printf("Nhap so lan hien thi so fibonacci: ");
    scanf("%d", &n);

//    Biet chuoi so Fibonacci bat dau voi F(0) = 0, F(1) = 1 và F(n) = F(n-1) + F(n-2) cho n >= 2.
    int f0 = 0, f1 = 1;

    printf("Chuoi Fibonacci %d la: ", n);


    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", f0); 
        } else if (i == 1) {
            printf("%d ", f1); 
        } else {
            int next = f0 + f1; 
            printf("%d ", next);


            f0 = f1;
            f1 = next;
        }
    }
}
