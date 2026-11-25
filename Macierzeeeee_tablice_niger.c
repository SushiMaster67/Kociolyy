#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ROZMIAR 100
#define MIN 2
#define MAX 50

void dodawanie(int a, int b, float A[MAX_ROZMIAR][MAX_ROZMIAR], float B[MAX_ROZMIAR][MAX_ROZMIAR], float C[a][b]);
void odejmowanie(int a, int b, float A[MAX_ROZMIAR][MAX_ROZMIAR], float B[MAX_ROZMIAR][MAX_ROZMIAR], float C[a][b]);
void mnozenie(int a, int b, float A[MAX_ROZMIAR][MAX_ROZMIAR], float B[MAX_ROZMIAR][MAX_ROZMIAR], float C[a][b]);

float randwart(float min, float max) {
    return min + ((float)rand() / (float)RAND_MAX) * (max - min);
}

int main() {
    srand((unsigned)time(NULL));

    int a = 0;
    int b = 0;

    printf("podaj ilosc wierszy macierzy a: ");
    scanf("%d", &a);
    printf("podaj ilosc kolumn macierzy b: ");
    scanf("%d", &b);

    float A[MAX_ROZMIAR][MAX_ROZMIAR] = {0};
    float B[MAX_ROZMIAR][MAX_ROZMIAR] = {0};
    float C[a][b];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            A[i][j] = randwart(MIN, MAX);
            B[i][j] = randwart(MIN, MAX);
        }
    }

    dodawanie(a, b, A, B, C);
    printf("\n\n");
    odejmowanie(a, b, A, B, C);
    printf("\n\n");
    mnozenie(a, b, A, B, C);
    return 0;
}

void dodawanie(int a, int b, float A[MAX_ROZMIAR][MAX_ROZMIAR], float B[MAX_ROZMIAR][MAX_ROZMIAR], float C[a][b]) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("[");
            printf("%6.2f ", C[i][j]);
            printf("]");
        }
        printf("\n");
    }
}

void odejmowanie(int a, int b, float A[MAX_ROZMIAR][MAX_ROZMIAR], float B[MAX_ROZMIAR][MAX_ROZMIAR], float C[a][b]) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("[");
            printf("%6.2f ", C[i][j]);
            printf("]");
        }
        printf("\n");
    }
}

void mnozenie(int a, int b, float A[MAX_ROZMIAR][MAX_ROZMIAR], float B[MAX_ROZMIAR][MAX_ROZMIAR], float C[a][b]) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            C[i][j] = 0.0f;
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            for (int q = 0; q < b; q++) {
                C[i][j] += A[i][q] * B[q][j];
            }
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("[");
            printf("%6.2f ", C[i][j]);
            printf("]");
        }
        printf("\n");
    }
}
