#include<iostream>
using namespace std;
class Oval {
private:
	int width, height;
public :
	Oval();
	Oval(int w, int h);
	~Oval();
	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();

};
// Ŭ���� ������
Oval::Oval() {
	this->height = this->width = 1;
}
Oval::Oval(int w, int h) {
	this->width = w;
	this->height = h;
}
Oval :: ~Oval() {
	cout << "��ü �Ҹ�" << endl;
	show();
}
int Oval::getWidth() {
	return this->width;
}
int Oval::getHeight() {
	return this->height;
}
void Oval::set(int w, int h) {
	this->height = h;
	this->width = w;
}

void Oval::show() {
	cout << "width = " << this->width << ", " << "height = " << this->height << endl;
}
int main() {
	Oval a , b(3,4);
	a.show();
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;


}