#include<iostream>
using namespace std;
class CoffeeMachine {
private:
	int coffe, water, sugar;
public:
	CoffeeMachine(int c, int w, int s); // 생성자 <- coffee와 wate, sugar를 매개변수로 받고 매개변수를 설정 값으로 받는다.
	void madeCoffee(int m); // 커피만드는 메소드
	int SystemExit(); // 종료 메소드
	void run(); // 커피머신의 메뉴판을 띄우는 메소드
	void checkList(); // 재료의 상태를 확인하는 메소드
	// 에스프레소 커피1, 물1
	// 아메리카노 커피1, 물2
	// 슈가커피 커피1, 물2 , 설탕1
	// 채우면 10,10,10

};
CoffeeMachine::CoffeeMachine(int c, int w, int s) { 
	this->coffe = c;
	this->water = w;
	this->sugar = s;
	cout << "Coffee Machine Starting...." << endl;;
	cout << "(System Message3) : 주문이 가능합니다!" << endl;
}

void CoffeeMachine:: madeCoffee(int m) { // 메뉴라는 매게변수를 받고 그에 맞는 커피를 제작한다.
	if (m == 1) {
		this->coffe = this->coffe - 1;
		this->water = this->water - 1;
		cout << ".....[에스프레소] 나왔습니다~" << endl;
		cout << "(System Message 1) : 커피머신 상태, 커피:" << this->coffe << "	" 
			<< "물:" << this->water << "	" << "설탕:" << this->sugar << ")" << endl;
	}
	else if (m == 2) {
		this->coffe = this->coffe - 1;
		this->water = this->water - 2;
		cout << ".....[아메리카노] 나왔습니다~" << endl;
		cout << "(System Message 1) : 커피머신 상태, 커피:" << this->coffe << "	" 
			<< "물:" << this->water << "	" << "설탕:" << this->sugar << ")" << endl;
	}
	else {
		this->coffe = this->coffe - 1;
		this->water = this->water - 2;
		this->sugar = this->sugar - 1;
		cout << ".....[슈가 커피] 나왔습니다~" << endl;
		cout << "(System Message 1) : 커피머신 상태, 커피:" << this->coffe << "	"
			<< "물:" << this->water << "	" << "설탕:" << this->sugar << ")" << endl;
	}
}

void CoffeeMachine::run() { // 실행메뉴
	cout << endl;
	cout << "--- 메뉴 ---" << endl;
	cout << "1. Espresso" << endl;
	cout << "2. Americano" << endl;
	cout << "3. Sugar Coffee" << endl;
	cout << "4. System Exit" << endl;

}

int CoffeeMachine::SystemExit() {
	cout << "(Syetem Message4): 판매를 종료합니다!" << endl;
	return 0;
}

void CoffeeMachine::checkList() { // 각 재료들이 하나라도 다 떨어진다면 전부 다시 10으로 채운다.
	if (this->coffe == 0 || this->water == 0 || this->sugar == 0) {
		cout << "(System Message2): 잠시 기다려 주세요! 재료를 채우고 있습니다..." << endl 
			<< "(System Message3): 3초 후 주문이 가능합니다!" << endl;
		this->coffe = 10; this->water = 10; this->sugar = 10;
	}
}

int main() {
	CoffeeMachine cm(3, 5, 2);
	int menu;
	int MachineCheck = 1; // <- 메뉴체크라는 변수를 만들어서 종료시점을 확인하고, 만약 4가 입력된다면 0으로 바뀌어 시스템은 종료된다.
	while (MachineCheck == 1) { 
		cm.run();
		cout << "*메뉴를 선택하세요 : ";
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
			cout <<"(Syetem Error): 다시 입력해 주세요!" << endl;
		}

	}

}