# include<stdio.h>


//star

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(int i=1 ; i<=rows ; i++ ){
        for(int j = 1 ; j <= rows-i ; j++ ){
                printf(" ");
        }
        for(int k =1 ; k<= 2*i -1 ; k++ ){
                printf("*");
        }
        printf("\n");
        }
    for(int i=rows-1 ; i>=1 ; i-- ){
        for(int j=1 ; j<= rows-i ; j++ ){
                printf(" ");
        }
        for(int k= 1 ; k<= 2*i -1 ; k++ ){
                printf("*");
        }
        printf("\n");
        }  
    return 0;
}


//1234321

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(int i=1 ; i<=rows ; i++ ){
        for(int j = 1 ; j <= rows-i ; j++ ){
                printf(" ");
        }
        for(int k =1 ; k<= 2*i -1 ; k++ ){
                if(k<=i){
                        printf("%d",k);
                }
                else{
                        printf("%d",2*i-k);
                }
        }
        printf("\n");
        }
    for(int i=rows-1 ; i>=1 ; i-- ){
        for(int j=1 ; j<= rows-i ; j++ ){
                printf(" ");
        }
        for(int k= 1 ; k<= 2*i -1 ; k++ ){
                if(k<=i){
                        printf("%d",k);
                }
                else{
                        printf("%d",2*i-k);
                }
        }
        printf("\n");
        }  
    return 0;
}


//ABCDCBA

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(int i=1 ; i<=rows ; i++ ){
        for(int j = 1 ; j <= rows-i ; j++ ){
                printf(" ");
        }
        for(int k =1 ; k<= 2*i -1 ; k++ ){
                if(k<=i){
                        printf("%c",k+64);
                }
                else{
                        printf("%c",2*i-k+64);
                }
        }
        printf("\n");
        }
    for(int i=rows-1 ; i>=1 ; i-- ){
        for(int j=1 ; j<= rows-i ; j++ ){
                printf(" ");
        }
        for(int k= 1 ; k<= 2*i -1 ; k++ ){
                if(k<=i){
                        printf("%c",k+64);
                }
                else{
                        printf("%c",2*i-k+64);
                }
        }
        printf("\n");
        }  
    return 0;
}