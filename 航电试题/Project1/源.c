#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include <stdio.h>
#include <stdbool.h>
#define max 100

int dfs(int ha, int la, int hb, int lb, int n, char(*map)[max]) {
	if (ha == hb && la == lb) {
		return 1;
	}
	if (ha < 0 || ha >= n || la < 0 || la >= n || map[ha][la] == '#') {
		return 0;
	}
	char temp = map[ha][la];
	map[ha][la] = '#';
	if (dfs(ha, la + 1, hb, lb, n, map)) return 1;
	if (dfs(ha + 1, la, hb, lb, n, map)) return 1;
	if (dfs(ha, la - 1, hb, lb, n, map)) return 1;
	if (dfs(ha - 1, la, hb, lb, n, map)) return 1;
	map[ha][la] = temp;
	return 0;
}

int main() {
	int i, j;
	int n;
	int pb = 0;
	int ha, la, hb, lb;
	char map[max][max];

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf(" %c", &map[i][j]);
		}
	}
	scanf("%d %d %d %d", &ha, &la, &hb, &lb);

	if (ha < 0 || ha >= n || la < 0 || la >= n || hb < 0 || hb >= n || lb < 0 || lb >= n || map[ha][la] == '#' || map[hb][lb] == '#') {
		pb = 0;
	}
	else {
		pb = dfs(ha, la, hb, lb, n, map);
	}

	if (pb) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}