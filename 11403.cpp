#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

class graph {
private:
	map<int, vector<int>> gra;
	int n;
public:
	void addEdge(int from, int to);
	graph(int n);
	bool BFS(int from, int to);
};

void graph::addEdge(int from, int to) {
	gra[from].push_back(to);
}

graph::graph(int n) {
	this->n = n;
	vector<int> als;
	for (int i = 0; i < n; i++) {
		gra[i] = als;
	}
}

bool graph::BFS(int from, int to) {
	//if (from == to) { return true; }
	queue<int> aux;
	vector<bool> visited;
	for (int i = 0; i < this->n; i++) {
		visited.push_back(false);
	}
	aux.push(from);
	while (!aux.empty()) {
		int th = aux.front();
		for (vector<int>::iterator it = gra[th].begin(); it != gra[th].end(); it++) {
			if (visited[*it] == false) {
				visited[*it] = true;
				if (*it == to) { return true; }
				aux.push(*it);
			}
		}
		aux.pop();
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	graph myGraph(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int a;
			cin >> a;
			if (a) { myGraph.addEdge(i, j); }
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << myGraph.BFS(i, j) << " ";
		}
		cout << "\n";
	}
}