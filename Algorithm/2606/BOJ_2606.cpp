#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N, M;
vector<vector<int>> map;
bool visited[101];
queue<int> q;
int count, v;
void bfs(int start) {
	visited[start];
	q.push(start);

	while (!q.empty) {
		v = q.front();
		q.pop();
		count++;

		for (int j = 1; j <= N; j++) {
			if (!visited[j] && map[v][j] = 1){
			visited[j] = true;
			q.push(j);
}
		}
	}

}

int main(void) {
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int from, to;
		cin >> from >> to;
		map[from].push_back(to);
		map[to].push_back(from);
	}
	bfs(1);
	cout << count;
}