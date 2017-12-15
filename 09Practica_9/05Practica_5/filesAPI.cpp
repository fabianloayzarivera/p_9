#include "stdafx.h"
#include "filesAPI.h"

void FilesApi::open() {
	if (fopen_s(&ptr, filename, mode))
		ptr = NULL;
}

void FilesApi::close() {
	fclose(ptr);
}

int FilesApi::write(char *buffer, int cant) {
	
	int charWritten = fwrite(buffer, cant, 1, ptr) * cant;
	return charWritten;
}

int FilesApi::read(char bufferRead[], int cant) {

	int charRead = fread(bufferRead, cant, 1, ptr) * cant;
	return charRead;
}