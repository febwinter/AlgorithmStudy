//#include<iostream>
//
//#pragma warning(disable : 4996)
//
//
//
//int main() {
//	int n, m;
//	int t;
//
//	scanf("%d", &t);
//
//	//dp[n][m] �� n���� ����Ʈ���� m���� ����Ʈ�� �ٸ��� ���� �� �ִ� ��� �� ��
//	while (t--) {
//		scanf("%d %d", &n, &m);
//
//		int dp[30][30] = { 0 };
//
//		for (int i = 0; i <= m; i++) dp[1][i] = i;
//
//		for (int i = 2; i <= n; i++) {
//			for (int j = i; j <= m; j++) {
//				for (int k = j; k >= i; k--)
//					dp[i][j] += dp[i - 1][k - 1];
//			}
//		}
//
//		printf("%d\n", dp[n][m]);  
//
//
//	}
//
//	return 0;
//}