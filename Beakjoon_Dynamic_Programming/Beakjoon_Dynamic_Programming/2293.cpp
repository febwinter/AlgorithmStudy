//#include<iostream>
//
//#pragma warning(disable : 4996)
//
//#define MAX_N 100
//#define MAX_K 10000
//
//int coin[MAX_N] = { 0 };
//int dp[MAX_K] = { 0 };
//
//int main() {
//	int n, k;
//
//	scanf("%d %d", &n, &k);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &coin[i]);
//	}
//
//	dp[0] = 1;  //ex) 5�� ¥�� �ϳ��� ������ ��ġ 5���� ���� �� ����
//
//	for (int i = 0; i < n; i++) {
//		for (int j = coin[i]; j <= k; j++) {
//			if (j - coin[i] >= 0) dp[j] += dp[j - coin[i]];   //������ coin[i] + (j- coin[i]) = j �̹Ƿ�  j-coin[i]�� ����� ���� ���
//		}
//	}
//
//	printf("%d\n", dp[k]);
//
//	return 0;
//}