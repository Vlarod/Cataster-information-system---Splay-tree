#pragma once
#include <stack> 
#include <iostream> 
#include <vector>

template<typename K, typename T>
class Node {
private:
	Node * leftSon;
	Node * rightSon;
	Node * parent;
	T *data;
	K key;

public:
	Node *getLeftSon();
	Node *getRightSon();
	Node *getParent();
	T *getData();
	K getKey();

	void setLeftSon(Node * newLeftSon);
	void setRightSon(Node * newRightSon);
	void setParent(Node * newParent);
	void setData(T *newData);
	void setKey(K newKey);

	int compareTo(Node<K, T> *compNode);

	Node(T *pdata) :data(pdata) {
		leftSon = nullptr;
		rightSon = nullptr;
		parent = nullptr;
	}
	Node() {
		leftSon = nullptr;
		rightSon = nullptr;
		parent = nullptr;
		data = nullptr;
	}

};
template<typename K, typename T>
class SplayTree : Node<K, T>
{

private:

	Node<K, T> * root = nullptr;
public:
	SplayTree() {

	}
	~SplayTree();

	bool insert(K key, T *data);
	Node<K, T> * search(Node<K, T> * node, K key);
	Node<K, T> * find(Node<K, T> * node, K key);
	T * tryFind(K key);
	bool remove(K key);

	T *getInOrderData(Node<K, T>* root);
	void inOrder(Node<K, T>* root);
	std::vector<T> *inOrder2();
	std::vector<T*> *inOrder3();
	void setRoot(Node<K, T> * newRoot);
	Node<K, T> *getRoot();

	bool splay(Node<K, T> * node);

	Node<K, T> * rightRotation(Node<K, T> * node);
	Node<K, T> * leftRotation(Node<K, T> * node);
};


template<typename K, typename T>
class BSTIterator {
public:
	std::stack<Node<K, T>*> myStack;

	BSTIterator(Node<K, T> *root) {
		push(root);
	}

	// return whether we have a next smallest number 
	bool existNext() {
		return !myStack.empty();
	}

	// return the next smallest number
	T* current() {
		Node<K, T> *tmpNode = myStack.top();
		myStack.pop();
		push(tmpNode->getRightSon());
		return tmpNode->getData();
	}

private:
	void push(Node<K, T> *root) {
		while (root != nullptr) {
			myStack.push(root);
			root = root->getLeftSon();
		}
	}
};

template<typename K, typename T>
inline SplayTree<K, T>::~SplayTree()
{
	delete root;
}

template<typename K, typename T>
inline bool SplayTree<K, T>::insert(K key, T *data)
{

	Node<K, T> *helpNode = new Node<K, T>();
	helpNode->setData(data);
	helpNode->setKey(key);

	if (root != nullptr) {
		if (find(root, key) != nullptr) { // ak sa prvok nachadza v strome
			return false;
		}
		if (this->getRoot()->getKey() != helpNode->getKey()) {
			Node<K, T>* node1 = new Node<K, T>();
			Node<K, T>* nodeInsert = new Node<K, T>();

			node1->setData(data);
			node1->setKey(key);

			nodeInsert = search(root, key);

			if (helpNode->compareTo(nodeInsert) == -1) {
				nodeInsert->setLeftSon(node1);
				nodeInsert->getLeftSon()->setParent(nodeInsert);
				splay(node1);
				return true;
			}
			else {
				nodeInsert->setRightSon(node1);
				nodeInsert->getRightSon()->setParent(nodeInsert);
				splay(node1);
				return true;
			}

		}
		else {
			return false;
		}

	}
	else {
		root = new Node<K, T>();
		root->setData(data);
		root->setKey(key);
		root->setLeftSon(nullptr);
		root->setRightSon(nullptr);
		root->setParent(nullptr);
		return true;

	}
}




template<typename K, typename T>
inline Node<K, T>* SplayTree<K, T>::search(Node<K, T>* node, K key)
{
	Node<K, T> *helpNode = new Node<K, T>();
	helpNode->setKey(key);

	bool ok = false;

	Node<K, T> *sNode = node;

	while (ok == false) {
		if (sNode->compareTo(helpNode) == 0) {
			return sNode;
		}
		if (sNode->getLeftSon() == nullptr && sNode->getRightSon() == nullptr) {
			return sNode;
		}
		if (helpNode->compareTo(sNode) == -1) {
			if (sNode->getLeftSon() != nullptr) {
				sNode = sNode->getLeftSon();
			}
			else {
				return sNode;
			}
		}
		else {
			if (sNode->getRightSon() != nullptr) {
				sNode = sNode->getRightSon();
			}
			else {
				return sNode;
			}
		}
	}
}

