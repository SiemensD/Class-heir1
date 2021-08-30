#include <iostream>
#include<string>


using namespace std;

class Student
{
public:	
	string GetName(){return name;}
	string GetGroup() { return group;}

	void SetName(string name)
	{
		this->name = name;
	}
	void SetGroup(string group)
	{
		this->group = group;
	}

	void Learn()
	{
		cout << "Я студент, я учусь" << endl;
	}

private:
	string name="";
	string group="";
};

class Aspirant:public Student
{
public:
	string GetSubject() { return subject; }
	void SetSubject(string subject)
	{
		this->subject = subject;
	}

	void Learn()
	{
		cout << "Я готовлюсь к защите кандидатской " << endl;
	}

private:	
	string subject="";
};


void main()
{
	setlocale(LC_ALL, "ru");

	Student st;
	st.SetName("Николай");
	cout << "Имя: " << st.GetName()<< endl;
	st.Learn();
	st.SetGroup("BB123");
	cout <<"Группа № " <<st.GetGroup() << endl;

	cout << ">---------------------------------------------<" << endl;

	Aspirant asp;
	asp.SetName("Евгений");
	cout <<"Имя: "<< asp.GetName() << endl;
	asp.Learn();
	asp.SetSubject("Прикладная физика");
	cout << "Предмет научной работы:  " << asp.GetSubject() << endl;
}

/*1.Создайте класс Student, который будет содержать
информацию о студенте.С помощью механизма на -
следования, реализуйте класс Aspirant(аспирант —
тудент, который готовится к защите кандидатской
работы) производный от Student.*/