#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    scanf("%d", &arr[i]);
int sum=0;
for(int i=0; i<n; i++){
    sum=sum+arr[i];
}
    // printf("%d", max);
    int res[n];
    int idx=0;
    for(int i=0; i<n; i++){
        res[i]= sum-arr[i];
        
    }
     for(int i=0; i<n; i++){
        printf("%d ",res[i]);
    }

}