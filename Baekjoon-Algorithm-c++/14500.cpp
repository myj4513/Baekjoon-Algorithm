#include <iostream>

int a[500][500];

int main(void) {
	int N, M, ans=0;
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M ;j++) {
			if (j < M - 3) {
				int temp = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i][j + 3];
				if (temp > ans) ans = temp;
			}
			if (i < N - 3) {
				int temp = a[i][j] + a[i+1][j] + a[i+2][j] + a[i+3][j];
				if (temp > ans) ans = temp;
			}
			if (i < N - 1 && j < M - 1) {
				int temp = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1];
				if (temp > ans) ans = temp;
			}
			if (j < M - 1 && i < N - 2) {
				int temp = a[i][j] + a[i + 1][j] + a[i+2][j] + a[i + 2][j + 1];
				if (temp > ans) ans = temp;
			}
			if (j < M - 2 && i < N - 1) {
				int temp = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i][j + 2];
				if (temp > ans) ans = temp;
			}
			if (j < M - 1 && i < N - 2) {
				int temp = a[i][j] + a[i][j+1] + a[i+1][j + 1] + a[i+2][j + 1];
				if (temp > ans) ans = temp;
			}
			if (j < M - 2 && i < N - 1) {
				int temp = a[i][j] + a[i + 1][j] + a[i+1][j + 1] + a[i+1][j + 2];
				if (temp > ans) ans = temp;
			}
			if (j > 0 && i < N - 2) {
				int temp = a[i][j] + a[i+1][j] + a[i+2][j] + a[i+2][j-1];
				if (temp > ans) ans = temp;
			}
			if (j > 1 && i < N-1) {
				int temp = a[i][j] + a[i + 1][j] + a[i + 1][j-1] + a[i + 1][j - 2];
				if (temp > ans) ans = temp;
			}
			if (j < M-1 && i < N - 2) {
				int temp = a[i][j] + a[i][j+1] + a[i + 1][j] + a[i + 2][j];
				if (temp > ans) ans = temp;
			}
			if (j <M-2 && i < N - 1) {
				int temp = a[i][j] + a[i][j+1] + a[i][j+2] + a[i + 1][j +2];
				if (temp > ans) ans = temp;
			}
			if (j <M-2 && i < N - 1) {
				int temp = a[i][j] + a[i][j+1] + a[i][j+2] + a[i + 1][j + 1];
				if (temp > ans) ans = temp;
			}
			if (j <M-1 && i < N - 2) {
				int temp = a[i][j] + a[i + 1][j] + a[i + 2][j] + a[i + 1][j + 1];
				if (temp > ans) ans = temp;
			}
			if (j<M-2 && i>0) {
				int temp = a[i][j] + a[i][j+1] + a[i][j+2] + a[i - 1][j + 1];
				if (temp > ans) ans = temp;
			}
			if (j > 0 && i < N - 2) {
				int temp = a[i][j] + a[i + 1][j] + a[i + 2][j] + a[i + 1][j - 1];
				if (temp > ans) ans = temp;
			}
			if (j <M-1 && i < N - 2) {
				int temp = a[i][j] + a[i + 1][j] + a[i + 1][j+1] + a[i + 2][j + 1];
				if (temp > ans) ans = temp;
			}
			if (j<M-2&&i>0) {
				int temp = a[i][j] + a[i][j+1] + a[i-1][j+1] + a[i-1][j + 2];
				if (temp > ans) ans = temp;
			}
			if (j > 0 && i < N - 2) {
				int temp = a[i][j] + a[i + 1][j] + a[i + 1][j-1] + a[i + 2][j - 1];
				if (temp > ans) ans = temp;
			}
			if (j <M-2 && i < N - 1) {
				int temp = a[i][j] + a[i][j+1] + a[i + 1][j+1] + a[i + 1][j +2];
				if (temp > ans) ans = temp;
			}
		}
	}

	printf("%d", ans);
	
	return 0;
}