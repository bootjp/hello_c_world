#include <stdio.h>
//#include <mach/vm_types.h>
//#include <stdlib.h>

//void swap(int *a, int *b);
//
//void selectedSort(const int *pInt, size_t size);
//
//int intMin(const int PInt[], size_t size);
//
//int intMax(const int PInt[], size_t size);
//
//int intAvg(const int pInt[], size_t size);
//
//// TODO WIP
//void MyQuickSort(const int pInt[], int left, int right);
//
//int centerValue(size_t size);
//
//void hello_world() {
//    printf("Hello c language world!\n");
//}
#pragma optimize("", off)
void recursion(int *i) {
    if (*i >= 2) {
        return;
    }
    *i += 1;
    recursion(i);
}

int main() {

//    int target[] = {2, 1, 4, 6, -1, -200};
//    size_t size = sizeof(target) / sizeof(target[0]);
//    printf("%d : \n", (int) size - 1);
//    MyQuickSort(target, 0, (int) size - 1);
//
//    for (int i = 0; i < size; ++i) {
//        printf("%d\n", target[i]);
//    }
    int i = 0;
    recursion(&i);
//    printf("%d", i);
    return 0;
//    selectedSort(target, size);
//    printf("MIN %d\n", intMin(target, size));
//    printf("MAX %d\n", intMax(target, size));
//
//    for (int index = 0; index < size; ++index) {
//        printf("%d\n", target[index]);
//    }
//
//    int *pos = NULL;
//
//
//    int res = intAvg(target, size);
//    printf("res:; %d\n", res);
//
//
//    for (int index = 0; index < size; ++index) {
//        printf("%d\n", target[index]);
//    }
//    return 0;
}
//
//void swap(int *a, int *b) {
//    int tmp;
//    tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//
//void selectedSort(const int pInt[], size_t size) {
//
//    // 線形探索で最小値を探す
//    for (int index = 0; index < size; ++index) {
//        int minPos = index;
//
//        for (int innerIndex = (index + 1); innerIndex < size; ++innerIndex) {
//            if (pInt[innerIndex] < pInt[minPos] && minPos < innerIndex) {
//                minPos = innerIndex;
//            }
//        }
//        int *a = (int *) &pInt[index];
//        int *b = (int *) &pInt[minPos];
//        swap(a, b);
//    }
//}
//
//int med3(int x, int y, int z) {
//    if (x < y) {
//        if (y < z) {
//            return y;
//        } else if (z < x) {
//            return x;
//        } else {
//            return z;
//        }
//    } else {
//        if (z < y) {
//            return y;
//        } else if (x < z) {
//            return x;
//        } else {
//            return z;
//        }
//    }
//}
//
//
//// TODO WIP
//void MyQuickSort(const int pInt[], int left, int right) {
//    // ピボットとすべき値を算出する
//    // 中央値にすることで一番パフォーマンスがいいらしいがここでは一番最後の値を使う
//    /*
//    1. ピボットとして一つ選びそれをPとする。
//    2. 左から順に値を調べ、P以上のものを見つけたらその位置をiとする。
//    3. 右から順に値を調べ、P以下のものを見つけたらその位置をjとする。
//    4. iがjより左にあるのならばその二つの位置を入れ替え、2に戻る。
//       ただし、次の2での探索はiの一つ右、次の3での探索はjの一つ左から行う。
//    5. 2に戻らなかった場合、iの左側を境界に分割を行って2つの領域に分け、そのそれぞれに対して再帰的に1からの手順を行う。要素数が1以下の領域ができた場合、その領域は確定とする。
//    */
//
//    int innerLeft = left;
//    int innerRight = right;
//
//    if (left < right) {
//        int *pivot;
////        int tmp = med3(pInt[innerLeft], pInt[innerRight + (innerRight - innerLeft) / 2], pInt[innerRight]);
//        pivot = (int *) &pInt[innerLeft];
//        while (1) {
//            while (pInt[innerLeft] < *pivot) {
//                innerLeft++;
//            }
//            while (*pivot < pInt[innerRight]) {
//                innerRight--;
//            }
//
//            if (innerLeft >= innerRight) {
//                break;
//            }
//
//            swap((int *) &pInt[innerLeft], (int *) &pInt[innerRight]);
//            innerLeft++;
//            innerRight--;
//        }
//        MyQuickSort(pInt, left, (innerLeft - 1));
//        MyQuickSort(pInt, (innerRight + 1), right);
//    }
////    MyQuickSort(pInt, size);
////    printf("CENTER %d\n", *pInt);
//
//    // ピボットをpickする
//    // 一番左にマーカーをおく
//    // 一番右にマーカーをおく
//    // 左マーカーを右に
//    // 左マーカーがpivot以上の数にたどり着いたら停止
//    // 右マーカーを左にpivotより小さい数にたどり着いたら停止
//    // 左右のマーカーの数を入れ替える
//    // 左からマーカーを動かす
//    // 右マーカーは左マーカーより左にいかない
//    // マーカーがぶつかった場合はそのマーカーがいる数とpivotを入れ替える
//    // pivotだった数はソート済みにする
//    // goto start再帰
//}
//
////int centerValue(size_t size) {
////    int *pivot;
////    int half = (int) (size / 2);
////    int tmp = (half % 2 != 0 ? (half + 1) : half);
////    return tmp;
////}
//
//
//int intMin(const int PInt[], size_t size) {
//    int min = INT32_MAX;
//    for (int i = 0; i < size; ++i) {
//        if (min > PInt[i]) {
//            min = PInt[i];
//        }
//    }
//
//    return min;
//}
//
//int intMax(const int PInt[], size_t size) {
//    int max = INT32_MIN;
//    for (int i = 0; i < size; ++i) {
//        if (max < PInt[i]) {
//            max = PInt[i];
//        }
//    }
//    return max;
//}
//
////TODO WIP
//int intAvg(const int pInt[], size_t size) {
//    if (size == 0) {
//        return -1;
//    }
//
//    int sum = 0;
//    for (int i = 0; i < size; ++i) {
//        sum += pInt[i];
//    }
//
//    return (int) (sum / size);
//}