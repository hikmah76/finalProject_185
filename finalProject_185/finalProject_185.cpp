#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return ; }
	void setX(int a) {
		this->x = a;
	}
	void  setY(int b) {
		this->y = b;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	
};

class Lingkaran :public bidangDatar {
public:
	void input() {
		int r;
		cout << "Masukkan jari-jari lingkaran: ";
		cin >> r;
		setX(r);
	}
	float Luas(int r) {
		return 3.14 * r * r;
	}
	float Keliling(int r) {
		return 2 * 3.14 * r;
	}
	void cekUkuran() {
		float keliling = Keliling(getX());
		if (keliling > 40)
			cout << "Ukuran lingkaran: Besar" << endl;
		else if (keliling < 20)
			cout << "Ukuran lingkaran: Sedang" << endl;
		else if (keliling < 10)
			cout << "Ukuran lingkaran: Kecil" << endl;
	}

};

class Persegipanjang :public bidangDatar { 
public: 
	void input() {
		int p, l;
		cout << " Masukkan panjang persegi panjang: ";
		cin >> p;
		setX(p);
		cout << "Masukkan lebar persegi panjang: ";
		cin >> l;
		setY(l);
	}
	float Luas(int p) {
		return p * getY();
	}
	float Keliling(int p) {
		return 2 * (p * getY());
	}
	void cekUkuran() {
		float keliling = Keliling(getX());
		if (keliling > 40)
			cout << "Ukuran persegi panjang: Besar" << endl;
		else if (keliling > 20)
			cout << "Ukuran persegi panjang: Sedang" << endl;
		else if (keliling > 10)
			cout << "ukuran persegi panjang: Kecil" << endl;
	}
};
int main() { 
			return 0;
		case 1:
			bd = new Lingkaran();
			break;
		case 2:
			bd = new Persegipanjang();
			break;
		default:
			cout << "Pilihan tidak valid!" << endl;
			return 0;
		bd->cekUkuran();

		delete bd;
		delete bd;
	}
	return 0;
	