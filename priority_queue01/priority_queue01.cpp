#include <iostream>
#include <queue>
using namespace std;

int main() {
	srand(time(NULL));
	priority_queue <double, vector<double>, greater<double>> priority_queue;
	while (priority_queue.size() != 25)
		priority_queue.push((rand() % 101 - 50) + rand() % 10 * 0.1);
	while (priority_queue.size()) {
		cout << priority_queue.top() << " ";
		priority_queue.pop();
	}
}