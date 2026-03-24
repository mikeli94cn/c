#include <cstdio>
#include <vector>

using std::vector;

int main()
{
	vector<int> ivec2;

	int temp;
	while (scanf("%d", &temp) == 1) {
		ivec2.push_back(temp);
	}

	for (int i = 1; i <= ivec2.size(); i++) {
		printf("%d\n", ivec2[i - 1]);
	}
}