template<typename K, typename T>
inline Node<K, T>* SplayTree<K, T>::find(Node<K, T>* node, K key)
{
	Node<K, T> *helpNode = new Node<K, T>();
	helpNode->setKey(key);

	bool ok = false;

	Node<K, T> *sNode = node;

	while (ok == false) {
		if (sNode->compareTo(helpNode) == 0) {
			return sNode;
		}
		if (sNode->getLeftSon() == nullptr && sNode->getRightSon() == nullptr) {
			return nullptr;
		}
		if (helpNode->compareTo(sNode) == -1 && sNode->getLeftSon() != nullptr) {
			sNode = sNode->getLeftSon();
		}
		else if (helpNode->compareTo(sNode) == 1 && sNode->getRightSon() != nullptr) {
			sNode = sNode->getRightSon();
		}
		else {
			return nullptr;
		}

	}
}

template<typename K, typename T>
inline T* SplayTree<K, T>::tryFind(K key)
{
	Node<K, T> *helpNode = new Node<K, T>();
	helpNode->setKey(key);

	bool ok = false;

	Node<K, T> *sNode = getRoot();

	while (ok == false) {
		if (getRoot() != nullptr) {
			if (sNode->compareTo(helpNode) == 0) {
				splay(sNode);
				return sNode->getData();
			}
			else if (sNode->getLeftSon() == nullptr && sNode->getRightSon() == nullptr) {
				//splay(sNode);
				return nullptr;
			}
			else if (helpNode->compareTo(sNode) == -1) {
				if (sNode->getLeftSon() != nullptr) {
					sNode = sNode->getLeftSon();
				}
				else {
					splay(sNode);
					return nullptr;
				}
			}
			else {
				if (sNode->getRightSon() != nullptr) {
					sNode = sNode->getRightSon();
				}
				else {
					splay(sNode);
					return nullptr;
				}
			}
		}
		else {
			return nullptr;
		}
	}
}

