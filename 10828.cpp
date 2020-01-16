#include <iostream>
#include <cstdlib>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

class stack {
public:
	Node* head;
	int length;

	void push(int data);
	void pop();
	int size();
	bool empty();
	void top();
};

void stack::push(int data) {
	Node* node = new Node();
	node->data = data;
	node->next = this->head;
	this->head = node;
	length++;
}

void stack::pop() {
	Node *head = this->head;
	if (head) {
		cout << head->data << endl;
		this->head = head->next;
		length--;
		delete head;
	}
}

int stack::size() {
	return this->length;
}

bool stack::empty() {
	Node *head = this->head;
	if (head) {
		return false;
	}
	return true;
}

void stack::top() {
	Node *head = this->head;
	if (head) {
		cout << head->data << endl;
	}
	else {
		cout << -1 << endl;
	}
}

int main() {
	stack* Linkedstack = new stack();
	if (Linkedstack->empty) { cout << "EMPTY" << endl; }
	Linkedstack->push(1);
	Linkedstack->top();
	
}