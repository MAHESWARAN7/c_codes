#include <stdio.h>
#include <math.h>

int count(int n){
    int div=1;
      int cnt = 0;
      while(div <= n){
        int ld = (n%(div*10))/div;
        div *=10;
        cnt++;
      }
    printf("%d", cnt);
    return cnt ;
}

int isamstrong(int n ){
int sum =0 ;
int div=1;
    int nod = count(n);
    while (div <= n){
        int ld = (n%(div*10))/div;
        sum = sum+ (int) pow (ld,nod);
        div *= 10;
    }


    return n == sum ? (1): (0);
}




int main (){
    int n ;
    scanf("%d", &n);
    if (isamstrong(n)){
        printf("is amstrong"); 
    }
    else {
        printf("not amstrong ");
    }
 count(n);
}
