#include <iostream>
#include<vector>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    vector<bool>monkeys(m, true);
	int current = 0;
	int count = 0;
	int remaining = m;
    while (remaining > 1) {
                if (monkeys[current]) {
            count++;
            if (count == n) {
                monkeys[current] = false;
                count = 0;
                remaining--;
            }
        }
				current = (current + 1) % m;
    }
    for(int i = 0; i < m; i++) {
        if (monkeys[i]) {
            cout <<"king: "<< i + 1 << endl;
            break;
        }
	}
    return 0;
}