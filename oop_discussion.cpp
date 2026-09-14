#include<bits/stdc++.h>
 using namespace std;

 class Student{
	public:
		int id;
		string name;
		string roll;

		Student(int id, string name, string roll){
			this->id = id;
			this->name = name;
			this->roll = roll;
		}
 };

 int main(){

	//  Student s1(1, "mohsin", "30");

	//  cout << s1.id << " " << s1.name << " " << s1.roll;
	Student *s1 = new Student(1111, "Mohsin", "TYGHV677");
	Student *s2 = new Student(1112, "Taha", "TYGHV678");
	Student *s3 = new Student(1113, "Tushar", "TYGHV679");
	Student *s4 = new Student(1114, "Shayan", "TYGHV680");
	Student *s5 = new Student(1115, "Nayem", "TYGHV681");

	cout << s1->id << " " << s1->name << " " << s1->roll << endl;
	cout << s2->id << " " << s2->name << " " << s2->roll << endl;
	cout << s3->id << " " << s3->name << " " << s3->roll << endl;
	
	return 0;
}
