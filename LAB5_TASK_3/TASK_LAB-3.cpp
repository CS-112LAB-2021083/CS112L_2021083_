#include<iostream>
using namespace std;
class stringType {
	string a;
	string b;
public:
	stringType() {
		cout << "VALUES OF STRINGS ARE:" << endl;
	}
	void setValues(string str1, string str2) {
		a = str1;
		b = str2;
	}
	void printValues() {
		cout << "STRING 1:" << a << endl;
		cout << "STRING 2:" << b << endl;
	}
	int maxlength() {
		int i = 0;
		int count = 0;
		while (a[i] != '\0') {
			count++;
			i++;
		}
		cout << "LENGTH OF STRING IS:";
		return count;

	}
	int compare(string s1, string s2) {
		int flag = 0;
		for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
			if (s1[i] != s2[i])
			{
				flag = 1;
				break;
			}
		}
		cout << "           " << endl;
		cout << "AFTER COMPARING THE STRINGS:" << endl;
		if (flag == 0) {
			cout << "SAME" << endl;
			return 1;
		}
		else {
			cout << "NOT SAME" << endl;
			return 0;
		}
	}
	void copy(string source, string destination) {
		cout << endl;
		int i;
		for (i = 0; source[i] != '\0'; i++) {
			destination[i] = source[i];
		}
		destination[i] = '\0';
		cout << "COPIED STRING IS:" << "  " << destination;
	}
	string concatenate(string s1, string s2) {
		//USING THE METHOD OF ADDNG STRING IMPLIES THAT STRINGS CONCATENATE
		//AS WE CAN SEE
		cout << endl;
		string s = s1 + s2 ;
		cout << "AFTER CONCATENATING THE STRINGS:" <<endl;
		return s;
	}
	~stringType() {
		cout << endl;
		cout << "Program ends.Destructor called" << endl;

	}

		};
int main() {
	stringType s1;
	s1.setValues("CAR", "BON");
	s1.printValues();
	cout << s1.maxlength();
	cout << s1.compare("CAR ", "BON");
	s1.copy("CAR", "BON");
	cout << s1.concatenate("CAR", "BON");

}


