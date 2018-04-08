#include <stdio.h>
#include <mach/vm_types.h>
#include <stdlib.h>

void hello_world() {
    printf("Hello c language world!\n");
}

void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void selectedSort(const int *pointer, size_t size) {

    // 線形探索で最小値を探す
    for (int index = 0; index < size; ++index) {
        int minPos = index;

        for (int innerIndex = (index + 1); innerIndex < size; ++innerIndex) {
            if (pointer[innerIndex] < pointer[minPos] && minPos < innerIndex) {
                minPos = innerIndex;
            }
        }
        int* a = (int *) &pointer[index];
        int* b = (int *) &pointer[minPos];
        swap(a, b);
    }
}

int main() {

    int a = 10;
    int b = 999999;
    printf("a = %3d : b = %3d\n",a,b);
    swap(&a, &b);
    printf("a = %3d : b = %3d\n",a,b);
    int target[] = {2,1 , 4, 6, -1};
    size_t size = sizeof(target) / sizeof(target[0]);
    selectedSort(target, size);

    for (int index = 0; index < size; ++index) {
        printf("%d\n", target[index]);
    }
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


