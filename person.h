#pragma once


class Person {
protected:
	string name;
	int age;

public:
	Person(){}
	Person(const string& name, int age);
	void getIntroductoryMessage() const;
};





class Student : public Person {
private:
	string major;

public:
	Student(const string& name, int age, const string& major){
		this->major = major;
		this->name = name;
		this->age = age;

	}

	void getIntroductoryMessage() const {
		cout << "Hi! I am " << name << ", a " << age << " year old and major in " << major << "." << endl;
	}

	void study() {
		cout << "Homework is in Progress........." << endl;
		cout << endl;
	}
};






class Employee : public Person {
private:
	string title;

public:
	Employee(const string& name, int age, const string& title){
		this->title = title;
		this->name = name;
		this->age = age;
	}

	void getIntroductoryMessage() const {
		cout << "Hi! I am " << name << ", a " << age << " year old and a " << title << "." << endl;
	}

	void work() {
		cout << "Work is in Progress......" << endl;
		cout << endl;
	}
};
