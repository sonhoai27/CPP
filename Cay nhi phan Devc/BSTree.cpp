#include <iostream>

using namespace std;

class NODE {
public:
	int key;
	NODE* left;
	NODE* right;
};

typedef NODE *tree;
class BSTree {
private:
	tree *root;
public:
	void init(); //ham khoi tao
	tree new_node();
	//them 1 nut vao co khoa key
	void them_node(tree &q, int x);
	void tao_cay(tree &p);
	void duyet_cay(tree q);
};

void BSTree::init() {
	root = NULL; //gan bang null
}

//khoi tao vung nho new node
tree BSTree::new_node() {
	tree p = new NODE;
	return p;
}

void BSTree::them_node(tree &q, int x) {
	if (q == NULL) {
		q->key = x;
		q->left = NULL;
		q->right = NULL;
	}
	else {
		if (q->key > x) {
			them_node(q->left, x);
		}
		else {
			if (q->key < x) {
				them_node(q->right, x);
			}
			else {
				if (q->key == x) {
					return;
				}
			}
		}
	}
}

void BSTree::tao_cay(tree &p) {
	int khoa;
	do {
		cout << "\nNhap khoa: ";
		cin >> khoa;
		if (khoa != 0) {
			them_node(p, khoa);
		}
	} while (khoa != 0);
}

//theo kieu nlf
void BSTree::duyet_cay(tree q){
	if(q != NULL) {
		cout<<q->key<<" ";
		duyet_cay(q->left);
		duyet_cay(q->right);
	}
}

int main() {
	BSTree c;
	tree q;
	q = c.new_node();
	c.tao_cay(q);
	c.duyet_cay(q);
	
	system("pause");
	return 0;
}
