#include <iostream>
using namespace std;

int main()
{
	// 테스트 수
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		// 사람 수
		int num;
		cin >> num;

		int score[1000];

		double avg = 0;
		for (int k = 0; k < num; k++)
		{
			cin >> score[k]; // 점수

			avg += score[k]; // 점수 합계
		}
		avg = avg / num;

		// 평균보다 넘는 사람?
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