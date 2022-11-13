#include <bits/stdc++.h>
using namespace std;

typedef struct Tree {

	int value;
	Tree* left;
	Tree* right;

	Tree(int value) : value(value), left(nullptr), right(nullptr) {}

}Tree;

Tree* insertBT(Tree* tree, int value) {

	if(!tree) {
		return new Tree(value);
	}

	if(value > tree->value) {
		tree->right = insertBT(tree->right,value);
	} else {
		tree->left = insertBT(tree->left,value);
	}

	return tree;

}

bool a = false;

void preOrd(Tree* tree) {

	if(!tree) return;
	if(a) cout << " ";
	a = true;
	cout << tree->value;
	preOrd(tree->left);
	preOrd(tree->right);

}

void inOrd(Tree* tree) {

	if(!tree) return;
	inOrd(tree->left);
	if(a) cout << " ";
	a = true;
	cout << tree->value;
	inOrd(tree->right);

}

void posOrd(Tree* tree) {

	if(!tree) return;
	posOrd(tree->left);
	posOrd(tree->right);
	if(a) cout << " ";
	a = true;
	cout << tree->value;

}

int main() {
	
	int n, count = 0;
	bool aux = false;
	cin >> n;
	while(n--) {
		if(aux) cout << endl;
		count++;		
		cout << "Case " << count << ":" << endl;
		Tree* tree = nullptr;
		int x;
		cin >> x;
		while(x--) {
			int N;
			cin >> N;
			tree = insertBT(tree,N);
		}
		a = false;
		cout << "Pre.: ";
		preOrd(tree); cout << endl;

		a = false;
		cout << "In..: ";
		inOrd(tree); cout << endl;

		a = false;
		cout << "Post: ";
		posOrd(tree); cout << endl;
		aux = true;
	
	}
	cout << endl;

}
