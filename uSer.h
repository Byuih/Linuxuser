#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class User {
public:
	string _name;
	string _login;
	string _pass;
};

class Message {
public:
	string _text;
	string _sender;
	string _receiver;
};

void readUserFromFile(User& user) {
	ifstream inputFile("user_file.txt");
	if (inputFile.is_open())
	{
		inputFile >> user._name >> user._login >> user._pass;
		inputFile.close();
	}
	else {
		cout << "Error opening the user file.";
	}
}

void writeUserToFile(const User& user) {
	ofstream outputFile("user_file.txt");
	if (outputFile.is_open()) {
		outputFile << user._name << " " << user._login << " " << user._pass;
		outputFile.close();
	}
	else {
		cout << "Error opening the user file.";
	}
}

void readMessageFromFile(Message& message) {
	ifstream inputFile("message_file.txt");
	if (inputFile.is_open()) {
		inputFile >> message._text >> message._sender >> message._receiver;
		inputFile.close();
	}
	else {
		cout << "Error opening the message file.";
	}
}

void writeMessageToFile(const Message& message) {
	ofstream outputFile("message_file.txt");
	if (outputFile.is_open()) {
		outputFile << message._text << " " << message._sender << " " << message._receiver;
		outputFile.close();
	}
	else {
		cout << "Error opening the message file.";
	}
}
