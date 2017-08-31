
#include<windows.h>
#include <cstdlib>
#include<cstring>
#include<string.h>
#include<string>
#include <msclr/marshal_cppstd.h>
#include"iostream"

#pragma once
class Player
{
public:
	Player();


	
	struct node

	{

		int val;
		char c;
		std::string cod;
		node*next;
		node*left;
		node*right;
		node()
		{
			next = NULL;
			right = NULL;
			left = NULL;
		}
	};
	/////////////-------------------/////////////////
	struct PQnode


	{
		std::string code;
		char c;
		PQnode*next;
	};
	////////---------------------------////////////
	struct encode
	{
		PQnode*head;
		encode()
		{
			head = NULL;
		}
		void insertencode(std::string a, char c)
		{
			PQnode*n = new PQnode;
			n->code = a;
			n->c = c;
			n->next = head;
			head = n;
		}

		std::string inputcodegenerator(std::string m)
		{
			int h = 0;
			std::string f;

			while (m[h] != '\0')
			{
				PQnode*b = head;
				while (1)
				{
					if (m[h] == b->c)
					{
						f = f + b->code;
						h++;
						break;
					}
					b = b->next;
				}
			}
			return f;
		}
	};
	////////////////////-----------/////////////////////////
	struct queue
	{
		node*front;
		node*rear;
		node *b;
		int d;
		std::string n;
		encode x;
		int globall = 1;
		queue()
		{
			d = 0;
			front = NULL;
			rear = NULL;
		}
		void insertatend(char a)//it is used to make queue from inputed words
		{


			if (front == NULL)
			{
				node*n = new node;
				n->val = 1;
				n->c = a;
				n->next = NULL;
				rear = n;
				front = n;
			}
			else
			{
				node*b = front;
				while (b != NULL)//here it is giving numbers to repeated characters
				{
					if (b->c == a)
					{
						b->val += 1;
						break;
					}
					b = b->next;

				}

				if (b == NULL)
				{
					node*n = new node;
					n->val = 1;
					n->c = a;
					n->next = NULL;
					rear->next = n;
					rear = n;
				}

			}

		}
		//////////--------------------//////////////
		void sortList()//it will make queue a periority queue
		{
			node*q = front;
			node*cur = q->next;
			while (q->next != NULL)
			{
				while (cur != NULL)
				{
					if (q->val <= cur->val)//if 1st 1 node is lesser or equal to next node?
						cur = cur->next;
					else
					{
						char e;
						e = q->c;
						q->c = cur->c;
						cur->c = e;
						int d;
						d = q->val;
						q->val = cur->val;
						cur->val = d;
					}
				}
				q = q->next;
				cur = q->next;

			}
		}
		///////-------------/////////
		void Inputedwords(std::string yourname)// main 1st function
		{
			n = yourname;
			int r = yourname.length();
			for (int a = 0; a < r; a++)
			{
				insertatend(yourname[a]);
			}
			sortList();
		}
		////////////-------------------/////////////
		node*  separateatstart()//it will separate the start nodes from priority queue to make tree
		{
			if (front->next == NULL)
				globall = 0;
			node*del = front;
			front = front->next;
			del->next = NULL;
			return del;
		}
		void insert(node*t)// it is joining created node to left priorty queue nodes
		{
			if (t->val <= front->val)
			{
				t->next = front;
				front = t;
				return;
			}
			node*b = front->next;
			node*z = front;
			while (b != NULL)//if periorty queue is disturbed by joining then
			{
				if (t->val <= b->val)
				{
					t->next = b;
					z->next = t;
					return;
				}
				else
				{
					z = b;
					b = b->next;
				}
			}
			if (b == NULL)//if 1 node is left in periorty queue
			{
				z->next = t;
				t->next = NULL;
			}
		}
		void tree()//2nd main function
		{
			while (globall == 1)
			{
				node*a = separateatstart();
				node*b = separateatstart();
				node*c = new node;
				c->left = a;
				c->right = b;
				c->val = a->val + b->val;

				if (globall == 1)
					insert(c);
				else
					front = c;
			}

		}
		void traverse()
		{
			node*b = front;
			std::cout << "Character and their frequency is\n";
			while (b != NULL)
			{
				std::cout << b->c;
				std::cout << "  " << b->val << std::endl;
				b = b->next;
			}
		}

		~queue()
		{
			node*del;
			while (front != NULL)
			{
				del = front;
				front = front->next;
				delete del;
			}
		}
		/////--------------/////////////
		void inorder(node*temp)
		{
			if (temp != NULL)
			{

				inorder(temp->left);
				std::cout << temp->c << " " << temp->val << std::endl;
				inorder(temp->right);
			}
		}
		void decode()//from given code & tree it will make inputed words
		{
			std::string a = x.inputcodegenerator(n);
			node*c = front;
			int b = 0;
			std::cout << std::endl;
			std::cout << "Decoded Output is\n";
			while (a[b] != '\0')
			{
				if (a[b] == '0')
					c = c->left;
				else
					c = c->right;
				if (c->right == NULL&&c->left == NULL)
				{
					std::cout << c->c;
					c = front;

				}

				b++;
			}
			std::cout << std::endl << std::endl;
			int t = n.length();
			int s = a.length();
			std::cout << "Bits used in ASCII would be =" << t * 8 << std::endl;
			std::cout << "Bits used by huffman coding =" << s << std::endl;

		}
		void AssignCode(node*tree, std::string code)// for created tree it will assign code to leaf nodes
		{
			if (tree->left == NULL&&tree->right == NULL)
			{
				tree->cod = code;
				std::cout << "Leaf Found: " << tree->c << "\t"<< code << std::endl;
				x.insertencode(code, tree->c);
			}
			if (tree->left != NULL)
			{
				AssignCode(tree->left, code + "0");
			}
			if (tree->right != NULL)
			{
				AssignCode(tree->right, code + "1");
			}
		}
	};
};

