#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Node {
public:
	int key;
	Node *left, *right;
};

typedef Node *tree;
tree tr;

class Cay {
	tree *root;
public:
	Cay();
	~Cay();
	tree newnode() {
		tree q = new Node;
		return q;
	}
	int Empty(tree t);
	void Them(tree &p, int x);
	void Tao_Cay(tree &p);
	void NLR(tree p);
};

int main() {
	Cay c;
	c.Tao_Cay(tr);
	cout << endl;
	c.NLR(tr);
	system("pause");
	return 0;
}

Cay::Cay()
{
	root = NULL;
}
Cay::~Cay() {
	if (root != NULL);
	delete root;
}

void Cay::NLR(tree p) {
	if (p != NULL) {
		cout << p->key << " ";
		NLR(p->left);
		NLR(p->right);
	}
}

int Cay::Empty(tree t) {
	return (root == NULL ? true : false);
}

void Cay::Them(tree &p, int x) {
	if (p == NULL) {
		p = newnode();
		p->key = x;
		p->left = NULL;
		p->right = NULL;
	}
	else {
		if (x < p->key) {
			Them(p->left, x);
		}
		else {
			if (x > p->key) {
				Them(p->right, x);
			}
		}
	}
}
void Cay::Tao_Cay(tree &p) {
	int array[10];
	int i = 0;
	int b = 0;
	int a;
	srand(time(NULL));
	array[0] = rand() % 100 + 1;
	while (i < 10) {
		bool trung = false;
		a = rand() % 100 + 1;
		for (int j = 0; j <= i; j++) {
			if (a == array[j])
			{
				trung = true;
				break;
			}
		}
		if (!trung)
		{
			i++;
			array[i] = a;
			Them(p, a);
		}

	}
	cout << "\nMang Random NV";
	for (int j = 0; j < 10; j++) {
		cout << array[j] << " ";
	}
}
