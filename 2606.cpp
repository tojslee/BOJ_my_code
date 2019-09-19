#include <iostream>
#include <list>
#include <vector>
using namespace std;

class graph {
public:
	graph(int n);
	void addEdge(int from, int to);
	int DFS(int start);
	void doDFS(int a, vector<bool>& visited, int &connected);
private:
	int n;
	vector<list<int>> gra;
};

graph::graph(int n) {
	this->n = n;
	for (int i = 0; i < n + 1; i++) {
		list<int> a;
		gra.push_back(a);
	}
}

void graph::addEdge(int from, int to) {
	this->gra[from].push_back(to);
	this->gra[to].push_back(from);
}

int graph::DFS(int start) {
	vector<bool> visited(this->n + 1 ,false);
	int connected = 0;
	visited[start] = true;
	for (list<int>::iterator it = this->gra[start].begin(); it != this->gra[start].end(); it++) {
		if (visited[*it] == false) {
			visited[*it] = true;
			connected++;
			doDFS(*it, visited, connected);
		}
	}
	return connected;
}

void graph::doDFS(int a, vector<bool>& visited, int &connected) {
	for (list<int>::iterator it = this->gra[a].begin(); it != this->gra[a].end(); it++) {
		if (visited[*it] == false) {
			visited[*it] = true;
			connected++;
			doDFS(*it, visited, connected);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	graph myGraph(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		myGraph.addEdge(a, b);
	}
	cout << myGraph.DFS(1) << "\n";
}