#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class graph {
private:
	vector<vector<int>> gra;
	int n, m;
public:
	graph(vector<vector<int>> a, int m, int n);
	vector<int> DFS();
	int doDFS(vector<int> &visited, int point, int &space);
};

graph::graph(vector<vector<int>> a, int m, int n) {
	vector<int> gras;
	for (int i = 0; i < m * n; i++) {
		gra.push_back(gras);
	}
	this->m = m;
	this->n = n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 0) {
				gra[m * i + j].push_back(m * i + j);
				if (i != 0 && a[i - 1][j] == 0) { gra[i*m + j].push_back((i - 1) * m + j); }
				if (i != a.size() - 1 && a[i + 1][j] == 0) { gra[i * m + j].push_back((i + 1) * m + j); }
				if (j != 0 && a[i][j - 1] == 0) { gra[i * m + j].push_back(i * m + (j - 1)); }
				if (j != a[i].size() - 1 && a[i][j + 1] == 0) { gra[i * m + j].push_back(i * m + (j + 1)); }
			}
		}
	}
}

vector<int> graph::DFS() {
	vector<int> visited(m * n);
	for (int i = 0; i < m * n; i++) {
		if (gra[i].size() == 0) {
			visited[i] = 2;
		}
		else { visited[i] = 0; }
	}
	vector<int> space;

	for (int i = 0; i < m * n; i++) {
		if (visited[i] == 0) { visited[i] = 1; int spa = 1; space.push_back(doDFS(visited, i, spa)); }
	}

	return space;
}

int graph::doDFS(vector<int> &visited, int point, int &space) {
	for (vector<int>::iterator it = gra[point].begin(); it != gra[point].end(); it++) {
		if (visited[*it] == 0) {
			visited[*it] = 1;
			space++;
			doDFS(visited, *it, space);
		}
	}

	return space;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int m, n, k;
	cin >> m >> n >> k;
	vector<vector<int>> matrix;
	vector<int> maxd(m, 0);
	for (int i = 0; i < n; i++) {
		matrix.push_back(maxd);
	}
	for (int i = 0; i < k; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j = x1; j < x2; j++) {
			for (int l = y1; l < y2; l++) {
				matrix[j][l] = 1;
			}
		}
	}
	graph myGraph(matrix, m, n);
	vector<int> space = myGraph.DFS();
	sort(space.begin(), space.end());
	cout << space.size() << "\n";
	for (int i = 0; i < space.size(); i++) {
		cout << space[i] << " ";
	}
}