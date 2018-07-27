#include <stdio.h>
#include <math.h>
#include <pthread.h>
#include <mhash.h>
#include <err.h>

pthread_mutex_t mutex;  // Mutex

int isPrime(int n) {

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int isPrime2(int n) {

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// スレッド
void *thread0_50000(void *args) {

    for (unsigned int i = 3; i <= 50000; i += 2) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

void *thread_50000_100000(void *args) {
    for (unsigned int i = 50001; i <= 100000; i += 2) {
        if (isPrime2(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}


int main() {

    pthread_t thread1, thread2;

    int ret1, ret2;

    ret1 = pthread_create(&thread1, NULL, (void *) thread0_50000, NULL);
    if (ret1 != 0) {
        err(EXIT_FAILURE, "can not create thread 1: %s", strerror(ret1) );
    }


    ret2 = pthread_create(&thread2, NULL, (void *) thread_50000_100000, NULL);
    if (ret2 != 0) {
        err(EXIT_FAILURE, "can not create thread 1: %s", strerror(ret1) );
    }

    ret1 = pthread_join(thread1,NULL);
    if (ret1 != 0) {
//        errc(EXIT_FAILURE, ret1, "can not join thread 1");
    }
//
    ret2 = pthread_join(thread1,NULL);
    if (ret2 != 0) {
//        errc(EXIT_FAILURE, ret1, "can not join thread 1");
    }
//
    return 0;
}