template<typename K, typename T>
inline bool SplayTree<K, T>::remove(K key)
{
	if (root == nullptr) {
		return false;
	}

	Node<K, T> *splayParent = new Node<K, T>();

	Node<K, T> *helpNode = new Node<K, T>();
	helpNode->setKey(key);

	Node<K, T> * sNode = find(root, key);
	if (sNode == nullptr) {
		return false;
	}

	if (sNode->getParent() != nullptr) {
		splayParent = sNode->getParent();
	}
	else {
		splayParent = nullptr;
	}

	Node<K, T> *delNode = new Node<K, T>();
	//ak je mazany prvok list
	if (sNode->getLeftSon() == nullptr && sNode->getRightSon() == nullptr) {
		//zmazanie otcovej referencie
		if (sNode != getRoot()) { // ak mazany prvok nie je root
			if (sNode->getParent()->getLeftSon() == sNode) {
				sNode->getParent()->setLeftSon(nullptr);
			}
			else if (sNode->getParent()->getRightSon() == sNode) {
				sNode->getParent()->setRightSon(nullptr);
			}
		}
		//zmazanie
		delete sNode;
		sNode = nullptr;
		if (splayParent != nullptr) {
			splay(splayParent);
		}
		return true;
	}
	//ak je lavy syn NULL
	else if (sNode->getLeftSon() == nullptr) {
		if (sNode->getParent() == nullptr) {	 //ak je root	
			sNode = sNode->getRightSon(); //nahrada
			sNode->setParent(nullptr); // vynulovanie otca
			setRoot(sNode); //zmena roota
			return true;
		}
		else if (sNode->getParent()->getLeftSon() == sNode) {
			sNode->getParent()->setLeftSon(sNode->getRightSon());
			sNode->getRightSon()->setParent(sNode->getParent());
			sNode = sNode->getRightSon();
			if (splayParent != nullptr) {
				splay(splayParent);
			}
			return true;
		}
		else if (sNode->getParent()->getRightSon() == sNode) {
			sNode->getParent()->setRightSon(sNode->getRightSon());
			sNode->getRightSon()->setParent(sNode->getParent());
			sNode = sNode->getRightSon();
			if (splayParent != nullptr) {
				splay(splayParent);
			}
			return true;
		}

	}
	//ak je pravy syn NULL
	else if (sNode->getRightSon() == nullptr) {
		if (sNode->getParent() == nullptr) {
			sNode = sNode->getLeftSon();
			sNode->setParent(nullptr);
			setRoot(sNode);
			return true;
		}
		else if (sNode->getParent()->getLeftSon() == sNode) {
			sNode->getParent()->setLeftSon(sNode->getLeftSon());
			sNode->getLeftSon()->setParent(sNode->getParent());
			sNode = sNode->getLeftSon();
			if (splayParent != nullptr) {
				splay(splayParent);
			}
			return true;
		}
		else if (sNode->getParent()->getRightSon() == sNode) {
			sNode->getParent()->setRightSon(sNode->getLeftSon());
			sNode->getLeftSon()->setParent(sNode->getParent());
			sNode = sNode->getLeftSon();
			if (splayParent != nullptr) {
				splay(splayParent);
			}
			return true;
		}

	}
	//ak ma dvoch synov
	else if (sNode->getLeftSon() != nullptr && sNode->getRightSon() != nullptr) {
		//ak nastane situacia ze lavy syn nema praveho syna
		delNode = sNode;
		sNode = sNode->getLeftSon();
		//ak mazaneho prvku lavy podstrom nema ziadneho praveho syna
		if (sNode->getRightSon() == nullptr) {
			//ak je to root
			if (delNode->getParent() == nullptr) { //ak je root
				sNode->setRightSon(delNode->getRightSon()); // pravy syn mazaneho prvku skoci k novemu prvku	
				sNode->getRightSon()->setParent(sNode); //novy pravy syn posuvaneho prvku dostane noveho otca
				sNode->setParent(nullptr);
				delNode = sNode;
				setRoot(sNode);
				return true;
			}
			else if (delNode->getParent()->getLeftSon() == delNode) {
				delNode->getParent()->setLeftSon(sNode);
				sNode->setRightSon(delNode->getRightSon()); // pravy syn mazaneho prvku skoci k novemu prvku
				sNode->getRightSon()->setParent(sNode);
				sNode->setParent(delNode->getParent());
				delNode = sNode;
				if (splayParent != nullptr) {
					splay(splayParent);
				}
				return true;
			}
			else if (delNode->getParent()->getRightSon() == delNode) {
				delNode->getParent()->setRightSon(sNode);
				sNode->setRightSon(delNode->getRightSon()); // pravy syn mazaneho prvku skoci k novemu prvku
				sNode->getRightSon()->setParent(sNode);
				sNode->setParent(delNode->getParent());
				delNode = sNode;
				if (splayParent != nullptr) {
					splay(splayParent);
				}
				return true;
			}
		}
		else {
			while (sNode->getRightSon() != nullptr) {
				sNode = sNode->getRightSon();
			}
			Node<K, T> *sNodeLS = new Node<K, T>();;
			Node<K, T> *sNodeP = new Node<K, T>();;
			if (delNode->getParent() == nullptr) { //ak je root
				sNodeLS = sNode->getLeftSon(); //odlozenie laveho syna najduteho prvku
				sNodeP = sNode->getParent();		//odlozenie otca najduteho prvku

				sNode->setLeftSon(delNode->getLeftSon()); //nahradenie laveho syna
				sNode->getLeftSon()->setParent(sNode);
				sNode->setRightSon(delNode->getRightSon()); //nahradenie praveho syna
				sNode->getRightSon()->setParent(sNode);

				sNode->setParent(nullptr);
				delNode = sNode;
				setRoot(sNode);

				sNodeP->setRightSon(sNodeLS);
				if (sNodeLS != nullptr) {
					sNodeLS->setParent(sNodeP);
				}
				if (splayParent != nullptr) {
					splay(splayParent);
				}
				return true;
			}
			else if (delNode->getParent()->getLeftSon() == delNode) {
				sNodeLS = sNode->getLeftSon();
				sNodeP = sNode->getParent();

				sNode->setLeftSon(delNode->getLeftSon());
				sNode->getLeftSon()->setParent(sNode);
				sNode->setRightSon(delNode->getRightSon());
				sNode->getRightSon()->setParent(sNode);
				sNode->setParent(delNode->getParent());
				sNode->getParent()->setLeftSon(sNode);
				delNode = sNode;

				sNodeP->setRightSon(sNodeLS);

				if (sNodeLS != nullptr) {
					sNodeLS->setParent(sNodeP);
				}
				if (splayParent != nullptr) {
					splay(splayParent);
				}
				return true;
			}
			else if (delNode->getParent()->getRightSon() == delNode) {

				sNodeLS = sNode->getLeftSon();
				sNodeP = sNode->getParent();

				sNode->setLeftSon(delNode->getLeftSon());
				sNode->getLeftSon()->setParent(sNode);
				sNode->setRightSon(delNode->getRightSon());
				sNode->getRightSon()->setParent(sNode);
				sNode->setParent(delNode->getParent());
				sNode->getParent()->setRightSon(sNode);
				delNode = sNode;

				sNodeP->setRightSon(sNodeLS);
				if (sNodeLS != nullptr) {
					sNodeLS->setParent(sNodeP);
				}
				if (splayParent != nullptr) {
					splay(splayParent);
				}

				return true;
			}
		}

	}

}

