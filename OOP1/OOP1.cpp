#include <iostream>
#include <string>
using namespace std;
class Study {
public:
	Study(const string& new_UNI, unsigned new_fac, unsigned new_kaf, const string& new_group, const string& new_FirstName, const string& new_LastName) {
		Uni = new_UNI;
		Fac = new_fac;
		Kaf = new_kaf;
		Group = new_group;
		FirstName = new_FirstName;
		LastName = new_LastName;
	}
	string GetUni() const {
		return Uni;
	}
	unsigned GetFac() const {
		return Fac;
	}
	unsigned GetKaf() const {
		return Kaf;
	}
	string GetGroup() const {
		return Group;
	}
	string GetFirstName() const {
		return FirstName;
	}
	string GetLastName() const {
		return LastName;
	}
	void PutUni(const string& new_Uni) {
		Uni = new_Uni;
	}
	void PutFac(unsigned new_fac) {
		Fac = new_fac;
	}
	void PutKaf(unsigned new_kaf) {
		Kaf = new_kaf;
	}
	void PutGroup(const string& new_group) {
		Group = new_group;
	}
	void PutFirstName(const string& new_FirstName) {
		FirstName = new_FirstName;
	}
	void PutLastName(const string& new_LastName) {
		LastName = new_LastName;
	}
	void PrintUni() {
		cout << Uni << endl;
	}
	void PrintFuc() {
		cout << Fac << endl;
	}
	void PrintKaf() {
		cout << Kaf << endl;
	}
	void PrintGroup() {
		cout << Group << endl;
	}
	void PrintFirstName() {
		cout << FirstName << endl;
	}
	void PrintLastName() {
		cout << LastName << endl;
	}
	void Print() {
		printf("%s %s studies in %s on %u faculty on %u cathedra in %s\n", FirstName.c_str(), LastName.c_str(), Uni.c_str(), Fac, Kaf, Group.c_str());
	}
private:
	string Uni, Group, FirstName, LastName;
	unsigned Fac, Kaf;
};
int main() {
	Study student1("MAI", 3, 304, "M3O-219Bk-19", "MIHAIL", "Duzhenko");
	student1.Print();
	student1.PutFirstName("Marsell");
	student1.PutLastName("Marsell");
	student1.PrintLastName();
	student1.PrintFirstName();
	student1.PutLastName("Muhamedginov");
	student1.PrintLastName();
	student1.PutFac(1);
	student1.PutKaf(104);
	student1.PutGroup("M1Z-101P-20");
	student1.Print();
	student1.PutUni("MIPT");
	student1.Print();
	cout << student1.GetUni() << endl;
	Study student2(student1);
	student2.Print();
	return 0;
}