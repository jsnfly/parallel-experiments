#include <stdio.h>
#include <omp.h>

void vectAdd(double *c, double *a, double *b, int n) {
    #pragma omp parallel for
    for(int i = 0; i < n; i++){
        printf("Thread: %d\n", omp_get_thread_num());
        c[i] = a[i] + b[i];
    }
}

int main() {
    double a[] = {1.5, 2.5, 3.5};
    double b[] = {1.5, 2.5, 3.5};
    double c[3];

    vectAdd(c, a, b, 3);
    printf("c: %f, %f, %f\n", c[0], c[1], c[2]);
    return 0;
}
