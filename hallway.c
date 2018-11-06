#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

int main(void){
	char str[] = "hallway";
	uint64_t *ll_str = malloc(sizeof(long long));
	memcpy(ll_str, str, sizeof(long long));

	uint64_t mask = 0xA000000;
	*ll_str ^= mask;
	printf("%s\n", (char *)ll_str);
	return 0;
}
