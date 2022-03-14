#include<bits/stdc++.h>
using namespace std;

class SINHVIEN{
protected:
	string Masv;
	string hoten;
	int namsinh;

public:
	void nhapSV(int i);
	void showSINHVIEN();
};

void SINHVIEN::nhapSV(int i){
	cout << "Nhap MSV thu " << i+1 << ": ";
	getline(cin, this->Masv);
	cout << "Nhap Ho Ten SV thu " << i+1 << ": ";
	getline(cin, this->hoten);
	cout << "Nhap Nam Sinh SV thu " << i+1 << ": ";
	cin >> this->namsinh;
}
void SINHVIEN::showSINHVIEN(){
	cout << this->Masv << " " << this->hoten << " " << this->namsinh;
}

class DIEMTHI: protected SINHVIEN{
private:
	float diem1;
	float diem2;
	float diem3;

public:
	void nhapThongTin(int i);
	void xuatThongTin();
	float DHP();
	friend string KQ(DIEMTHI diemThi);
};

void DIEMTHI::nhapThongTin(int i){
	SINHVIEN::nhapSV(i);
	cout << "Nhap Diem 1: ";
	cin >> this->diem1;
	cout << "Nhap Diem 2: ";
	cin >> this->diem2;
	cout << "Nhap Diem 3: ";
	cin >> this->diem3;
}

void DIEMTHI::xuatThongTin(){
	SINHVIEN::showSINHVIEN();
	cout << " ";
	cout << this->diem1 << " " << this->diem2 << " " << this->diem3 ;
}

float DIEMTHI::DHP(){
	return this->diem1*0.1 + this->diem2*0.2 + this->diem3*0.7;
}

string KQ(DIEMTHI diemThi){
	if(diemThi.DHP() >= 5) return "Do";
	return "Truot";
}

int main(){

	vector<DIEMTHI> dsDiemThi(5);

	for(int i = 0; i < 5; i++){
		dsDiemThi[i].nhapThongTin(i);
		cin.ignore();
	}
	
	for(int i = 0; i < 5; i++){
		dsDiemThi[i].xuatThongTin();
		cout << " [";
		cout << dsDiemThi[i].DHP() << "-";
		cout << KQ(dsDiemThi[i]) << "]";
		cout << endl;
	}

	return 0;
}