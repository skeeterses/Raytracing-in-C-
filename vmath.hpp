/*
===============================================================================
= vmath.hpp=Header File for 3 dimensional vector mathematics		      = 
===============================================================================
*/

#include <iostream>
#include <cmath>

using namespace std;

class Vector {
  public:
  float x, y, z;

  Vector();
  Vector(float x1, float y1, float z1);
  Vector(Vector &);
  Vector operator+(Vector &);
  Vector operator-(Vector &);
  Vector operator-();
  Vector operator=(Vector &);
  Vector operator*(Vector &);
  Vector operator*(float );
  Vector operator/(float );
  float operator%(Vector &);  // Dot product
  Vector operator^(Vector &);	//Cross product
  Vector operator~();	//Normalize vector
  Vector min(Vector &);
  Vector max(Vector &);
  Vector Rotate(float cos1, float sin1, float cos2, float sin2);
  Vector Rev_Rotate(float cos1, float sin1, float cos2, float sin2);
  friend ostream &operator<<(ostream&, Vector&);
  void get_vector();
};
