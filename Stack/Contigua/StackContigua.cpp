#include "Stack.h"

using std::cout;

void Push (Stack &s, int a)
{
	s.mystack.at(s.i) = a;
	s.i++;
}

bool Pop (Stack &s, int &a)
{
	if (s.i != 0)
	{
		s.i--;
		a = s.mystack.at(s.i);
		return true;
	}

	else
		return false;
}
