#include <iostream>
#include <string>
int main() {
	std::string name;
	//ввод имени
	getline(std::cin, name);

	//вывод
	std::cout << "Hello, world from " << name << std::endl;
	return 0;
}
