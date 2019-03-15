//
//  main.c
//  merge
//
//  Created by 束慧玲 on 2019/3/1.
//  Copyright © 2019 束慧玲. All rights reserved.
//
// 归并排序 O(nlogn)
#include <stdio.h>
// 合并2个有序序列
void merge(int* a,int left,int middle,int right){
    int T[right-left+1];
    int index=0;
    int i=left,j=middle+1;
    while((i <= middle) && (j <= right)){
        if(a[i] < a[j]) T[index++] = a[i++];
        else
            T[index++] = a[j++];
    }
    while(i <= middle){
        T[index++] = a[i++];
    }
    while(j <= right){
        T[index++] = a[j++];
    }
    for(int i=0;i<index;i++){
        a[left+i] = T[i];
    }
}
// 分治法
void split(int* a,int start,int end){
    if(start < end){
        int mid = (end + start)/2;
        split(a,start,mid);
        split(a,mid+1,end);
        merge(a,start,mid,end);
    }
}
int main(int argc, const char * argv[]) {
    int n=0;
    scanf("%d",&n);
    int input[n];
    int res[n];
    for(int i=0;i<n;i++){
        scanf(" %d",&input[i]);
    }
    split(input,0,n-1);
    for(int j=0;j<n;j++){
        printf("%d\n",res[j]);
    }
}
