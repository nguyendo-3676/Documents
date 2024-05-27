#include<iostream>
using namespace std;
// Khai báo 1 danh sách.
struct node{
    int data;
    node *next=NULL;
};
// Prototypes
int Length(node* head);
void selectionSort(node* head) ;
node* createNode(int x) {
	node* temp = new node;
	temp->next = NULL;
	temp->data = x;
	return temp;
}
node* addElement(node* p, int x)
{
	node* temp = createNode(x);
	p->next = temp;
	return temp;
}
void printList(node* head) {
	node* p = head;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
}
bool addAfterHead(node* head, int x)
{
	if(head==NULL)
	{
		cout<<"";
		return false;
	}
	else
	{
		node* temp = createNode(x);
		temp->next = head->next;
		head->next = temp;
		return true;
		
	}
}
int Length(node* head)
{
	int length = 0;
	node *temp = head;
	if(temp == NULL)
		return 0;
	else {
		while(temp != NULL) {
			length += 1;
			temp = temp->next;
		}
	}
	return length;
}
int lenghtRecurtion(node* head) {
	if (head == NULL)
		return 0;
	return 1 + lenghtRecurtion(head->next);
}
bool AddTail(node *head, int x);

void Sorting(node* head)
{
	
}
bool Search(node*head, int x, int*index)
{
	int static pos=0;
	for(node*p=head;p!=NULL;p=p->next)
	{	
		pos++;	
		if(p->data==x)
		{
			*index=pos;
			return true;
		}
	}
	return false;
}
int main()
{   
    int n;//S? ph?n t? c?a danh sách-ðý?c nh?p t? bàn phím.
    int x;//Giá tr? c?a ph?n t? ðý?c nh?p t? bàn phím
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter value:";
    cin>>x;
    node* head=createNode(x);
    node* p=head;
    for (int  i = 1; i < n; i++)
    {
        cin>>x;
        p=addElement(p,x);
    }
    cout<<"Danh sach truoc khi them: "<<endl;
    printList(head);  
    int index;
    if(Search(head,20,&index))  cout <<"Tim thay tai "<<index;
}   
