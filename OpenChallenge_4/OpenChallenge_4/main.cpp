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
	cout << "���� �ձ� ������ �����մϴ�." << endl;
	cout << "������ �����ϴ� �ο��� ����Դϱ�?";
	cin >> players;

	Player *ps = new Player[players];

	for (int i = 0; i < players; i++) {
		cout << "�������� �̸��� �Է��ϼ���. ��ĭ����>>";
		name;
		cin >> name;
		(ps+i)->nameSet(name);
	}
	int j = 0; one = "�ƹ���";
	cout << "�����ϴ� �ܾ�� " << one << "�Դϴ�." << endl;
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