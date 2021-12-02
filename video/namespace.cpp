#include <stdio.h>

int	var = 1;
int	f(void) {return 2;}

namespace	Foo {
	int	var = 2;
	int f(void) {return 3;}
}

namespace	Bar {
	int var = 3;
	int f(void) {return 4;}
}

namespace	Muf = Bar;

int	main(void)
{
	printf("var = %d\n", var);
	printf("f() = %d\n", f());

	printf("Foo::gl_var : %d\n", Foo::var);
	printf("Foo::f() : %d\n", Foo::f());

	printf("Bar::gl_var : %d\n", Bar::var);
	printf("Bar::f() : %d\n", Bar::f());

	printf("Muf::gl_var : %d\n", Muf::var);
	printf("Muf::f() : %d\n", Muf::f());
	return 0;
}