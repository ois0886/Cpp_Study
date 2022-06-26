#include<iostream>
using namespace std;
class CoffeeMachine {
private:
	int coffe, water, sugar;
public:
	CoffeeMachine(int c, int w, int s); // ������ <- coffee�� wate, sugar�� �Ű������� �ް� �Ű������� ���� ������ �޴´�.
	void madeCoffee(int m); // Ŀ�Ǹ���� �޼ҵ�
	int SystemExit(); // ���� �޼ҵ�
	void run(); // Ŀ�Ǹӽ��� �޴����� ���� �޼ҵ�
	void checkList(); // ����� ���¸� Ȯ���ϴ� �޼ҵ�
	// ���������� Ŀ��1, ��1
	// �Ƹ޸�ī�� Ŀ��1, ��2
	// ����Ŀ�� Ŀ��1, ��2 , ����1
	// ä��� 10,10,10

};
CoffeeMachine::CoffeeMachine(int c, int w, int s) { 
	this->coffe = c;
	this->water = w;
	this->sugar = s;
	cout << "Coffee Machine Starting...." << endl;;
	cout << "(System Message3) : �ֹ��� �����մϴ�!" << endl;
}

void CoffeeMachine:: madeCoffee(int m) { // �޴���� �ŰԺ����� �ް� �׿� �´� Ŀ�Ǹ� �����Ѵ�.
	if (m == 1) {
		this->coffe = this->coffe - 1;
		this->water = this->water - 1;
		cout << ".....[����������] ���Խ��ϴ�~" << endl;
		cout << "(System Message 1) : Ŀ�Ǹӽ� ����, Ŀ��:" << this->coffe << "	" 
			<< "��:" << this->water << "	" << "����:" << this->sugar << ")" << endl;
	}
	else if (m == 2) {
		this->coffe = this->coffe - 1;
		this->water = this->water - 2;
		cout << ".....[�Ƹ޸�ī��] ���Խ��ϴ�~" << endl;
		cout << "(System Message 1) : Ŀ�Ǹӽ� ����, Ŀ��:" << this->coffe << "	" 
			<< "��:" << this->water << "	" << "����:" << this->sugar << ")" << endl;
	}
	else {
		this->coffe = this->coffe - 1;
		this->water = this->water - 2;
		this->sugar = this->sugar - 1;
		cout << ".....[���� Ŀ��] ���Խ��ϴ�~" << endl;
		cout << "(System Message 1) : Ŀ�Ǹӽ� ����, Ŀ��:" << this->coffe << "	"
			<< "��:" << this->water << "	" << "����:" << this->sugar << ")" << endl;
	}
}

void CoffeeMachine::run() { // ����޴�
	cout << endl;
	cout << "--- �޴� ---" << endl;
	cout << "1. Espresso" << endl;
	cout << "2. Americano" << endl;
	cout << "3. Sugar Coffee" << endl;
	cout << "4. System Exit" << endl;

}

int CoffeeMachine::SystemExit() {
	cout << "(Syetem Message4): �ǸŸ� �����մϴ�!" << endl;
	return 0;
}

void CoffeeMachine::checkList() { // �� ������ �ϳ��� �� �������ٸ� ���� �ٽ� 10���� ä���.
	if (this->coffe == 0 || this->water == 0 || this->sugar == 0) {
		cout << "(System Message2): ��� ��ٷ� �ּ���! ��Ḧ ä��� �ֽ��ϴ�..." << endl 
			<< "(System Message3): 3�� �� �ֹ��� �����մϴ�!" << endl;
		this->coffe = 10; this->water = 10; this->sugar = 10;
	}
}

int main() {
	CoffeeMachine cm(3, 5, 2);
	int menu;
	int MachineCheck = 1; // <- �޴�üũ��� ������ ���� ��������� Ȯ���ϰ�, ���� 4�� �Էµȴٸ� 0���� �ٲ�� �ý����� ����ȴ�.
	while (MachineCheck == 1) { 
		cm.run();
		cout << "*�޴��� �����ϼ��� : ";
		cin >> menu;
		cout << endl;
		if (menu < 4) {
			cm.madeCoffee(menu);
			cm.checkList();
		}
		else if (menu == 4) {
			MachineCheck = cm.SystemExit();
		}
		else {
			cout <<"(Syetem Error): �ٽ� �Է��� �ּ���!" << endl;
		}

	}

}