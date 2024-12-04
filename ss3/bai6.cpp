#include<stdio.h>

int sumArr(int arr[], int n) {
//    dieu kien dung 
    if (n == 0) {
        return 0;
    }
//    tinh tong 
    return arr[n - 1] + sumArr(arr, n - 1);
}
int main(){
	int arr[5]={1,4,6,9,3};
	int n = sizeof(arr) / sizeof(arr[0]); 

//    goi ham 
    int total = sumArr(arr, n);
    printf("Tong cac phan tu trong mang la: %d\n", total);
}