template<typename K, typename T>
inline T * SplayTree<K, T>::getInOrderData(Node<K, T>* root)
{
	Node<K, T> *current = root;
	int a = 0;
	while (current->getLeftSon() != nullptr)
	{
		current = current->getLeftSon();
		a++;
	}
	if (a > 0) {
		return current;
	}
	else {
		current = current->getRightSon();
		a = 0;
	}
}

template<typename K, typename T>
inline void SplayTree<K, T>::inOrder(Node<K, T>* root)
{
	//std::stack<Node<K, T> *> stack;
	Node<K, T> *current = root;
	Node<K, T> *parent;
	int i = 0;
	while (i < 2)// || stack.empty() == false)
	{
		if (current == getRoot()) {
			i++;
		}
		while (current != nullptr)
		{

			//stack.push(current);
			parent = current;
			current = current->getLeftSon();
		}

		current = parent;
		//current = current->getParent();//stack.top();
		//stack.pop();
		std::cout << *current->getData() << " ";
		//vector->push_back(*current->getData());
		if (current->getParent() == nullptr) {
			parent = current->getParent();
		}
		else {
			parent = current;
			current = current->getRightSon();
		}



	}
}

template<typename K, typename T>
inline std::vector<T>* SplayTree<K, T>::inOrder2()
{
	std::vector<T>* vector = new std::vector<T>;

	std::stack<Node<K, T>*> stack;
	Node<K, T> *current = getRoot();

	while (current != nullptr || stack.empty() == false)
	{

		while (current != nullptr)
		{

			stack.push(current);
			current = current->getLeftSon();
		}


		current = stack.top();
		stack.pop();

		vector->push_back(*current->getData());

		current = current->getRightSon();

	}

	return vector;
}

template<typename K, typename T>
inline std::vector<T*>* SplayTree<K, T>::inOrder3()
{
	std::vector<T*>* vector = new std::vector<T*>;

	std::stack<Node<K, T>*> stack;
	Node<K, T> *current = getRoot();

	while (current != nullptr || stack.empty() == false)
	{

		while (current != nullptr)
		{

			stack.push(current);
			current = current->getLeftSon();
		}


		current = stack.top();
		stack.pop();

		vector->push_back(current->getData());
		//std::cout << *current->getData() << " ";

		current = current->getRightSon();

	}

	return vector;
}

template<typename K, typename T>
inline void SplayTree<K, T>::setRoot(Node<K, T>* newRoot)
{
	root = newRoot;
}

template<typename K, typename T>
inline Node<K, T>* SplayTree<K, T>::getRoot()
{
	return root;
}

