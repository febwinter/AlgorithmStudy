#include <string>
#include <vector>
#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;



//�̽� : ã�� �Ҽ��� �־��� ���ڿ��� ���� �� �ִ��� Ȯ���ϴ� �˰��� �ð����⵵ ���̱�

int IsPrimeNumber(int n) //�Լ� ���ǹ�
{
	int i = 0;
	int last = n / 2;   //����� ���� ���� �Ҽ��̹Ƿ� 2���� n/2(�ڱ��ڽ�/2)������ Ȯ���ϸ� ��
	if (n <= 1)//�Ҽ��� 1���� ū �ڿ������� ��
	{
		return 0;
	}
	//(�ڱ��ڽ�/2)���� ū���� ����� �� �� ����
	for (i = 2; i <= last; i++) //i�� 2���� last���� 1�� ������Ű�� �ݺ� ����
	{
		if ((n%i) == 0) //n�� i�� ���������� �������� 0�̸�(��, i�� n�� ����� �ƴ�)
		{
			return 0; //�Ҽ��� �ƴϹǷ� 0��ȯ(i�� ����̹Ƿ� n�� �Ҽ��� �ƴ�)
		}
	}
	return 1; //1~last(�ڱ��ڽ�/2)���̿� ����� �����Ƿ� �Ҽ���
}


//
int solution(string numbers) {
	int answer = 0;
	//int check[10] = { 0, };
	bool check[10000000];
	memset(check, true, sizeof(check));
	vector<int> v;

	for (int i = 0; i < numbers.size(); i++) {
		v.push_back(numbers[i] - '0');
	}
	sort(v.begin(), v.end());



	/////////////////////////////////////////////// numbers�� ���� �� �ִ� ���� ��� ���ϰ�, �Ҽ� ���� �Ǻ�

	int max = 0;
	for (int i = 0; i < numbers.size(); i++) {
		check[numbers[i] - '0']++;
		if (max < numbers[i] - '0')
			max = numbers[i] - '0';

	}

	max = (max + 1)*pow(10, numbers.size() - 1);
	if (check[2] != 0) {
		answer++;
		//cout << '2' << '\n';
	}
	if (check[3] != 0) {
		answer++;
		//cout << '3' << '\n';
	}
	for (int i = 4; i < max; i++) {

		if (IsPrimeNumber(i)) {
			int cmp[10] = { 0, };

			string tmp = to_string(i);
			bool flag = true;
			for (int i = 0; i < tmp.size(); i++) {
				cmp[tmp[i] - '0']++;
				if (check[tmp[i] - '0'] < cmp[tmp[i] - '0']) {
					flag = false;
					break;
				}
			}

			if (flag == true) {
				answer++;
				//cout << tmp << '\n';
			}
		}
	}
	return answer;
}


int main() {
	string input;

	cin >> input;

	int ans = solution(input);

	printf("%d\n", ans);

	return 0;
}


//int solution(string numbers) {
//	bool check[7];
//	memset(check, true, sizeof(check));
//	int answer = 0;
//	
	//int max = pow(10, numbers.size());
	//for (int i = 2; i < max; i++) {
	//	
	//	if (i % 2 != 0 && i % 3 != 0) {
	//		string tmp = to_string(i);
	//		bool flag = false;
	//		int cnt = 0;
	//		for (int i = 0; i < tmp.size(); i++) {
	//			for (int j = 0; j < numbers.size(); j++) {
	//				if(tmp[i] == numbers[j] && check[j] == true){
	//					flag = true;
	//					check[j] = false;
	//					break;
	//				}
	//			}
	//			if (flag == true) {
	//				flag = false;
	//				cnt++;
	//			}
	//			else break;
	//		}
	//		if (cnt == tmp.size()) answer++;
	//		memset(check, true, sizeof(check));
	//	}
	//}
//
//
//	return answer;
//}


//int solution(string numbers) {
//	int answer = 0;
//	int check[10] = { 0, };
//
//	int max = 0;
//	for (int i = 0; i < numbers.size(); i++) {
//		check[numbers[i] - '0']++;
//		if (max < numbers[i] - '0')
//			max = numbers[i] - '0';
//
//	}
//
//	max = (max + 1)*pow(10, numbers.size() - 1);
//	if (check[2] != 0) {
//		answer++;
//		//cout << '2' << '\n';
//	}
//	if (check[3] != 0) {
//		answer++;
//		//cout << '3' << '\n';
//	}
//	for (int i = 4; i < max; i++) {
//
//		if (IsPrimeNumber(i)) {
//			int cmp[10] = { 0, };
//
//			string tmp = to_string(i);
//			bool flag = true;
//			for (int i = 0; i < tmp.size(); i++) {
//				cmp[tmp[i] - '0']++;
//				if (check[tmp[i] - '0'] < cmp[tmp[i] - '0']) {
//					flag = false;
//					break;
//				}
//			}
//
//			if (flag == true) {
//				answer++;
//				//cout << tmp << '\n';
//			}
//		}
//	}
//	return answer;
//}