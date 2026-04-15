#include<stdio.h>
#include<math.h>
int swap (int n){
    int last = n%10;

    int multi = 1;
    int temp =n;
    while(temp>=10){
       multi*=10;
       temp/=10;
    }
    int first = n/multi;
    int middle = n-(multi*first)-last;
    int swap = middle + (last*multi) + first;
    return swap;
}

int main(){
int n;
scanf("%d", &n);
printf("%d",swap(n));

}