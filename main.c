#include <stdio.h>
#include <string.h>

#define swap(x, y)     (x ^= y, y = x ^ y, x ^= y)
#define reps(i, x, n)  for (int i = x; i < (int)(n); i++)
#define rep(i, n)      reps(i, 0, n)

// 関数プロトタイプ宣言
void selection_sort_array(int A[], int N);
void print_array(int A[], int B[], int N);

int main(void) {
    // 実行例1
    const int SIZE = 5;
    int scores[SIZE] = {0, 60, 70, 100, 90};
    int results[SIZE];
    memcpy(results, scores, sizeof(scores));

    printf("実行例1\n");
    selection_sort_array(results, SIZE);
    print_array(scores, results, SIZE);

    // 実行例2
    const int SIZE2 = 6;
    int scores2[SIZE2] = {100, 60, 70, 100, 90, 80};
    int results2[SIZE2];
    memcpy(results2, scores2, sizeof(scores2));

    printf("\n実行例2\n");
    selection_sort_array(results2, SIZE);
    print_array(scores2, results2, SIZE);

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
