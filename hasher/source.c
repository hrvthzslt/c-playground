#include <openssl/sha.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sha1(char *s);

int main(int argc, char *argv[])
{
	if (argc > 1) {
		sha1(argv[1]);
	} else {
		printf("No argument provided.\n");
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}

void sha1(char *s)
{
	unsigned char hash[SHA_DIGEST_LENGTH];
	SHA1((unsigned char *)s, strlen(s), hash);

	for (int i = 0; i < SHA_DIGEST_LENGTH; i++) {
		printf("%02x", hash[i]);
	}

	printf("\n");
}
