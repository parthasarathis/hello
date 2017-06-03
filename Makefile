compiler=g++
binary=hello
obj_files=hello.o main.o


build: $(obj_files)
	echo "Linking OBJECT files"
	$(compiler) -o $(binary) hello.o main.o
	echo "Build completed"

main.o : main.cc hello.h
	$(compiler) -c main.cc

hello.o : hello.cc hello.h
	$(compiler) -c hello.cc
	
	
