#include <iostream>

using namespace std;

class node {
public:
	int key;
	node *left, *right;
};

typedef node * tree;
tree tr;

class cay {
	tree *root;
public:
	tree rp;
	cay();
	~cay();
	tree newnode() {
		tree q = new node;
		return q;
	}
	int Empty(tree t);
	void them(tree &p, int x);
	void tao(tree &p);
	void NLR(tree t);
	void LNR(tree t);
	void LRN(tree t);
	void remove_case_3(tree &t);
	void remove(tree &t, int x);
	int sonode(tree t);
	int sonode_la(tree t);
	int sonode_tg(tree t);
	int do_cao(tree t);
};


int cay::Empty(tree t) {
	return (root == NULL ? true : false);
}

void cay::them(tree &p, int x) {
	if (p == NULL) {
		p = newnode();
		p->key = x;
		p->left = NULL;
		p->right = NULL;
	}
	else {
		if (x < p->key) {
			them(p->left, x);
		}
		else {
			if (x > p->key) {
				them(p->right, x);
			}
		}
	}
}

void cay::tao(tree &p) {
	int khoa;
	do {
		cout << "\nNHap khoa: "; cin>>khoa;
		if (khoa != 0) {
			them(p, khoa);
		}
	} while (khoa != 0);
}

void cay::NLR(tree p) {
	if (p != NULL) {
		cout << p->key << " ";
		NLR(p->left);
		NLR(p->right);
	}
}

void cay::LNR(tree p) {
	if (p != NULL) {
		LNR(p->left);
		cout << p->key << " ";
		LNR(p->right);
	}
}

void cay::LRN(tree t) {
	if (t != NULL) {
		LRN(t->left);
		LRN(t->right);
		cout << t->key << " ";
	}
}

	
void cay::remove_case_3(tree &t) {
	if (t->left != NULL) {
	remove_case_3(t->left);
	}
	else {
	rp->key = t->key;
	rp = t;
	t = rp->right;

	}
	}
void cay::remove(tree &p,int x) {
	if (p == NULL) cout << "\nKO tim dc";
	else 
	{
		if (x < p->key) 
		{
			remove(p->left, x);
		}
			else 
			{
				if (x > p->key) 
				{
					remove(p->right, x);
				}
					else {
							rp = p;
							if (rp->right == NULL) p = rp->left;
					else {
							if (rp->left == NULL) {
								p = rp->right;
							}
					else {
						remove_case_3(rp->right);
						}
					}
					delete rp;
				}

			}

		}
	}
//dem so nut
int cay::sonode(tree t) {
	if (t == NULL) return 0; //vua kiem tra rong vua kiem tra xem co phai la nut la khong
	else {
		return sonode(t->left) + sonode(t->right) + 1;
	}
}
int cay::sonode_la(tree t) {
	if (t == NULL) return 0; //nut la
	else {
		if (t->left == NULL && t->right == NULL) { return 1; }
		else {
			return sonode_la(t->left) + sonode_la(t->right);
		}
	}
}

int cay::sonode_tg(tree t) {
	if (t == NULL) return 0;
	else {
		if (t->left != NULL || t->right != NULL) {
			return 1 + sonode_tg(t->left) + sonode_tg(t->right);
		}
		else {
			return sonode_la(t->left) + sonode_la(t->right);
		}
	}
}

int cay::do_cao(tree t) {
	if (t == NULL) return 0;
	else {
		if (t->left == NULL && t->right == NULL) return 1;
		else {
			if (t->left != NULL || t->right != NULL) {
				if (do_cao(t->left) > do_cao(t->right)) {
					return do_cao(t->left) + 1;
				}
				else {
					return do_cao(t->right) + 1;
				}
			}
		}
	}
}
cay::cay() {
	root = NULL;
}
cay::~cay() {
	if (root != NULL);
	delete root;
}

int main() {
	cay c;
	c.tao(tr);
	cout << endl;
	c.NLR(tr);
	cout << endl;
	c.LNR(tr);
	cout << endl;
	c.LRN(tr);
	cout << endl;
	c.remove(tr, 20);
	cout << endl;
	c.NLR(tr);
	cout << endl;
	c.LNR(tr);
	cout << endl;
	c.LRN(tr);
	cout << endl;
	cout << "\nDem nut: ";
	cout << c.sonode(tr);
	cout << endl;
	cout << "\nDem nut la: ";
	cout << c.sonode_la(tr);
	cout << endl;
	cout << "\nDem nut trung gian: ";
	cout << c.sonode_tg(tr) - 1;
	cout << endl;
	cout << "\nDem h: ";
	cout << c.do_cao(tr);
	cout << endl;
	system("pause");
	return 0;
}