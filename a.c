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
    printf("%s", p);//��ʽ�洢�ṹ�����ݵ�һ�ִ洢��ʽ����ʹ���������洢���ݡ�������һ���ɽڵ㹹�ɵ����ݽṹ��
    // ÿ���ڵ�������ݺ�ָ����һ���ڵ��ָ�롣���ڽڵ�֮��ʹ��ָ�����ӣ��γ�һ��������˳��洢�ṹ��ͬ��
    // ��ʽ�洢�ṹ��Ԫ�����ڴ��в��������洢�ģ�����ͨ��ָ����������˿��Զ�̬�ط�����ͷ��ڴ�ռ䡣��ʽ�洢�ṹ���ص��ǲ����ɾ������Ч�ʸߣ�
    // �����������Ԫ�ص�Ч�ʽϵͣ���Ϊ��Ҫ��ͷ��ʼ����������������ʽ�洢�ṹ������������˫�������ѭ������
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
        ������Ϊ��HAHA  ��Ϊarr1��arr2�ĵ�ַ��ȫ��ͬ��
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
        ������Ϊ��hehe  ��Ϊ"abcdefg"Ϊ�����ַ�����ֻ�������ò��ܸ��ģ�
        Ϊ�˽�ʡ�ռ�p1��p2��ָ����ͬһ��ռ�
}*/

/*int main(){
    int a = 10;
    int b = 11;
    int c = 12;
    int * parr[] = {&a,&b,&c};
    for(int i = 0;i < 3;i++){
        printf("%d ",*(parr[i]));
    }
            ָ������Ĵ����÷�
}*/

/*int main(){
    int arr[] = {1,2,3};
    int arr1[] = {4,5,6};
    int arr2[] = {7,8,9};
    int * parr[] = {arr,arr1,arr2};
    int i = 0;
    for(i = 0;i < 3;i++){       ����ĸ���
        int j = 0;
        for(j = 0;j < 3;j++){       ������Ԫ�صĸ���
            printf("%d ",*(parr[i] + j));  ָ��ĵ�ַ��1��������һλ�ĵ�ַ
        }
    }
            ָ���������ȷ�÷�
}*/

/*int main(){
    int *p = NULL;  //p������ָ�� - ָ�����͵�ָ�� - ���Դ�����͵ĵ�ַ
    char* pc = NULL; //pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ���ָ��

    int arr[10] = {0};//����ָ�� - ָ�������ָ�� - ���Դ������ĵ�ַ
    //arr - ��Ԫ�ص�ַ
    //&arr[0] - ��Ԫ�صĵ�ַ
    //&arr - ����ĵ�ַ

    int arr1[10] = {1,2,3,4,5,6};
    int (*p1)[10] = &arr;//����ĵ�ַҪ������
    //��*p1��������ָ�룬ָ��[10]ʮ��intԪ�ء�
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
    }   //��һ��ʹ������ָ��ķ���

    printf("\n");

    for(i = 0;i < sz;i++){
        printf("%d",(*p)[i]);
    }   //�ڶ���ʹ������ָ��ķ���
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
    //ָ������
    int *arr[5];
    //��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
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

//f��һ��ָ������ - ת�Ʊ�
int main(){
    int input = 0;
    int (*p[4])(int ,int) = {Add, Sub, Mul, Div};
again:
    do {
        menu();
        int input1 = 0;
        int input2 = 0;
        printf("��ѡ��>>>");
        scanf("%d",&input);
        if(input == 0)
        {
            printf("�˳�����");
            return 0;
        }else
        {
            printf("������������,�밴��Ҫ����������\n");
            goto again;
        }
        printf("��������Ҫ�������������\n");
        scanf("%d%d",&input1,&input2);
        printf("������Ϊ��%d\n",p[input-1](input1,input2));
*/
/*        switch (input) {
            case 1:
                printf("���Ϊ��%d\n", Add(input1, input2));
                break;
            case 2:
                printf("���Ϊ��%d\n", Sub(input1, input2));
                break;
            case 3:
                printf("���Ϊ��%d\n", Mul(input1,input2));
                break;
            case 4:
                printf("���Ϊ��%d\n", Div(input1,input2));
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