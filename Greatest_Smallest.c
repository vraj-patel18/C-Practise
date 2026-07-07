# include<stdio.h>

void gnum(int arr[], int n);
void snum(int arr[], int n);

int main(){
  int num[7]={19,34,87,46,37,94,18};
  int n= sizeof(num) / sizeof(num[0]);
  gnum(num, n);
  snum(num, n);

  return 0;
}

void gnum(int arr[] ,int n){
  int i ,l;

  l=arr[0];
  
  for(i=1;i<n;i++){
    if(arr[i]>l){
      l=arr[i];
    }
    else{
      continue;
    }
  }
  printf("The largest Number is: %d \n",l);
}

void snum(int arr[] ,int n){
  int i ,l;

  l=arr[0];
  
  for(i=1;i<n;i++){
    if(arr[i]<l){
      l=arr[i];
    }
    else{
      continue;
    }
  }
  printf("The largest Number is: %d \n",l);
}