#pragma once

#include <stdio.h>
#include <string.h>

class FilesApi {
private:
	FILE* ptr;
	const char* filename;
	const char* mode;

public:
	FilesApi(const char* file, const char* mod) { filename = file; mode = mod; ptr = nullptr; }
	~FilesApi();
	const char* getFilename() { return filename; }
	void setFilename(const char* file) { filename = file; }
	const char* getMode() { return mode; }
	void setMode(const char* m) { mode = m; }
	void  open();
	void  close();
	int   write(char *buffer, int cant);
	int   read(char bufferRead[], int cant);
	bool checkPtrNull() { return ptr == NULL ? true : false; }

};

