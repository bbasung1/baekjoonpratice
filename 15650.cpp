#include <iostream>
#include <vector>
using namespace std;

const int MAX = 8 + 1;

int N, M;
int arr[MAX];
bool visited[MAX];
void func(int cnt,int test)
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}

	for (int i = test; i <= N; i++) {
		if (!visited[i])
		{
			visited[i] = true;
			arr[cnt] = i;
			func(cnt + 1,i);
			visited[i] = false;
		}
	}
}

int main(void)
{
	cin >> N >> M;

	func(0,1);
	return 0;
}