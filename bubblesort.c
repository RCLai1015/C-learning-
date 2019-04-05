#include <stdio.h>
// Ricky Lai bubble sort practice 2019/4/5 
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int n,c,k,i,j;
    scanf("%d", &n);
    int sort[n];
    printf("enter %d number\n", n);
    for(c=0;c<n;c++){
        scanf("%d",&sort[c]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(sort[i]<sort[j]){
                swap(&sort[i],&sort[j]);
            }

        }
    }
    for(k=0;k<n;k++){
        printf("%d",sort[k]);
    }
    return 0;
}