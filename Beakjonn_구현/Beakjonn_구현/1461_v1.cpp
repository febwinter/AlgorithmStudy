
//version 1 Ÿ�� �ƿ�

//���� ��� : 1. ���� ���� �κ� ��� �κ��� ������ ���� �� �������� ����
//            2. �� �� ���� ū ���밪�� ���信 ���ϱ⸸ ��. �������� �Դ� �����ϹǷ� *2�� �ؾ���
//            3. ���ʰ� �������� ���� ������ 1~m�� ���� �Ͽ� ��� ��쿡 �� ����
//������     : ��� ��쿡 ���� ���� �ϴٺ���, �־��� ��� O(n!)(n�� �ִ� 10000) �� ������ ������ �ſ� ��ȿ����

//n�� ���� ����, ������ m�� ���ϴ� ������ ���� ����

//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//
//
//
//#define MAX 20000
//
////falg == true is ���밪�� ���� ū �������̳� ����
//
//
//
//int Solution(vector<int> v, int m ,int st, int ftCnt,bool flag) {  
//
//	int min = MAX;
//	int temp = MAX;
//	for (int i = 0; i < m && st + i < v.size(); i++) {
//		int ft = v[st+i] * 2;
//		
//		if (st + i + 1 == v.size()) {
//			if (flag == true) {
//				temp = ftCnt + v.back();
//			}
//			else {
//				temp = ftCnt + (v.back() * 2);
//			}
//		}
//		else {
//			temp = Solution(v, m, st + i + 1, ftCnt + ft, flag);
//		}
//		if (min > temp) {
//			min = temp;
//		}
//
//	}
//	return min;
//}
//
//
//int main() {
//	int n, m;
//
//	cin >> n >> m;
//
//	vector<int> left;
//	vector<int> right;
//
//	for (int i = 0; i < n; i++) {
//		int num;
//		scanf("%d", &num);
//		if (num < 0) left.push_back(-num);
//		else right.push_back(num);
//	}
//	sort(left.begin(), left.end());
//	sort(right.begin(), right.end());
//
//	int left_min = 0;
//	int right_min = 0;
//	if (left.size() > 0 && right.size() > 0)
//	{
//		if (left.back() > right.back()) {
//			left_min = Solution(left, m, 0, 0, true);
//			right_min = Solution(right, m, 0, 0, false);
//		}
//		else {
//			left_min = Solution(left, m, 0, 0, false);
//			right_min = Solution(right, m, 0, 0, true);
//		}
//	}
//	else if (left.size() == 0) {
//		right_min = Solution(right, m, 0, 0, true);
//	}
//	else {
//		left_min = Solution(left, m, 0, 0, true);
//	}
//
//	int ans = left_min + right_min;
//
//	printf("%d\n", ans);
//
//	return 0;
//}