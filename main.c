#include <stdio.h>
#include <mach/vm_types.h>
#include <stdlib.h>

void swap(int *a, int *b) ;

void selectedSort(const int *pInt, size_t size) ;

int intMin(const int PInt[], size_t size) ;

int intMax(const int PInt[], size_t size) ;

int intAvg(const int pInt[], size_t size) ;

// TODO WIP
void MyQuickSort(const int pInt[], size_t size) ;

void hello_world() {
    printf("Hello c language world!\n");
}

int main() {

    int a = 10;
    int b = 999999;
    printf("a = %3d : b = %3d\n",a,b);
    swap(&a, &b);
    printf("a = %3d : b = %3d\n",a,b);
    int target[] = {2,1 , 4, 6, -1, -200};
    size_t size = sizeof(target) / sizeof(target[0]);
    selectedSort(target, size);
    printf("MIN %d\n", intMin(target, size));
    printf("MAX %d\n", intMax(target, size));
    MyQuickSort(target, size);
    for (int index = 0; index < size; ++index) {
        printf("%d\n", target[index]);
    }

    int* pos = NULL;


    int res = intAvg(target, size);
    printf("res:; %d\n", res);


    for (int index = 0; index < size; ++index) {
        printf("%d\n", target[index]);
    }
    return 0;
}

void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void selectedSort(const int pInt[], size_t size) {

    // 線形探索で最小値を探す
    for (int index = 0; index < size; ++index) {
        int minPos = index;

        for (int innerIndex = (index + 1); innerIndex < size; ++innerIndex) {
            if (pInt[innerIndex] < pInt[minPos] && minPos < innerIndex) {
                minPos = innerIndex;
            }
        }
        int* a = (int *) &pInt[index];
        int* b = (int *) &pInt[minPos];
        swap(a, b);
    }
}


// TODO WIP
void MyQuickSort(const int pInt[], size_t size) {
    // ピボットとすべき値を算出する
    // 中央値にすることで一番パフォーマンスがいいらしい
    int half = (int) (size / 2);
    int pivot = (half % 2 != 0 ? (half + 1) : half);
    printf("CENTER %d\n", pivot);
    // ピボットをpickする
    // start 再帰
    // 一番左にマーカーをおく
    // 一番右にマーカーをおく
    // 左マーカーを右に
    // 左マーカーがpivot以上の数にたどり着いたら停止
    // 右マーカーを左にpivotより小さい数にたどり着いたら停止
    // 左右のマーカーの数を入れ替える
    // 左からマーカーを動かす
    // 右マーカーは左マーカーより左にいかない
    // マーカーがぶつかった場合はそのマーカーがいる数とpivotを入れ替える
    // pivotだった数はソート済みにする
    // goto start再帰


//    for (int index = 0; index < size; ++index) {
//        pInt[index];
//    }
}



int intMin(const int PInt[], size_t size) {
    int min = INT32_MAX;
    for (int i = 0; i <size ; ++i) {
        if (min > PInt[i]) {
            min = PInt[i];
        }
    }

    return  min;
}

int intMax(const int PInt[], size_t size) {
    int max = INT32_MIN;
    for (int i = 0; i <size ; ++i) {
        if (max < PInt[i]) {
            max = PInt[i];
        }
    }
    return max;
}

//TODO WIP
int intAvg(const int pInt[], size_t size) {
    if (size == 0) {
        return -1;
    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += pInt[i];
    }

    return (int) (sum / size);
}