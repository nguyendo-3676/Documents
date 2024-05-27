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
//Thêm vào ð?u danh sách ph?n t? có giá tr? "x" 
node*  addHead(node* head,int x){
    node* temp=createNode(x);//t?o node có giá tr? "x"
    if(head==NULL)
        head=temp;
    else
    {
        temp->next=head;
        head=temp;
    }
    return head;
}
//Thêm vào cu?i danh sách ph?n t? có giá tr? "x"
node* addTail(node* head,int x){
    node* temp=createNode(x);
    node* p   =head;//tr? temp t?i v? trí ð?u "head" c?a danh sách
    if(head==NULL)
        head=temp;
    else
    {
            while (p->next!=NULL)//Duy?t danh sách t? ð?u ð?n cu?i
            {
               p=p->next;
            }
            p->next=temp;//temp s? là v? trí cu?i danh sách          
    }  
    return head;
}
//Thêm giá tr? x vào sau v? trí b?t k? ? v? trí "k" 
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
//Xóa ph?n t? t?i v? trí th? "k"
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
// Duy?t t?t c? các giá tr? có trong danh sách và in giá tr? ðó ra.
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
