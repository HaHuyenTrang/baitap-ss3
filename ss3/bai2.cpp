#include<stdio.h>

int main(){
	int n, m, sum =0;
	
	printf("nhap so n: ");
	scanf("%d", &n);
	
	printf("nhap so m: ");
	scanf("%d", &m);
	
//	tong cac so tu n den m

    if (n < m) {
        for (int i = n; i <= m; i++) {
            sum += i;
        }
        printf("Tong cac so tu %d den %d la: %d\n", n, m, sum);
    } else {
        printf(" n phai nho hon m");
    }
}
