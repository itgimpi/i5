#include <stdio.h>

// Napisati program koji ispisuje sve neparne brojeve manje od unetog neoznaˇcenog celog broja n.

int main() {
    unsigned n; scanf("%u", &n);

    for (int i = 1; i < n; i += 2)
        printf("%u ", i);

}
