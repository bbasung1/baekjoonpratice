#include <iostream>
#include <vector>
using namespace std;

const int MAX = 8 + 1;

int arr[MAX];
//bool visited[MAX];

void func(int cnt, int N, int M,int test)
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}

	for (int i = test; i <= N; i++) {
		/*if (!visited[i])
		{*/
		//visited[i] = true;
		arr[cnt] = i;
		func(cnt + 1, N, M,i);
		//visited[i] = false;
		//}
	}
}

int main(void)
{
	int N, M;
	cin >> N >> M;

	func(0, N, M,1);
	return 0;
}