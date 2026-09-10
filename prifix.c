// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++)
//     scanf("%d",&arr[i]);
//     int prifix[n];
// prifix[0]=arr[0];
//     for(int i=1; i<n; i++){
//         prifix[i]=arr[i]+prifix[i-1];
//     }
//     for(int i=0; i<n; i++){
//         printf("%d ", prifix[i]);
//     }

// }
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    scanf("%d",&arr[i]);
    int suffix[n];
suffix[n-1]=arr[n-1];
    for(int i=1; i<n; i++){
        suffix[n-1-i]=arr[n-1-i]+suffix[n-i];
    }
    for(int i=0; i<n; i++){
        printf("%d ", suffix[i]);
    }

}