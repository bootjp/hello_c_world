#include <stdio.h>

void hello_world() {
    printf("Hello c language world!\n");
}

void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}



int main() {
    int a = 10;
    int b = 999999;
    printf("a = %3d : b = %3d\n",a,b);
    swap(&a, &b);
    printf("a = %3d : b = %3d\n",a,b);
    return 0;
//    char str[999];
//    scanf("%s", str);
//    for(int i = 0; i < 10; i++){
//        printf("%s\n", str);
//    }
//    return 0;
    int x = 10; // int = 10
    int* p;// int pointer
    p = &x;// p = x pointer
    *p = 5;// x pointer = 5
    printf("xの中身は%dです。\n", x);
    return 0;
}


