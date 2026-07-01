# include <stdio.h>

int fact(int n);

int main() {
        int n;
        printf("Enter The Number:");
        scanf("%d",&n);
        printf("The Factorial of %d is %d .",n,fact(n));

        return 0;
}

int fact(int n){ //done using recursion
        if(n==1){ //setting condition/base limit
                return 1;
        }
        int f,f1;
        f1=fact(n-1);
        f=f1*n;
        return f;
}