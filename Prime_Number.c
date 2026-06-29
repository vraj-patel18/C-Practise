# include<stdio.h>

int main() {
        int i,n;
        printf("Enter Any Number:");
        scanf("%d",&i);
        for(n=2;n <= i / 2;n++){
                if(i%n==0){
                        printf("The Number %d is not a Prime Number.",i);
                        break;
                }
                else if(n==i/2){
                        printf("The Number %d is a Prime Number.",i);
                }
        }
        return 0;
}