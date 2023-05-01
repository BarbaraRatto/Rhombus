/*! \file rhombus.h
	\brief Declaration of the class Rhombus

	Details.
*/


#ifndef RHOMBUS_H
#define RHOMBUS_H

using namespace std;

/// @class Rhombus
/// @brief to manage an object with the shape of a rhombus
class Rhombus
{
private:
	float diagH;
	float diagV;

	float Side();

public:

	Rhombus();										// default constructor
	Rhombus(float dH, float dV);					// constructor
	Rhombus(const Rhombus& r);						// copy constructor

	~Rhombus();										// destructor

	Rhombus& operator=(const Rhombus& r);			// overload of operator =
	bool operator==(const Rhombus& r);				// overload of operator ==


	void SetDim(float dH, float dV);				
	void SetDiagH(float dH);
	void SetDiagV(float dV);

	void GetDiagonals(float& dH, float& dV);
	float GetDiagH();
	float GetDiagV();
	float GetSide();

	float GetArea();
	float GetPerimeter();

};

#endif