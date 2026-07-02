# include<stdio.h>
# include<math.h>

int arm(int c,int n); //Done using recursion
int countnum(int n); //Done using recursion

int main() {
        int n,num,flag,sum;
        printf("Enter The Number:");
        scanf("%d",&n);

        num=countnum(n);
        sum=arm(num,n);
        if(sum==n){
                printf("The number %d is an Armstrong Number .",n);
        }
        else{
                printf("The number %d is NOT an Armstrong Number .",n);
        }
        return 0;
}

int countnum(int n){  //To count the number of digits
        if(n==0){
                return 0;
        }
        int a= 1+countnum(n/10);
        return a;
}

int arm(int c,int n){  //
        if(n==0){
                return 0 ;
        }
        int a,b,r;
        int flag;
        r=n%10;
        a=arm(c,n/10); //Adds prevision sum to the last remainder
        b=pow(r,c)+a;
        if(b==n){
        return b;
        }
}