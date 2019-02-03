run:program compile

program:main task
	g++ ./lib/main.o ./lib/task.o -o ./bin/program

main:
	g++ -I "./include" -c ./src/main.cpp -o ./lib/main.o
task:
	g++ -I "./include" -c ./src/task.cpp -o ./lib/task.o

compile:
	./bin/program