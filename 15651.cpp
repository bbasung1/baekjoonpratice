#include <iostream>
#include <vector>
using namespace std;

const int MAX = 8 + 1;

int arr[MAX];

void func(int cnt, int N, int M)
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}

	for (int i = 1; i <= N; i++) {
		arr[cnt] = i;
		func(cnt + 1, N, M);
	}
}

int main(void)
{
	int N, M;
	cin >> N >> M;

	func(0, N, M);
	return 0;
}