#include<stdio.h>

int main(){
	// khai bao bien
	float diemtoan, diemvan, diemanh, diemtb, diemtong;
	// nhap gia tri cho cac bien
	printf("Ban hay nhap diem toan cua ban ");
	scanf("%f", &diemtoan);
	printf("Ban hay nhap diem van cua ban ");
	scanf("%f", &diemvan);
	printf("Ban hay nhap diem anh cua ban ");
	scanf("%f", &diemanh);
	// tinh tong trung binh 
	diemtong = diemtoan + diemvan + diemanh;
	diemtb = diemtong / 3;
	//In ket qua
	printf("Diem toan van anh lan luot cua ban la: %f %f %f \n", diemtoan, diemvan, diemanh);
	printf("Diem tong ba mon cua ban la: %.2f \n", diemtong);
	printf("Diem trung binh cua ban la: %.2f \n", diemtb);

	return 0;
}
