//
//  main.c
//  quickSort
//
//  Created by 束慧玲 on 2019/3/2.
//  Copyright © 2019 束慧玲. All rights reserved.
//
// 快排
#include <stdio.h>
void quick(int* a,int left,int right){
    if(left < right){
        int i=left;
        int j=right;
        int key = a[left];
        while(i < j){
            while(a[i] <= key) i++;
            while(a[j] > key) j--;
            if(i < j){
                // swap(a[i],a[j]);
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
        // swap(key,a[j]); 不能这样写，这样不是数组之间的交换，只是数值交换
        // swap(a[left],a[j]);
        int tmp = a[left];
        a[left] = a[j];
        a[j] = tmp;
        quick(a,left,j-1);
        quick(a,j+1,right);
    }
}
int main(int argc, const char * argv[]) {
    int n=0;
    scanf("%d",&n);
    int input[n];
    for(int i=0;i<n;i++){
        scanf(" %d",&input[i]);
    }
    quick(input,0,n-1);
    for(int j=0;j<n;j++){
        printf("%d\n",input[j]);
    }
}
