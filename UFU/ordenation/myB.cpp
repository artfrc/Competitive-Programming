#include <bits/stdc++.h>
using namespace std;

typedef struct Tree{

	int value;
	Tree* left;
	Tree* right;

	Tree(int value) : value(value), left(nullptr), right(nullptr) {}

}Tree;

Tree* insertBT(Tree* tree, int value) {
	
	if(!tree) { // árvore vazia
		return new Tree(value); // crio um novo nó
	}

	if(value > tree->value) { // jogo o elemento maior para a direita da arvore
		tree->right = insertBT(tree->right,value);
	} else { // jogo o elemento menor para a esquerda da arvore
		tree->left = insertBT(tree->left,value);
	}

	return tree;

}

bool aux;

void preOrder(Tree* tree) {

	if(!tree) return;

	if(aux) cout << " ";

	cout << tree->value;
	aux = true;
	preOrder(tree->left);
	preOrder(tree->right);

}

void inOrder(Tree* tree) {

	if(!tree) return;


	inOrder(tree->left);
	if(aux) cout << " ";
	
	cout << tree->value;
	aux = true;
	inOrder(tree->right);

}

void posOrder(Tree* tree) {

	if(!tree) return;


	posOrder(tree->left);
	posOrder(tree->right);
	
	if(aux) cout << " ";
	cout << tree->value;
	aux = true;

}

int main(){

	int n;
	Tree* tree = nullptr;
	while(cin >> n) {
		tree = insertBT(tree,n);	
	}
	aux = false;
	preOrder(tree);
	cout << endl;
	aux = false;
	inOrder(tree);
	cout << endl;
	aux = false;
	posOrder(tree);
	cout << endl;

}
