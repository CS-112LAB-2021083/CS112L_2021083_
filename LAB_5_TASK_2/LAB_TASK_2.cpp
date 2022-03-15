#include<iostream>
using namespace std;
int i;
class parity{
	int arr[6];
public:
	parity() {
		cout << "PLEASE ENTER 5 ELEMENTS OF ARRAY" << endl;
		for (i = 0; i < 5; i++) {
			cin >> arr[i];
		}cout << endl;

		for (int i = 0; i < 5; i++) {
			cout << arr[i] << " ";
		}cout << endl;
	}
	void put(int num = 0) {
		arr[i] = num;
		cout << endl;
	}
	void print() {
		cout << "ARRAY AFTER ADDING ELEMENT" << endl;
		for (i = 0; i < 6; i++) {
			cout << arr[i] << " ";
		}cout << endl;
	}
	void dellete(int num) {
		for (i = 0; i < 6; i++) {
			if (arr[i] == num) {
				for (int j = i; j < 6 - 1; j++) {
					arr[j] = arr[j + 1];
				}
			}
		}
		for (i = 0; i < 5; i++) {
			cout << arr[i] << " ";
		}cout << endl;
	}
	int test(void) {
		if (i % 2 == 0){
			cout << "ARRAY ID EVEN" << endl;
			return true ;
			
		}
		else {
			cout << "ARRAY IS ODD" << endl;
			return false;
		
		}
		cout << endl;
	}
	~parity() {
		
 }
};
int main() {
	parity p1;
	int a,b;
	cout << "ENTER THE VALUE TO ADD IN ARRAY" << endl;
	cin >> a;
	p1.put(a);
	p1.print();
	cout << "ENTER THE NUMBER TO DELETE FROM ARRAY" << endl;
	cin >> b;
	p1.dellete(b);
	cout << p1.test();
}