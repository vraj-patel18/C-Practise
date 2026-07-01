# include<stdio.h>
# include<math.h>

int arm(int n);
int countnum(int n);

int main() {
        int n;
        printf("Enter The Number:");
        scanf("%d",&n);
        int num
        return 0;
}

int countnum(int n){
        if(n==0){
                return 0;
        }
        int a;
        a= 1+countnum(n-1);
        return a;
}

int arm(int c,int n){ 
        if(num==0){
                return 0 ;
        }
        int a,b,r;
        int flag;
        r=n%10
        a=arm(n/10)
        b=pow(r,c)+a;
        if(a==n){
                return flag=1;
        }
        else{
                return flag=2;
        }
}