template<typename K, typename T>
inline bool SplayTree<K, T>::splay(Node<K, T>* node)
{
	bool ok = false;
	Node<K, T> *actualRoot = new Node<K, T>();
	while (ok == false) {
		if (node->compareTo(root) == 0) {
			return node;
		}
		else if (node->getParent()->getParent() != nullptr) {
			actualRoot = node->getParent()->getParent();
		}
		else if (node->getParent() != nullptr) {
			actualRoot = node->getParent();
		}


		if (node->compareTo(actualRoot) == -1) {
			if (actualRoot->getLeftSon() == node) {
				rightRotation(node);
			}
			else if (actualRoot->getLeftSon()->getLeftSon() == node) {
				rightRotation(actualRoot->getLeftSon());
				actualRoot = actualRoot->getParent(); // treba zmenit aktualneho roota po prvej rotacii
				rightRotation(actualRoot->getLeftSon());

			}

			else if (actualRoot->getLeftSon()->getRightSon() == node) {
				leftRotation(actualRoot->getLeftSon()->getRightSon());
				rightRotation(actualRoot->getLeftSon());

			}
		}
		else if (node->compareTo(actualRoot) == 1) {
			if (actualRoot->getRightSon() == node) {
				leftRotation(node);

			}
			else if (actualRoot->getRightSon()->getRightSon() == node) {
				leftRotation(actualRoot->getRightSon());
				actualRoot = actualRoot->getParent();
				leftRotation(actualRoot->getRightSon());

			}

			else if (actualRoot->getRightSon()->getLeftSon() == node) {
				rightRotation(actualRoot->getRightSon()->getLeftSon());
				leftRotation(actualRoot->getRightSon());

			}
		}
	}
}

template<typename K, typename T>
inline Node<K, T>* SplayTree<K, T>::rightRotation(Node<K, T>* node)
{

	Node<K, T> *node1 = node->getParent();

	node1->setLeftSon(node->getRightSon());
	//node->getRightSon()->setParent(node1);
	if (node1->getLeftSon() != nullptr) {
		node1->getLeftSon()->setParent(node1);
	}

	node->setParent(node1->getParent());
	if (node1 == root) {
		setRoot(node);
		node->setParent(nullptr);
	}
	else if (node1->getParent()->getLeftSon() == node1) {
		node1->getParent()->setLeftSon(node);
	}
	else if (node1->getParent()->getRightSon() == node1) {
		node1->getParent()->setRightSon(node);
	}


	node->setRightSon(node1);
	node1->setParent(node);
	return node;



}

template<typename K, typename T>
inline Node<K, T>* SplayTree<K, T>::leftRotation(Node<K, T>* node)
{

	Node<K, T> *node1 = node->getParent();
	node1->setRightSon(node->getLeftSon());
	if (node1->getRightSon() != nullptr) {
		node1->getRightSon()->setParent(node1);
	}
	node->setParent(node1->getParent());

	if (node1 == root) {
		setRoot(node);
		node->setParent(nullptr);
	}
	else if (node1->getParent()->getLeftSon() == node1) {
		node1->getParent()->setLeftSon(node);
	}
	else if (node1->getParent()->getRightSon() == node1) {
		node1->getParent()->setRightSon(node);
	}


	node->setLeftSon(node1);
	node1->setParent(node);
	return node;



}



template<typename K, typename T>
inline Node<K, T> * Node<K, T>::getLeftSon()
{
	return leftSon;
}

template<typename K, typename T>
inline Node<K, T> * Node<K, T>::getRightSon()
{
	return rightSon;
}

template<typename K, typename T>
inline Node<K, T> * Node<K, T>::getParent()
{
	return parent;
}

template<typename K, typename T>
inline T * Node<K, T>::getData()
{
	return data;
}

template<typename K, typename T>
inline K Node<K, T>::getKey()
{
	return key;
}




template<typename K, typename T>
inline void Node<K, T>::setLeftSon(Node * newLeftSon)
{
	leftSon = newLeftSon;
}

template<typename K, typename T>
inline void Node<K, T>::setRightSon(Node * newRightSon)
{
	rightSon = newRightSon;
}

template<typename K, typename T>
inline void Node<K, T>::setParent(Node * newParent)
{
	parent = newParent;
}

template<typename K, typename T>
inline void Node<K, T>::setData(T * newData)
{
	this->data = newData;
}

template<typename K, typename T>
inline void Node<K, T>::setKey(K newKey)
{
	key = newKey;
}

template<typename K, typename T>
inline int Node<K, T>::compareTo(Node<K, T> *compNode)
{
	if ((this->getKey()) < compNode->getKey()) {
		return -1;
	}
	else if ((this->getKey()) > compNode->getKey()) {
		return 1;
	}
	else {
		return 0;
	}

}

