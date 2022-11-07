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

void InsertBT(Tree* tree, int value) {
	if (value > tree->value) {
		if (!tree->right) {
			tree->right = new Tree(value);
			return;
		}	
		InsertBT(tree->right, value);
	} else {
		if (!tree->left) {
			tree->left = new Tree(value);
			return;
		}	
		InsertBT(tree->left, value);
	}
}

void PreOrder(Tree* tree) {
	if (!tree) return;
	cout << tree->value << " ";
	PreOrder(tree->left);
	PreOrder(tree->right);
}

void InOrder(Tree* tree) {
	if (!tree) return;
	PreOrder(tree->left);
	cout << tree->value << " ";
	PreOrder(tree->right);
}
void PosOrder(Tree* tree) {
	if (!tree) return;
	PreOrder(tree->left);
	PreOrder(tree->right);
	cout << tree->value << " ";
}
int main(){
	Tree* tree = nullptr;
	int x;
	bool ok = false;
	while (cin >> x) {
		if (!ok) {
			tree = new Tree(x);
			ok = true;			
			continue;
		}
		InsertBT(tree, x);
	}
	PreOrder(tree);
	cout << endl;
	InOrder(tree);
	cout << endl;
	PosOrder(tree);
	cout << endl;
}
