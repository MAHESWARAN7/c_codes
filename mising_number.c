#include<stdio.h>
#include<stdlib.h>
int compare(const void* a, const void* b ){
return (*(int*)a-*(int*)b);
}
int main(){
    int n;
    int res;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr,n,sizeof(int), compare);
    for(int i=1; i<n; i++){
    if(arr[i-1]+1==arr[i]){
        res=1;
    }
    else{
        printf("%d", arr[i-1]+1);
    }
    }
}
// #include <stdio.h>
// int main()
// {
//    int n;
//    scanf("%d",&n);
//    int arr[n];
//    for(int i=0; i<n; i++)
//    scanf("%d",&arr[i]);

//    int hash[n+1];
//    for(int i=0; i<=n; i++)
//    hash[i]=0;

//    for(int i=0; i<n; i++) {
//     hash[arr[i]]++;
//    }
//    for(int i=0; i<=n; i++){
//     if(hash[i]==0) {
//         printf("%d",i);
//         return 0;
//     }
//    }
// }