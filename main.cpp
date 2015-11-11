//
//  main.cpp
//  20141105072
//
//  Created by 20141105072 on 15/11/11.
//  Copyright © 2015年 20141105072. All rights reserved.
//

#include <iostream>
#define N 5
int main(int argc, const char * argv[]) {
    // insert code here...
    int a[N];
    int i,j,temp;
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<N;i++)
        printf("%d\n",a[i]);
    free(a);
    return 0;
}