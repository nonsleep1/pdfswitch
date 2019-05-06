CC=g++
CFLAGS=-std=c++14
LIBS="C:\\MinGW\\lib\\gcc\\mingw32\\8.2.0\\libboost_filesystem-mgw82-mt-d-x32-1_70.a"
PDFSwitch: main.cpp main.res
	windres main.rc -O coff -o main.res
	$(CC) main.cpp main.res -o bin/pdfswitch.exe $(LIBS)