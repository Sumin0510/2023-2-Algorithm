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


int hashAdd(char key[1000], int data) {
	ll h = hashGen(key);
	int cnt = MAX_TABLE;

	while (table[h].key[0] != 0 && cnt--) {
		if (!m_strcmp(table[h].key, key)) {
			table[h].data = data;
			return 1;
		}
		else cout << "[충돌 발생]\n";
		h = (h + 1) % MAX_TABLE;
	}

	if (cnt == -1) return 0;
	m_strcpy(table[h].key, key);
	table[h].data = data;
	return 1;
}

int main(void) {
    
	while (true) {
	    
	    clock_t start, end;
        double duration;
        start = clock();

	    int i;
	    char key[1];
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