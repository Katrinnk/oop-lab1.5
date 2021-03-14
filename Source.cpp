#include "Number.h"
#include "Real.h"

using namespace std;
int main()
{
	Number s;
	s.Read();
	s.Display();
	Real k;
	k.set_l(s);
	k.Read();
	k.Display();
	return 0;
}