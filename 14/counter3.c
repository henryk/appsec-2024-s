#include <stdio.h>
#include <pthread.h>

int c = 0;
pthread_mutex_t c_mutex;
#define COUNT 5

void *fun(void *ptr) {
    for (int i=0; i<1000000; i++) {
        pthread_mutex_lock(&c_mutex);
        c++;
        pthread_mutex_unlock(&c_mutex);
    }
}

void main(void) {
    pthread_t threads[COUNT];
    for (int t=0; t<COUNT; t++) {
        pthread_create(&threads[t], NULL, fun, NULL);
    }
    for(int t=0; t<COUNT; t++) {
        pthread_join(threads[t], NULL);
    }
    printf("%i\n", c);
}
