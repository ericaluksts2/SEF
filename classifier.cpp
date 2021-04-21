//	FILE			:	classifier.cpp
//	PROJECT			:	SEF Assignment 5
//	PROGRAMMER		:	Erica Luksts
//	FIRST-VERSION	:	April 19, 2021
//	DESCRIPTION		:	This program creates a class called Classifier, which includes an int called data,
//	a function called train(), and a function called predict(). Each function prints the function name. 
//	This program used to demonstrate commit practice using git.

#include <iostream>

using namespace std;

class Classifier
{
	int data;

public:

	//
	//	FUNCTION	:	getData
	//	DESCRIPTION	:
	//		This function provides the data value
	//	PARAMETERS	:	NONE
	//	RETURNS		:	
	//		int		:	data
	int getData()
	{
		return data;
	}

	//
	//	FUNCTION	:	setData
	//	DESCRIPTION	:
	//		This function provides the data value
	//	PARAMETERS	:	
	//		int dataInput	:	integer data value
	//	RETURNS		:	NONE
	void setData(int dataInput)
	{
		data = dataInput;
	}

	//
	//	FUNCTION	:	train()
	//	DESCRIPTION	:
	//		This function prints the function name
	//	PARAMETERS	:	NONE
	//	RETURNS		:	NONE
	void train()
	{
		printf("train");
		printf("The second feature is added");
	}

	//
	//	FUNCTION	:	predict()
	//	DESCRIPTION	:
	//		This function prints the function name
	//	PARAMETERS	:	NONE
	//	RETURNS		:	NONE
	void predict()
	{
		printf("predict");
	}
};