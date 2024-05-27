#include <iostream>

using namespace std;

class Employee
{
protected:
	string name;
	double salary;
public:
	Employee(const char* n, double s);
	void pay();
	virtual void doWork() = 0;
};


typedef Employee* pEmployee;


class Worker: public Employee
{
protected:
	int level;
public:
	Worker(const char* n, int l);
	virtual void doWork();
};


class Manager: public Employee
{
protected:
	string dept;
public:
	Manager(const char* n, const char* d);
	virtual void doWork();
};


class Company;

class Director: public Employee
{
protected:
	Company* company;
public:
	Director(const char* n, Company* c);
	virtual void doWork();
};


class Company
{
protected:
	pEmployee* e;
	int n;
	string name;
public:
	Company(const char* n);
	~Company();
	const string& getName() const;
	void doWork();
	void payAll();
};

class VinamilkCompany: public Company
{
public:
	VinamilkCompany();
};

class VinaphoneCompany: public Company
{
public:
	VinaphoneCompany();
};

/////////////////////////////////////


Employee::Employee(const char* n, double s)
	:name(n), salary(s)
{}

void Employee::pay() {
	cout << "Tra " << salary << "VND cho " << name.c_str() << endl;
}




Worker::Worker(const char* n, int l)
	:Employee(n, 5*l), level(l)
{}

void Worker::doWork() {
	cout << name.c_str() << " san xuat\n";
}




Manager::Manager(const char* n, const char* d)
	:Employee(n, 30), dept(d)
{}

void Manager::doWork()
{
	cout << name.c_str() << " quan ly bo phan " << dept.c_str() << endl;
}




Director::Director(const char* n, Company* c)
	:Employee(n, 100), company(c)
{}

void Director::doWork()
{
	cout << name.c_str() << " dieu hanh cong ty " << company->getName().c_str() << endl;
}




Company::Company(const char* n)
{
	name = n;
	e = NULL;
	this->n = 0;
}

Company::~Company()
{
	if (e) {
		for (int i = 0; i< n; i++)
			delete e[i];
		delete[] e;
	}
}

const string& Company::getName() const
{
	return name;
}

void Company::doWork()
{
	for (int i = 0; i< n; i++)
		e[i]->doWork();
}

void Company::payAll()
{
	for (int i = 0; i< n; i++)
		e[i]->pay();
}



VinamilkCompany::VinamilkCompany()
	:Company("Vinamilk")
{
	e = new pEmployee[7];
	e[0] = new Director("D1", this);
	e[1] = new Manager("M1", "Ban hang");
	e[2] = new Manager("M2", "Nhan su");
	e[3] = new Worker("W1", 2);
	e[4] = new Worker("W2", 5);
	e[5] = new Worker("W3", 3);
	e[6] = new Worker("W4", 7);
	n = 7;
}


VinaphoneCompany::VinaphoneCompany()
	:Company("Vinaphone")
{
	e = new pEmployee[5];
	e[0] = new Director("D2", this);
	e[1] = new Manager("M3", "Di dong");
	e[2] = new Worker("W5", 2);
	e[3] = new Worker("W6", 5);
	e[4] = new Worker("W7", 7);
	n = 5;
}

///////////////////


int main()
{
	Company* c[] = {
		new VinamilkCompany(),
		new VinaphoneCompany()
	};

	for (int i=0; i<2; i++)
		c[i]->doWork();

	for (int i=0; i<2; i++)
		c[i]->payAll();

	for (int i=0; i<2; i++)
		delete c[i];
}

