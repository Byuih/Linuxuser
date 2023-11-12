#include "uSer.h"
int main() {
	User user;
	Message message;

	// Чтение данных из файлов
	readUserFromFile(user);
	readMessageFromFile(message);

	// Вывод данных на экран
	cout << "User: " << user._name << " " << user._login << " " << user._pass << endl;
	cout << "Message: " << message._text << " " << message._sender << " " << message._receiver << endl;

	// Запись данных в файлы
	writeUserToFile(user);
	writeMessageToFile(message);

	return 0;
}