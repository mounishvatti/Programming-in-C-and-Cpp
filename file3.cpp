#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
using namespace std;

int main()
{
	int n, i, j;

	FILE* f;

	f = fopen("file.txt", "w");

	cin >> n;

	vector<int> name(n);

	for (i = 0; i < n; i++) {

		cin >> name[i];

		fprintf(f, "%s", name[i]);
	}
	fclose(f);

	f = fopen("file.txt", "r");

	if (f == NULL) {
		cout << "File doesn't exist!";
		return 0;
	}

	while (!feof(f)) {
		fscanf(f, "%s", name[i]);
		i++;
	}
	n = i - 1;

	sort(name.begin(), name.end());

	for (i = 0; i < n; i++) {

		// Write into the file
		fprintf(f, "%s", name[i]);
	}

	// Print the sorted names
	for (i = 0; i < n; i++) {
		cout << name[i] << '\n';
	}

	return 0;
}

