#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
typedef struct{
    int key;
    int ind;
    int used;
}Entry;
int hash(int key) {
    if(key<0) {
        key=-key;
    }
    return key%SIZE;
}
int search(Entry table[],int key) {
    int index=hash(key);
    while(table[index].used==1) {
        if(table[index].key==key) {
            return table[index].ind;
        }
        index=(index+1)%SIZE;
    }
    return -1;
}
void insert(Entry table[],int key,int indnum) {
    int index=hash(key);
    while(table[index].used==1) {
        index=(index+1)%SIZE;
    }
    table[index].key=key;
    table[index].ind=indnum;
    table[index].used=1;
}

int main()
{
    Entry table[SIZE]={0};
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int tar;
    scanf("%d",&tar);
    int *res=malloc(2*sizeof(int));
    for(int i=0; i<n; i++) {
        int rem=tar-arr[i];
        int prev=search(table,rem);
        if(prev!=-1) {
            res[0]=prev;
            res[1]=i;
            printf("%d %d",res[0],res[1]);
            return 0;
        }
        insert(table,arr[i],i);
    }
}