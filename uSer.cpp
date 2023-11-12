#include "uSer.h"
int main() {
	User user;
	Message message;

	// ������ ������ �� ������
	readUserFromFile(user);
	readMessageFromFile(message);

	// ����� ������ �� �����
	cout << "User: " << user._name << " " << user._login << " " << user._pass << endl;
	cout << "Message: " << message._text << " " << message._sender << " " << message._receiver << endl;

	// ������ ������ � �����
	writeUserToFile(user);
	writeMessageToFile(message);

	return 0;
}