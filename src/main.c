#include <stdio.h>
#include "../include/hash.h"

int main() {
    ht_hash_table *ht = ht_new();
    ht_insert(ht, "name", "Hermoine");
    printf("Name: %s\n", ht_search(ht, "name"));
    return 0;
}
