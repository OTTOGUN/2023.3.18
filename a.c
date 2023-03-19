//
// Created by 39221 on 2023/3/16.
//
#include<stdio.h>
#include <synchapi.h>

/*
int main() {
    char arr[] = "abcdef";
    char *p = arr;
    printf("%s\n", arr);
    printf("%s", p);//链式存储结构是数据的一种存储方式，它使用链表来存储数据。链表是一种由节点构成的数据结构，
    // 每个节点包含数据和指向下一个节点的指针。相邻节点之间使用指针连接，形成一条链表。与顺序存储结构不同，
    // 链式存储结构的元素在内存中不是连续存储的，而是通过指针相连，因此可以动态地分配和释放内存空间。链式存储结构的特点是插入和删除操作效率高，
    // 但是随机访问元素的效率较低，因为需要从头开始遍历链表。常见的链式存储结构包括单向链表、双向链表和循环链表
}*/

/*int main(){
    char * p = "abcdef";
    printf("%s\n",p);
}*/

/*int main(){
    char arr1[] = "abcdefg";
    char arr2[] = "abcdefg";
    char *p1 = "abcdefg";
    char *p2 = "abcdefg";

    if(arr1 == arr2)
    {
        printf("hehe\n");
    }else
    {
        printf("HAHA\n");
    }
        输出结果为：HAHA  因为arr1与arr2的地址完全不同。
}*/

/*
int main() {
    char arr1[] = "abcdefg";
    char arr2[] = "abcdefg";
    char *p1 = "abcdefg";
    char *p2 = "abcdefg";

    if (p1 == p2) {
        printf("hehe\n");
    } else {
        printf("HAHA\n");
    }
        输出结果为：hehe  因为"abcdefg"为常量字符串，只能拿来用不能更改，
        为了节省空间p1与p2便指向了同一块空间
}*/

/*int main(){
    int a = 10;
    int b = 11;
    int c = 12;
    int * parr[] = {&a,&b,&c};
    for(int i = 0;i < 3;i++){
        printf("%d ",*(parr[i]));
    }
            指针数组的错误用法
}*/

/*int main(){
    int arr[] = {1,2,3};
    int arr1[] = {4,5,6};
    int arr2[] = {7,8,9};
    int * parr[] = {arr,arr1,arr2};
    int i = 0;
    for(i = 0;i < 3;i++){       数组的个数
        int j = 0;
        for(j = 0;j < 3;j++){       数组内元素的个数
            printf("%d ",*(parr[i] + j));  指针的地址加1是数组下一位的地址
        }
    }
            指针数组的正确用法
}*/

/*int main(){
    int *p = NULL;  //p是整型指针 - 指向整型的指针 - 可以存放整型的地址
    char* pc = NULL; //pc是字符指针 - 指向字符的指针 - 可以存放字符的指针

    int arr[10] = {0};//数组指针 - 指向数组的指针 - 可以存放数组的地址
    //arr - 首元素地址
    //&arr[0] - 首元素的地址
    //&arr - 数组的地址

    int arr1[10] = {1,2,3,4,5,6};
    int (*p1)[10] = &arr;//数组的地址要存起来
    //（*p1）是数组指针，指向[10]十个int元素。
    return 0;
}*/

/*
int main(){
    int arr[5] = {1,2,3,4,5,};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int (*p)[5] = &arr;
    int i = 0;

    for(i = 0;i < sz;i++){
        printf("%d",*(*p + i));
    }   //第一种使用数组指针的方法

    printf("\n");

    for(i = 0;i < sz;i++){
        printf("%d",(*p)[i]);
    }   //第二种使用数组指针的方法
}*/

/*void printf1(int arr[3][5],int x,int y){
    int i = 0;
    for(i = 0;i < x;i++){
        int j = 0;
        for(j = 0;j < y;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

void printf2(int (*p)[5],int x,int y){
    int i = 0;
    for(i = 0;i < x;i++){
        int j = 0;
        for(j = 0;j < y;j++){
           //printf("%d ",*(*(p + i)+j));
           printf("%d",p[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};

    printf1(arr,3,5);
    printf2(arr,3,5);
}*/

/*void test(int *arr,int sz){
    for(int i = 0;i < sz;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}

int Add(int x,int y){
    int c = x+y;
    return c;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int sz = sizeof(arr)/sizeof(arr[0]);
    test(arr,sz);
    int (*a)(int,int) = &Add;
    printf("%d\n",a(2,3));
}*/

/*
int Add(int x,int y){
    return x + y;
}

int Sub(int x,int y){
    return x - y;
}

int Mul(int x,int y){
    return x * y;
}

int Div(int x,int y){
    return x / y;
}

int main(){
    //指针数组
    int *arr[5];
    //需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
    int(*pa)(int,int) = Add;
    int (*parr[4])(int,int) = {Add,Sub,Mul,Div};
    for(int i = 0;i < 4;i++){
        printf("%d ",parr[i](2,3));
    }
    return 0;
}*/

/*
char* my_strcpy(char* dest,const char* src){
}

int main(){
    char* (*pf)(char* a,const char * b) = my_strcpy;
    char* (*pfAr[4])(char* a,const char* b) = {my_strcpy, my_strcpy, my_strcpy, my_strcpy};
}*/
/*

int Add(int x,int y){
    return x + y;
}

int Sub(int x,int y){
    return x - y;
}

int Mul(int x,int y){
    return x * y;
}

int Div(int x,int y){
    return x / y;
}

void menu(){
    printf("################\n");
    printf("##1.Add  2.Sub##\n");
    printf("##3.Mul  4.Div##\n");
    printf("#### 0.exit ####\n");
    printf("################\n");
}

//f是一个指针数组 - 转移表
int main(){
    int input = 0;
    int (*p[4])(int ,int) = {Add, Sub, Mul, Div};
again:
    do {
        menu();
        int input1 = 0;
        int input2 = 0;
        printf("请选择>>>");
        scanf("%d",&input);
        if(input == 0)
        {
            printf("退出程序");
            return 0;
        }else
        {
            printf("输入数字有误,请按照要求重新输入\n");
            goto again;
        }
        printf("请输入想要计算的两个数字\n");
        scanf("%d%d",&input1,&input2);
        printf("计算结果为：%d\n",p[input-1](input1,input2));
*/
/*        switch (input) {
            case 1:
                printf("结果为：%d\n", Add(input1, input2));
                break;
            case 2:
                printf("结果为：%d\n", Sub(input1, input2));
                break;
            case 3:
                printf("结果为：%d\n", Mul(input1,input2));
                break;
            case 4:
                printf("结果为：%d\n", Div(input1,input2));
                break;
        }*//*

    }while(input);
    return 0;
}*/
int main(){
    char str[] = "abcd";
    char * p = "abcd";
    printf("%s\n",str);
    printf("%s",p);
}