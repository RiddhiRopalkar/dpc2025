#include<stdio.h>

int main(){
int n;
int acsum=0;
int exsum=0;
printf("enter n:");
scanf("%d",&n);

if(n>=2 && n<=1000000){
printf("Enter %d numbers:\n", n - 1);

 for (int i = 0; i < n - 1; i++) {
            int x;
            scanf("%d", &x);
            acsum += x;
        }

exsum = n * (n + 1) / 2;

int missing=exsum-acsum;
printf("Missing number: %d\n", missing);
}
else{printf("enter valid n");}

return 0;
}
