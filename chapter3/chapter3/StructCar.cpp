#include <iostream>
#include "Chapter3.h"
using namespace std;

void C3::A()
{
	C3::Car A = { "A", 100, 0 };
	A.Accel();
	A.Accel();
	A.ShowCarState();
	A.Breaking();
	A.ShowCarState();
}