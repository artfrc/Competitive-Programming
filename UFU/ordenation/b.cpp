#include <bits/stdc++.h>
using namespace std;

typedef struct Tree {
	int value;
	Tree* left;
	Tree* right;
	Tree(int value) : value(value), left(nullptr), right(nullptr) {}
	Tree() {
		this->left = nullptr;
		this->right = nullptr;
	} 
} Tree;

Tree* InsertBT(Tree* tree, int value) {
	if (!tree) {
		return new Tree(value);
	}
	if (value > tree->value) {
		tree->right = InsertBT(tree->right, value);
	} else {
		tree->left = InsertBT(tree->left, value);
	}
	return tree;
}

void PreOrder(Tree* tree) {
	if (!tree) {
		return;
	}
	cout << tree->value << " ";
	PreOrder(tree->left);
	PreOrder(tree->right);
}

void InOrder(Tree* tree) {
	if (!tree) return;
	InOrder(tree->left);
	cout << tree->value << " ";
	InOrder(tree->right);
}
void PosOrder(Tree* tree) {
	if (!tree) return;
	PosOrder(tree->left);
	PosOrder(tree->right);
	cout << tree->value << " ";
}
int main(){
	Tree* tree = nullptr;
	int x;
	bool ok = false;
	Tree* root;
	while (cin >> x) {
		tree = InsertBT(tree, x);
	}
	PreOrder(tree);
	cout << endl;
	InOrder(tree);
	cout << endl;
	PosOrder(tree);
	cout << endl;
}
