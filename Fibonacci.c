# include <stdio.h>

void fib(int n);

int main(){
    fib(10);
    return 0;
}

void fib(int n){
  int a=0,b=1,s,i=2;
  printf("%d %d ",a,b);
  while(i<=n){
    s=a+b;
    a=b;
    b=s;
    printf("%d ",b);
    i++;
  }
}