#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;

class graph {
private:
	vector<vector<int>> gra;
	int n, m;
public:
	graph(vector<vector<int>> a, int m, int n);
	vector<int> DFS();
	int doDFS(vector<int>& visited, int point, int& space);
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
				if (i != 0 && a[i - 1][j] == 0) { gra[i * m + j].push_back((i - 1) * m + j); }
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

int graph::doDFS(vector<int>& visited, int point, int& space) {
	for (vector<int>::iterator it = gra[point].begin(); it != gra[point].end(); it++) {
		if (visited[*it] == 0) {
			visited[*it] = 1;
			space++;
			doDFS(visited, *it, space);
		}
	}

	return space;
}

vector<vector<int>> raining(int a, vector<vector<int>> matrix, vector<vector<int>> &newMatrix) {
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (matrix[i][j] <= a) {
				newMatrix[i][j] = 1;
			}
			else {
				newMatrix[i][j] = 0;
			}
		}
	}
	return newMatrix;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	vector<vector<int>> matrix;
	vector<int> vax(n);
	for (int i = 0; i < n; i++) {
		matrix.push_back(vax);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int a;
			cin >> a;
			matrix[i][j] = a;
		}
	}
	vector<int> max;
	vector<int> min;
	for (int i = 0; i < n; i++) {
		max.push_back(*max_element(matrix[i].begin(), matrix[i].end()));
		//min.push_back(*min_element(matrix[i].begin(), matrix[i].end()));
	}
	vector<int> overall;
	for (int i = 0; i <= *max_element(max.begin(), max.end()); i++) {
		vector<vector<int>> newMatrix;
		vector<int> asdf(n);
		for (int i = 0; i < n; i++) {
			newMatrix.push_back(asdf);
		}
		raining(i, matrix, newMatrix);
		graph myGraph(newMatrix, n, n);
		vector<int> space = myGraph.DFS();
		overall.push_back(space.size());
	}

	cout << *max_element(overall.begin(), overall.end());
}