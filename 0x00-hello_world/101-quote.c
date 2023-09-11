#include <unistd.h>
#include <string.h>

int main(void) {
    const char *message = "and that piece of art is useful - Dora Korpar, 2015-10-19\n";
    ssize_t len = strlen(message);
    ssize_t bytes_written = write(2, message, len);

    if (bytes_written != len) {
        return 1;
    }

    return 0;
}
