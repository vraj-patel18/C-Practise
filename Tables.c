# include<stdio.h>

void storetable(int arr[][10], int a, int number);

int main(){
  int num , n;
  printf("Enter Total number for tables:");
  scanf("%d",&num);
  int table[num][10];

  for(int i=0;i<num;i++){
    printf("Enter Table's Number:");
    scanf("%d",&n);
    storetable(table,i,n);
  }
   for(int i=0;i<num;i++){
    for(int j=0;j<10;j++){
        printf("%d \t",table[i][j]);
    }
    printf("\n");
   }

  return 0;
}

void storetable(int arr[][10], int a, int number){
  int i;

  for(i=0;i<10;i++){
    arr[a][i]= (i+1)*number;
  }
}