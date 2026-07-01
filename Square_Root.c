# include <stdio.h>

float mysqrt(float n);

int main() {
       mysqrt(20.0);

        return 0;
}

float mysqrt(float n){
    float low=0.0,high=n,mid,e=0.00001; //e to calculate with accuracy
    while((high-low)>e){
        mid=(low+high)/2;
        if((mid*mid)>n){
            high=mid; //to achieve lower square of mid
        }
        else if((mid*mid)<n){
            low=mid; //to achieve higher square of mid 
                }
        }
    return printf("The Square Root of %f is %f .",n,mid);
}