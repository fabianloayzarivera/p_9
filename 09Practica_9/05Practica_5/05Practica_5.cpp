// 05Practica_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "filesAPI.h"

using namespace std;
int main()
{
	FilesApi api("myFile.txt", "at+");
	char *buffer = "Hello World!";
	char bufferRead[100] = "";
	api.open();
	if (!api.checkPtrNull()) {
		cout << "Number of characters written: " << api.write(buffer, 5) << endl;
		api.close();	

	}
	else {
		cout << "Error opening the file" << endl;
	}
	api.open();
	if (!api.checkPtrNull()) {
		cout << "Number of characters read: " << api.read(bufferRead, 4) << " buffer: " << bufferRead << endl;
		api.close();
	}
	else {
		cout << "Error opening the file" << endl;
	}
	
		
	getchar();
    return 0;
}

