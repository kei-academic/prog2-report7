#include <stdio.h>
#include <string.h>

#define swap(x, y)     (x ^= y, y = x ^ y, x ^= y)
#define reps(i, x, n)  for (int i = x; i < (int)(n); i++)
#define rep(i, n)      reps(i, 0, n)

// 関数プロトタイプ宣言
void selection_sort_array(int A[], int N);
void print_array(int A[], int B[], int N);

int main(void) {
    const int SIZE = 5;
    int scores[SIZE] = {0, 60, 70, 100, 90};
    int results[SIZE];
    memcpy(results, scores, sizeof(scores));

    selection_sort_array(results, SIZE);
    print_array(scores, results, SIZE);

    return 0;
}


// 選択ソート
void selection_sort_array(int A[], int N) {
    rep(i, N) {
        int max_position = i;
        int max_value = A[i];
        reps(j, i+1, N) {
            if (A[j] > max_value) {
                max_position = j;
                max_value = A[j];
            }
        }
        swap(A[i], A[max_position]);
    }
}


void print_array(int A[], int B[], int N) {
    printf("scores = ");
    rep(i, N) {
        printf("%d ", A[i]);
    }
    printf("\nresults = ");
    rep(i, N) {
        printf("%d ", B[i]);
    }
}
