#include <stdio.h>
	
	int main(int argc, char *argv[])
	{
	        // cppcheck-suppress zerodiv
	        int i = 1/0;
	        printf("i = %d\n", i);
	        return 0;
	}