//
//  main.c
//  choose
//
//  Created by 束慧玲 on 2019/3/1.
//  Copyright © 2019 束慧玲. All rights reserved.
//
// 选择排序
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n=0;
    int input[6];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf(" %d",&input[i]);
    }
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(input[min] > input[j])
                min = j;
        }
        int tmp = input[i];
        input[i] = input[min];
        input[min] = tmp;
        // swap(input[i],input[min]);
    }
    for(int j=0;j<n;j++){
        printf("%d\n",input[j]);
    }
}
