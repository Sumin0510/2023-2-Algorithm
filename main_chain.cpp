#include <iostream>
#include <ctime>
#include <cstdio>
#include <string>
#include <vector>

#define MAX_TABLE	10000
#define MAX_KEY		64
#define a 1

typedef long long ll;

using namespace std;

typedef pair<int, int> pii;

vector<pii> hash_table[MAX_TABLE];

typedef struct Hash {
	char key[MAX_KEY + 1];
	int data;
} Hash;
Hash table[MAX_TABLE];

ll hashGen(char key[]) {
	ll h = 5381;
	while (*key != '\0')
		h = (((h << 5) + h) + *key++) % MAX_TABLE;
	return h;
}

int m_strcmp(const char* str1, const char* str2) {
	while (*str1 != '\0' || *str2 != '\0') {
		if (*str1 != *str2) return *str1 - *str2;
		str1++; str2++;
	}
	return 0;
}

void m_strcpy(char dsc[], char src[]) {
	while (*src != '\0')
		*(dsc++) = *(src++);
}



int hashAdd(int key, int data) {
	int hashKey = (a * key) % MAX_TABLE;

	if(hash_table[hashKey].size() == 0)
        {
            hash_table[hashKey].push_back({ key, data });
        }
        else
        {
            hash_table[hashKey].push_back({ key, data });
        }
}

int main(void) {
    
	while (true) {
	    
	    clock_t start, end;
        double duration;
        start = clock();

	    int i;
	    int key;
	    key = 1;
		int data;
		srand(time(0));
		cout << "해시 삽입\n";
		cout << "[Key, Data 입력]\n";
		
		for (i = 0; i < 1000000; i++) {
		data = rand() % 10000;
		char c;
		hashAdd(key, data);
		}
		
		end = clock();
		duration = (double)(end - start) / CLOCKS_PER_SEC;
		printf("실행 시간: %f초\n", duration);
		break;

		}

	return 0;
}
