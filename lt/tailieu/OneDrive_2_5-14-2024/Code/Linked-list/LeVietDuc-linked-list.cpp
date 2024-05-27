#include<iostream>
using namespace std;
// Khai b�o 1 danh s�ch.
struct node{
    int data;
    node *next=NULL;
};
// Prototypes
int Length(node* head);
void selectionSort(node* head) ;
//T?o m?t node m?i 
node* createNode(int x) {
	node* temp = new node;
	temp->next = NULL;
	temp->data = x;
	return temp;
}
int find(node* head, int k) 
{
    int m = 0;
    node* p = head;
    for (p; p != NULL; p = p->next) {
        if (p->data == k) {
            m++;
        }
    }
    return m;
}


int find2 (node* head, int k) 
{
	int m = 0;
	node* p = head;
	while (p != NULL) 
	{
		if (p->data == k) 
		{
            m++;
        }
		p = p->next;
	}
	 return m;
}
//Th�m v�o �?u danh s�ch ph?n t? c� gi� tr? "x" 
node*  addHead(node* head,int x){
    node* temp=createNode(x);//t?o node c� gi� tr? "x"
    if(head==NULL)
        head=temp;
    else
    {
        temp->next=head;
        head=temp;
    }
    return head;
}
//Th�m v�o cu?i danh s�ch ph?n t? c� gi� tr? "x"
node* addTail(node* head,int x){
    node* temp=createNode(x);
    node* p   =head;//tr? temp t?i v? tr� �?u "head" c?a danh s�ch
    if(head==NULL)
        head=temp;
    else
    {
            while (p->next!=NULL)//Duy?t danh s�ch t? �?u �?n cu?i
            {
               p=p->next;
            }
            p->next=temp;//temp s? l� v? tr� cu?i danh s�ch          
    }  
    return head;
}
//Th�m gi� tr? x v�o sau v? tr� b?t k? ? v? tr� "k" 
node* addAfter(node*head,int k,int x){
    node* temp=createNode(x);
    node* p   =head;
    if(k==0)
       head= addHead(head,x);
    else
    {
        int i=1;
        while(p->next!=NULL&&i!=k)
        {
            p=p->next;
            ++i;
        }
        if(i!=k)
            head=addTail(head,x);
        else
        {
            temp->next=p->next;
            p->next=temp;
        }
    }  
    return head;
}
//X�a ph?n t? t?i v? tr� th? "k"
node* del(node* head,int k){
    node* p   =head;
    if(k==0)    head=head->next;
    else
    {
        int i=1;
        while(p->next->next!=NULL&&i!=k)
        {
            p=p->next;
            ++i;
        }
        if(i!=k)
            p->next=NULL;
        else
        {
            p->next=p->next->next;
        }      
    }   
   
return head;
}
// Duy?t t?t c? c�c gi� tr? c� trong danh s�ch v� in gi� tr? �� ra.
void printList(node* head) {
	node* p = head;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
}
node* addElement(node* p, int x)
{
	node* temp = createNode(x);
	p->next = temp;
	return temp;
}
int main()
{   
    int n;//S? ph?n t? c?a danh s�ch-��?c nh?p t? b�n ph�m.
    int x;//Gi� tr? c?a ph?n t? ��?c nh?p t? b�n ph�m
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
    if (find(head, 5) == 0) {
        cout << "khong co trong danh sach" << endl;
    }
    else { cout << "co phan tu trong danh sach" << endl; }
    int selection;
    cout<<"---Choose a function----"<<endl<<
          "1: Add to head."<<endl<<
          "2: Add to tail."<<endl<<
          "3: Add to location 'k'."<<endl<<
          "4: Delete a node."<<endl<<
          "5: Selection sort."<<endl;
    cin>>selection;
    int a;
    int k;
    switch(selection)
    {   case 1: 
                cout<<"Enter a value:";cin>>a;
                head=addHead(head,a);
        break;
        case 2:
                cout<<"Enter a value:";cin>>a;
                head=addTail(head,a);
        break;
        case 3: 
                cout<<"Enter a value & location:";cin>>a>>k;
                head=addAfter(head,k,a);
        break;
        case 4: 
                cout<<"Enter a specific location:";cin>>k;
                head=del(head,k);
        break;
        case 5: 
                selectionSort(head);
        break;
    }
    printList(head);

    return 0;
}
int Length(node* head)
{
    int length = 0;
    for(node *p = head; p != NULL; p = p->next)
    {
        ++length;
    }
    return length;
}
void selectionSort(node* head) 
{ 
    node* temp = head;  
    // Traverse the List 
    while (temp) 
    { 
        node* min = temp; 
        node* r = temp->next; 
        // Traverse the unsorted sublist 
        while (r) 
        { 
            if (min->data > r->data) 
                min = r; 
  
            r = r->next; 
        } 
        // Swap Data 
        int x = temp->data; 
        temp->data = min->data; 
        min->data = x; 
        temp = temp->next; 
    } 
}   
