//#include<iostream>
//#include<vector>
//#include<string>
//#include<cstring>
//
//using namespace std;
//
////int go(vector<string> &board, bool &check, int x, int y) �Լ�
////�Ű�����
////board : �����ǿ� ���� �ִ� ���ĺ�  , row ���̴� board.size() =>���ڿ� ����  col ���̴� board[0].size() => ���ڿ� ����
////check : ������ ���ĺ� üũ check[0~23] �빮�� ���ĺ� ���� ��ŭ ���̸� ���� ex) check['B' - 'A'] == check[1] 
////x ,y : ���� ���忡�� ��ǥ
////�Լ� ����
////���忡�� ������ ���ĺ��� üũ�ϸ� ������ ��� ���� ����
//
//
////dx[0] dy[0] : ���������� �ѹ� �̵�
////dx[1] dy[1] : �������� �ѹ� �̵�
////dx[2] dy[2] : ���� �ѹ� �̵�
////dx[3] dy[3]  : �Ʒ��� �ѹ� �̵�
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//int go(vector<string> &board,vector<bool> &check, int x, int y) {
//	int ans = 0;
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (nx >= 0 && nx < board.size() && ny >= 0 && ny < board[0].size()) {
//			if (check[board[nx][ny] - 'A'] == false) {
//				check[board[nx][ny] - 'A'] = true;
//				int next = go(board, check, nx, ny);
//				if (ans < next) ans = next;
//				check[board[nx][ny] - 'A'] = false;
//			}
//		}
//	}
//	return ans + 1; //ù ��° ĭ�� ������ ����
//}
//
//int main() {
//	int R, C;
//	
//	cin >> R >> C;
//	vector<string> board(R);
//	
//	for (int i = 0; i < R; i++) {
//		cin >> board[i];
//	}
//
//	vector<bool> check;
//	
//	for (int i = 0; i < 24; i++) {
//		check.push_back(false);
//	}
//	check[board[0][0] - 'A'] = true;
//	int result = go(board, check, 0, 0);
//
//	cout << result << '\n';
//
//	return 0;
//}