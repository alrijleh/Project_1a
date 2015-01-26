/*
Project 1a
Main.cpp
Initializes the mastermind object and calls playGame()

Fouad Al-Rijleh, Rachel Rudolph
*/

#include "Main.h"

//Overload output operator for Response
ostream &operator<<(ostream &ostream, const Response &newResponse){
	ostream << "(" << newResponse.getNumCorrect() << ", " << newResponse.getNumIncorrect() << ")";
	
	return ostream;
}

//Overload equality operator for Response
bool operator==(const Response &response, const Response &newResponse){
	return newResponse.getNumCorrect() == response.getNumCorrect() 
		&& newResponse.getNumIncorrect() == response.getNumIncorrect();

}

//Overload assign operator for Response
Response &Response::operator=(const Response &response){
	numCorrect = response.getNumCorrect();
	numIncorrect = response.getNumIncorrect();
	return *this;
}

//Overload output operator for Code
ostream &operator<<(ostream &ostream, const Code &code)
{
	for (int index = 0; index < code.code.size(); index++)
	{
		ostream << code.code[index];
	}
	return ostream;
}

//Overload output operator for Mastermind to print secretCode
ostream &operator<<(ostream &ostream, const Mastermind &mastermind)
{
	ostream << mastermind.getSecretCode();
	return ostream;
}

//Overload output operator for Container class
ostream &operator<<(ostream &ostream, const Container container)
{
	ostream << "Guess Code:" << container.getGuessCode() << endl;
	ostream << "Response: " << container.getResponse() << endl;
	return ostream;
}

//Main
void main()
{
	Mastermind masterMind;
	masterMind.playGame2();
	system("pause");
}

