#include <iostream>

int ZAD1(int n, int A[]){
    int *p= &A[n];
    for (int i = 0; i < n; i++) {
        A[i]=rand()%101;
    }
    printf ("Размер массива:");
    printf("%d\n", n);
    printf("Указатель на массив:");
    printf("%d\n", p);
}

int* ZAD2(int n, int A[], int B[]){
    printf("Передаваемый массив: ");
    for(int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("\nЗначения в функции: ");
    int a=-7;
    int b=-5;
    printf("a = %d , b = %d ", a, b);
    for(int i = 0; i < n; i++){
        B[i]=A[i];
        if (i==0){
            B[i]=b;
            b=A[i];
        }
        if (i==n-1) {
            B[i] = a;
            a = A[i];
        }

    }
    printf("\nПосле выполнения функции");
    printf("\nПередаваемый массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\nЗначения в функции: ");
    printf("a = %d , b = %d ", a, b);

    int *p = &B[0];
    return p;
}
int ZAD3(int *k) {
    int v = *k;
    int i=1;
    int w = *k;
    while (w!=-7){
        k++;
        w = *k;
        i++;
    }
    while (v!=-5){
        k--;
        v = *k;
        i++;
    }
    printf("\n%d", i-1);
    return i;
}
int ZAD4(int i, int *k){
    int a = *k;
    k++;
    int b = *k;
    int c;
    for(int j = 0; j < 5; j++){
        *k=a;
        k--;
        *k=b;
        k++;
        k++;
        a = *k;
        k++;
        b = *k;
    }
}
int main() {
    int n=10;
    int A[n];
    ZAD1(n,A);
    int B[n];
    ZAD2(n,A,B);
    int l=rand()%(n+1);
    int*p = &B[l];
    int i=ZAD3(p);
    int *k= &B[0];
    ZAD4(i,k);
    return 0;
}