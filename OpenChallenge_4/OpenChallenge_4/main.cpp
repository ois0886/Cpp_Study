#include<iostream>
#include<string>
using namespace std;

class Player {
private:
	string name;
public:
	Player() {};
	void nameSet(string name) { this->name = name; }
	string nameGet() { return this->name; }
};

class WordGame {
	int players;
	string one, two;
	string name;
public :
	void GameStart();
};

void WordGame::GameStart() {
	cout << "끝말 잇기 게임을 시작합니다." << endl;
	cout << "게임의 참가하는 인원은 몇명입니까?";
	cin >> players;

	Player *ps = new Player[players];

	for (int i = 0; i < players; i++) {
		cout << "참가자의 이름을 입력하세요. 빈칸없이>>";
		name;
		cin >> name;
		(ps+i)->nameSet(name);
	}
	int j = 0; one = "아버지";
	cout << "시작하는 단어는 " << one << "입니다." << endl;
	while (true) {
		cout << (ps + j)->nameGet() << ">>";
		cin >> two;
		if (one.at(one.size() - 2) == two.at(0) && one.at(one.size() - 1) == two.at(1)) {
			j++;
			one = two;
		}
		else {
			break;
		}
		if (j == players) j = 0;
	}
	delete[] ps;
	
}

int main() {
	WordGame a;
	a.GameStart();


	
}