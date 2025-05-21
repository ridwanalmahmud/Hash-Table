#pragma once

#define HT_INITIAL_BASE_SIZE 53
#define HT_PRIME_1 163
#define HT_PRIME_2 157

// hash table items
typedef struct {
    char *key;
    char *value;
} ht_item;

// hash table
typedef struct {
    int base_size;
    int size;
    int count;
    ht_item **items;
} ht_hash_table;

// hash table initializing
static ht_item *ht_new_item(const char *k, const char *v);
ht_hash_table *ht_new();

// deletion of hash table
static void ht_del_items(ht_item *i);
void ht_del_hash_table(ht_hash_table *ht);

// hash function
static int ht_hash(char *s, const int a, const int m);

// collision handling
static int ht_get_hash(const char *s, const int num_buckets, const int attempt);

//hash table methods
void ht_insert(ht_hash_table* ht, const char* key, const char* value);
char* ht_search(ht_hash_table* ht, const char* key);
void ht_delete(ht_hash_table* h, const char* key);
static void ht_resize(ht_hash_table *ht, const int base_size);
static void ht_resize_up(ht_hash_table *ht);
static void ht_resize_down(ht_hash_table *ht);
