#include <iostream>
#include <conio.h>
using namespace std; 
template <typename T>
class NodeData
{
public:
    NodeData() : next_(NULL) { ; }
    void         set_data(T val) { data_ = val; }
    T            get_data() const { return data_; }
    void         set_next(NodeData<T>* next) { next_ = next; }
    NodeData<T>* get_next() const { return next_; };
private:
    T            data_;  
    NodeData<T>* next_;
};
template<typename T>
class LinkedList
{
public:
    LinkedList() : p_head_(NULL) {};
    ~LinkedList() { ; };
 
    void InsetFront(T val)     
    {
        NodeData<T>* temp = new NodeData<T>();
        temp->set_data(val);
        temp->set_next(p_head_);
        p_head_ = temp;
    }
 
    void RemoveFront()   // Remove ph?n t? d?u danh sách
    {
        if (p_head_ != NULL)
        {
            NodeData<T>* temp = p_head_;
            p_head_ = p_head_->get_next();
            delete temp;
        }
    }
     
    NodeData<T>* head() { return p_head_; };
 
public:
    NodeData<T>* p_head_;    // Luôn có con tr? pHead tr? vào ph?n t? d?u tiên. 
                             // Có th? coi dây là linked list d?ng single
};
class Person
{
public:
    Person() { ; };
    Person(string name, unsigned int age, bool sex);
    ~Person() { ; };
    void operator =(Person& p);
    string get_name() const { return name_; }
    unsigned int get_age() const { return age_; }
    bool get_sex() const { return sex_; }
 
    void ShowInfo()
    {
        cout << "  Name = " << name_.c_str();
        cout << "  Age = " << age_;
        cout << "  Sex = " << ((sex_ == 1) ? "Male" : "Female");
    }
private:
    string name_;
    unsigned int age_;
    bool sex_;
};
 
Person::Person(string name, unsigned int age, bool sex)
{
    name_ = name;
    age_ = age;
    sex_ = sex;
}
 
void Person::operator =(Person& p) //Luu ý là khi xây d?ng các lop d?i tu?ng, hãy d?ng các phép toán cho l?p.
{
    this->name_ = p.name_;
    this->age_ = p.age_;
    this->sex_ = p.sex_;
}
int main()
{
	LinkedList<Person> data_list;
    Person person1("Pham A", 20, 1);
    Person person2("Pham B", 20, 0);
    Person person3("Pham C", 20, 1);
    Person person4("Pham D", 20, 0);
 
    data_list.InsetFront(person1);
    data_list.InsetFront(person2);
    data_list.InsetFront(person3);
    data_list.InsetFront(person4);
 
    // In danh sách.
    NodeData<Person>* p_head = data_list.head();
    if (p_head != NULL)
    {
        NodeData<Person>* temp = p_head;
        while (temp != NULL)
        {
            temp->get_data().ShowInfo();
            cout << "\n\n\n";
            temp = temp->get_next();
        }
    }
    return 0;
}
