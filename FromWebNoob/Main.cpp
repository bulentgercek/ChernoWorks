#include <iostream>
#include <string>

struct Node
{
	std::string name;
	struct Node* next;
};

void initNode(struct Node* head) 
{
	Node* newNode = new Node();
	std::cout << "name? " << std::endl;
	std::cin >> newNode->name;
	newNode->next = NULL;
}

void addNode(struct Node* head)
{
	Node* newNode = new Node();
	std::cout << "name? " << std::endl;
	std::cin >> newNode->name;
	newNode->next = NULL;

	Node* curNode = head;
	while (curNode) {
		if (curNode->next == NULL) {
			curNode->next = newNode;
			return;
		}
		curNode = curNode->next;
	}
}


void displayNodeList(struct Node* head)
{
	Node* list = head;
	while (list) {
		std::cout << list->name << " ";
		list = list->next;
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

Node* deleteNode(struct Node** head)
{
	Node* tempNode = *head;
	*head = tempNode->next;
	delete tempNode;
	return *head;
}


int main()
{
	struct Node* NodeList = new Node();
	initNode(NodeList);
	addNode(NodeList);
	displayNodeList(NodeList);
	deleteNode(&NodeList);
	displayNodeList(NodeList);
	/*
	std::string name;
	unsigned short numbers = 0;
	std::cin >> numbers;
	std::cout << std::endl;
	for (unsigned short i = 0; i < numbers; i++)
	{
		head = addnode(head);

		std::cout << std::endl;
	}

	std::cout << "LIST : " << std::endl;
	std::cout << std::endl;

	std::cin >> Node->name;   //here is the user input to delete node but it won't run
	delete_node(head, 1NODE);

	print(head);
	*/
	
	std::cin.get();
}