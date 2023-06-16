#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(void)
{
const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = strlen(quote);
// Use the write system call to print the quote to the standard error (file descriptor 2)
write(2, quote, len);
return 1;
}
