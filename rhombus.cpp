/// \file hrombus.cpp
///	\brief class Rhombus: implementation of the functions
///
///	Details.
///

#include <iostream>
#include "Rhombus.h"
#include <math.h>

/// @brief default constructor 
Rhombus::Rhombus()
{
	cout << "Rhombus - constructor - default" << endl;

	diagH = 0;
	diagV = 0;
}

/// @brief constructor 
/// @param dH horizontal diagonal in pixels
/// @param dV vertical diagonal in pixels
Rhombus::Rhombus(float dH, float dV)
{
	diagH = 0;
	diagV = 0;

	cout << "Rhombus - constructor" << endl;

	if (dH <= 0)
		cout << "WARNING: Rhombus - constructor: width should be > 0" << endl;
	else
		diagH = dH;

	if (dV <= 0)
		cout << "WARNING: Rhombus - constructor: length should be > 0" << endl;
	else
		diagV = dV;
}

/// @brief copy constructor 
/// @param reference to the object that should be copied
Rhombus::Rhombus(const Rhombus& r)
{
	cout << "Rhombus - copy constructor" << endl;

	diagH = r.diagH;
	diagV = r.diagV;
}

/// @brief destructor 
Rhombus::~Rhombus()
{
	cout << "Rhombus - destructor" << endl;
}


/// @brief overload of operator = 
/// @param reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Rhombus& Rhombus::operator=(const Rhombus& r)
{
	cout << "Rhombus - operator =" << endl;
	
	diagH = r.diagH;
	diagV = r.diagV;
	
	return *this;			// return the rhombus
}

/// @brief overload of operator == 
/// @param reference to the object on the right side of the operator 
/// @return true if the two objects have the same diagH and the same diagV
bool Rhombus::operator==(const Rhombus& r)
{
	if (r.diagH == diagH && r.diagV == diagV)
		return true;
	
	return false;
}

/// calculate the side

/// @brief calculate the rhombus side knowing the diagonals
/// @return side in pixels
float Rhombus::Side()
{
	return (sqrt((float)pow(diagH/2,2) + pow(diagV/2,2)));							// cast to float
}

/// functions set

/// @brief set diagH of the object
/// @param dH in pixels
void Rhombus::SetDiagH(float dH)
{
	if (dH < 0)
	{
		cout << "WARNING: Rhombus - SetDiagH: diagH should be > 0" << endl;
		return;
	}

	diagH = dH;
}

/// @brief set diagV of the object
/// @param dH in pixels
void Rhombus::SetDiagV(float dV)
{
	if (dV < 0)
	{
		cout << "WARNING: Rhombus - SetDiagV: diagV should be > 0" << endl;
		return;
	}

	diagV = dV;
}

/// @brief set diagH and diagV of the object
/// @param dH diagH in pixels
/// @param dV diagV in pixels
void Rhombus::SetDim(float dH, float dV)
{
	SetDiagH(dH);
	SetDiagV(dV);
}

/// functions get

/// @brief get diagH of the object
/// @return rhombus diagH in pixels
float Rhombus::GetDiagH()
{
	return diagH;
}

/// @brief get diagV of the object
/// @return rhombus diagV in pixels
float Rhombus::GetDiagV()
{
	return diagV;
}

/// @brief get diagH and diagV of the object
/// @param dH diagH in pixels
/// @param dV diagV in pixels
void Rhombus::GetDiagonals(float& dH, float& dV)
{
	dH = diagH;
	dV = diagV;

	return;
}

/// @brief get side of the object
/// @return rhombus side in pixels
float Rhombus::GetSide()
{
	return Side();
}



/// @brief get area of the object
/// @return rhombus area in pixels
float Rhombus::GetArea()
{
	return ((diagH * diagV) / 2);
}

/// @brief get perimeter of the object
/// @return rhombus perimeter in pixels
float Rhombus::GetPerimeter()
{
	return 4* GetSide();
}
