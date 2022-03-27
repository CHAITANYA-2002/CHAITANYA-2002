#include <stdio.h>
#include <string.h>

main()
{
	struct emp
	{
		char mane[10];
		unsigned int sal;
		void TestDisp()
		{
			printf("%s  %u", name, sal);
		}
	};

	struct emp e1;
	strcpy(e1.name, "Employee-1");
	e1.sal = 20000;
	e1.TestDisp();
	return 0;
}
