#include <iostream>
using namespace std;

int main()
{
	// �׽�Ʈ ��
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		// ��� ��
		int num;
		cin >> num;

		int score[1000];

		double avg = 0;
		for (int k = 0; k < num; k++)
		{
			cin >> score[k]; // ����

			avg += score[k]; // ���� �հ�
		}
		avg = avg / num;

		// ��պ��� �Ѵ� ���?
		double result = 0;
		for (int k = 0; k < num; k++)
		{
			if (score[k] > avg)
				result++;
		}
		result = result/num *100;
		
		cout << fixed;
		cout.precision(3);
		cout << result << "%" << endl;
	}
}