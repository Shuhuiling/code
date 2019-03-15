//
//  main.c
//  heap
//
//  Created by 束慧玲 on 2019/3/1.
//  Copyright © 2019 束慧玲. All rights reserved.
//
// 查找数组的前k个最小值
#include <stdio.h>
void heap(int* array,int begin,int end){
    int parent = begin;
    int child = 2*parent+1;
    while(child <= end){
        if(child < end && array[child] < array[child+1])
            child++;
        if(array[parent] < array[child]){
            int tmp = array[parent];
            array[parent] = array[child];
            array[child] = tmp;
            parent = child;
            child = 2*parent+1;
        }
        else
            break;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 8;
    int input[8];
    int k = 4;
    
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        scanf("%d",&input[i]);
    }
    for(int i=k/2-1;i>=0;i--){
        heap(input,i,k-1);
    }
    for(int j=k;j<n;j++){
        if(input[j] < input[0]){
            int tmp = input[j];
            input[j] = input[0];
            input[0] = tmp;
            // swap(input[j],input[0]);
            heap(input,0,k-1);
        }
    }
    printf("%d %d %d %d",input[0],input[1],input[2],input[3]);
}



