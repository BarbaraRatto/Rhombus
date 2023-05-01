#include<iostream>

#include "Rhombus.h"

int main()
{
	float dha;
	float dva;
	float dhb;
	float dvb;
	float sidea;
	float sideb;
	float A;
	float P;
	float S;

	Rhombus objRhombA(10, 5);
	Rhombus objRhombB;


	sidea= objRhombA.GetSide();

	objRhombB.SetDim(3, 7);
	objRhombA.SetDiagH(4);
	objRhombA.SetDiagV(3);

	dha = objRhombA.GetDiagH();
	dva = objRhombA.GetDiagV();
	objRhombB.GetDiagonals(dhb, dvb);

	A = objRhombA.GetArea();
	P = objRhombA.GetPerimeter();
	S = objRhombA.GetSide();


	Rhombus objRhombC(6, 9);
	Rhombus objRhombD = objRhombC;

	if (objRhombA == objRhombB)
		cout << "Rhombus A has the same size of Rhombus B" << endl;
	else
		cout << "Rhombus A has not the same size of Rhombus B" << endl;

	if (objRhombC == objRhombD)
		cout << "Rhombus C has the same size of Rhombus D" << endl;
	else
		cout << "Rhombus C has not the same size of Rhombus D" << endl;


	return 0;
}