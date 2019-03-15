//
//  main.c
//  insert
//
//  Created by 束慧玲 on 2019/3/1.
//  Copyright © 2019 束慧玲. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n=0;
    scanf("%d",&n);
    int input[n];
    for(int i=0;i<n;i++){
        scanf(" %d",&input[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            if(input[j] < input[j-1]){
                int tmp = input[j];
                input[j] = input[j-1];
                input[j-1] = tmp;
            }
        }
    }
    for(int j=0;j<n;j++){
        printf("%d\n",input[j]);
    }
}
