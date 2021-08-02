#include <stdio.h>

extern "C" {
	void hello()
	{
		printf("hello pywrap!\n");
	}
}
