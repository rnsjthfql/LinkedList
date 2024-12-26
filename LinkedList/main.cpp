#include <iostream>
#include <stdlib.h>

typedef struct ListNode {
	int data;
	struct ListNode* pNextNode;
}ListNode;


int insertNode(ListNode* n, int data, int num) {
	ListNode* newNode;
	newNode = (ListNode*)malloc(sizeof(ListNode));

	newNode->pNextNode = n->pNextNode;
	n->pNextNode = newNode;
	newNode->data = data;

	num += 1;
	return num;
}

//노드 추가
int AddNode(ListNode* n, int fdata, int ndata, int num) {
	ListNode* newNode;
	newNode = (ListNode*)malloc(sizeof(ListNode));

	ListNode* curNode;
	curNode = (ListNode*)malloc(sizeof(ListNode));

	curNode = n->pNextNode;

	while (curNode != NULL) {
		if (curNode->data == fdata) {
			newNode->pNextNode = curNode->pNextNode;
			curNode->pNextNode = newNode;
			newNode->data = ndata;
			break;
		}
		curNode = curNode->pNextNode;
	}

	num += 1;
	return num;
}

void readNode(ListNode* n, int num) {
	for (int i = 0; i < num; i++) {
		if (n->pNextNode != NULL) {
			std::cout << n->pNextNode->data << " ";
		}
		n = n->pNextNode;
	}

	std::cout << "\n======================" << std::endl;
}



int DeleteNode(ListNode* n, int ddata, int num) {
	ListNode* delNode;

	for (int i = 0; i < num; i++) {
		if (n->pNextNode->data == ddata) {
			delNode = n->pNextNode;
			n->pNextNode = n->pNextNode->pNextNode;
			free(delNode);
			break;
		}
		n = n->pNextNode;
	}

	if (n->pNextNode == NULL) {
		std::cout << "해당 노드가 없습니다" << std::endl;
		return 0;
	}

	num -= 1;
	return num;
}

int main()
{
	int num = 0;
	ListNode* node;
	node = (ListNode*)malloc(sizeof(ListNode));
	node->pNextNode = NULL;  //헤더노드
	num = insertNode(node, 20, num);
	num = insertNode(node, 10, num);
	num = insertNode(node, 40, num);
	readNode(node, num);

	num = AddNode(node, 20, 30, num);
	num = AddNode(node, 40, 50, num);
	readNode(node, num);

	num = DeleteNode(node, 10, num);
	readNode(node, num);

	free(node);
	return 0;
}