#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);

if (N == 0) {
    printf("Nol\n");
}

else if (N <= 9) {
    printf("Satuan\n");
}

else if (N <= 19) {
    printf("Belasan\n");
}

else if(N <= 99) {
    printf("Puluhan\n");
}

else {
   printf("Anda Menginput Melebihi Limit Bilangan\n"); 
}

return 0;
}