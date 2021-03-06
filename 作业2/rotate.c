#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h> 


int a[10][10];

int main(void)
{
    int n;
    scanf("%d", &n);
    int i,j,k;
    int dest[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
    int m=0,x=-1,y=-1;
    for(i=n-1;i>=1;i-=2){
        x++;
        y++;
        for(j=0;j<4;j++){
            for(k=0;k<i;k++){
                a[x][y]=++m;
                x+=dest[j][0];
                y+=dest[j][1];
            }
        }
    }
    if(n%2==1){
        x++;
        y++;
        a[x][y]=++m;
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/*
题目：螺旋矩阵

 

【问题描述】

 

输入一个自然数Ｎ（2≤N≤9），要求输出如下的螺旋矩阵，即边长为N*N，元素取值为1至N*N，1在左上角，呈顺时针方向依次放置各元素。
N=3时，相应的矩阵中每个数字位置如下图所示： 
1  2  3
8  9  4
7  6  5
 

【输入形式】

 

从标准输入读取一个整数N。
 

【输出形式】

 

向标准输出输出一个N*N的螺旋矩阵，即边长为N*N，元素取值为1至N*N，1在左上角，呈顺时针方向依次放置各元素，每个数字占5个字符宽度，向右对齐，不足部分补以空格。在每一行末均输出一个回车符。
 

【输入样例】

 

3
 

【输出样例】

 

####1####2####3 
####8####9####4 
####7####6####5 
(注：这里#代表空格的位置)
 

【时间限制】

 

1s
 

【空间限制】

 

65536KB
 

【上传文件】

 

上传c语言源程序，文件名为rotate.c。
*/ 
