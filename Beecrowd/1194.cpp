#include <bits/stdc++.h>
using namespace std;

typedef struct Tree {

	char c;
	Tree* left;
	Tree* right;

	Tree(char c) : c(c), left(nullptr), right(nullptr) {}
	
}Tree;

Tree* insertBT(Tree* tree, char c) {

	if(!tree) return new Tree(c);
	if(c > tree->c) tree->right = insertBT(tree->right,c);
	else tree->left = insertBT(tree->left,c);

	return tree;

}

void storeBSTNodes(Tree* tree, vector<Tree*> &nodes) {

	if(!tree) return;

	storeBSTNodes(tree->left, nodes);
	nodes.push_back(tree);
	storeBSTNodes(tree->right, nodes);

}

Tree* buildTreeUtil(vector<Tree*> &nodes, int start, int end) {

	if(start > end) return nullptr;

	int mid = (start+end)/2;
	Tree* tree = nodes[mid];

	tree->left = buildTreeUtil(nodes, start, mid-1);
	tree->right = buildTreeUtil(nodes, mid+1, end);

	return tree;

}

Tree* buildTree(Tree* tree) {

	vector<Tree*> nodes;
	storeBSTNodes(tree, nodes);

	return buildTreeUtil(nodes, 0, nodes.size()-1);

}

Tree* insertLeftTree(Tree* tree, char c) {
	
	if(!tree) return new Tree(c);
	tree->left = insertLeftTree(tree->left,c);

	return tree;

}

void posOrd(Tree* tree) {

	if(!tree) return;

	posOrd(tree->left);
	posOrd(tree->right);
	cout << tree->c;

}

int main() {

	int n;
	cin >> n;
	while(n--) {
		Tree* tree = nullptr;
		int m;
		string pre, in;
		cin >> m;
		cin.ignore();
		cin >> pre >> in;
		
		for(auto x : pre) {
			tree = insertBT(tree,x);			
		}

		tree = buildTree(tree);

		posOrd(tree);
		cout << endl;				
	}

}
