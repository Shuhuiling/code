//
//  main.c
//  bubble
//
//  Created by 束慧玲 on 2019/3/1.
//  Copyright © 2019 束慧玲. All rights reserved.
//
// 冒泡排序
#include <stdio.h>
int main(int argc, const char * argv[]) {
    int n=0;
    int input[6];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf(" %d",&input[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(input[j] > input[j+1]){
                // swap(input[j],input[j+1]);
                int tmp = input[j];
                input[j] = input[j+1];
                input[j+1] = tmp;
            }
        }
    }
    for(int j=0;j<n;j++){
       printf("%d\n",input[j]);
    }
    
    
}
