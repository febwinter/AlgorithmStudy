//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//
//
////void go(int n, vector<char> &alpha, string &password, int index) �Լ� 
////���ϴ� �н����带 ����� ���� �Լ�
////alpah�� ���������� ���� �Ǿ� �־�� ��
////�Ű����� 
////n : ������� �ϴ� �н����� ����
////alpha : �Է����� �־��� ���ĺ���
////password : ���� ���� ������� �н�����
////index : alpha �� index
//
////bool check(int n,vector<char> &alpha,string &password,int index) �Լ�
////������ ���� ���ĺ����� �н����带 ���� �� �ִ��� Ȯ�� �ϴ� �Լ�
////�Ű������� go �Լ��� ����.
//
//bool check(int n, vector<char> &alpha, string password, int index) {
//	if (password.length()+(alpha.size() - index) < n) {
//		return false;
//	}
//
//	
//	int s = n - password.length();  //���� �ε����� ���ڸ� �ְ� ������ �� ���� �� �ִ� ����
//	
//	int pmo = 0;
//	int pja = 0;
//	for (char x : password) {
//		if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
//			pmo++;
//		}
//		else
//			pja++;
//	}
//
//	if (s != 0) {
//
//		int amo = 0;
//		int aja = 0;                                //�� �� alpha.size() - index �� ����� �ؾ��� ��ȿ����(���������� �ִ� ���̰� 15�ۿ� �ȵǼ� �������ϳ�) �����̳� �ٸ� ��� �䱸��
//		for (int i = index; i < alpha.size(); i++) {
//			char x = alpha[i];
//			if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
//				amo++;
//			}
//			else
//				aja++;
//		}
//		if (pmo + amo >= 1 && pja + aja >= 2) {
//			return true;
//		}
//	}
//	
//	else {
//		return pmo >= 1 && pja >= 2;
//	}
//	
//}
//
//
//void go(int n, vector<char> &alpha, string password, int index) {
//	if (check(n, alpha, password, index)) {
//		if (password.length() == n) {
//			cout << password << '\n';
//			return;
//		}
//		go(n, alpha, password + alpha[index], index + 1);
//		go(n, alpha, password, index + 1);
//	}	
//}
//
//int main() {
//	int l,c;
//	cin >> l>>c;
//
//	vector<char> alpha(c);
//
//	for (int i = 0; i < c; i++) {
//		cin >> alpha[i];
//	}
//	sort(alpha.begin(), alpha.end());
//
//	string password = "";
//	go(l, alpha, password, 0);
//
//	return 0;
//}