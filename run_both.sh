mcs -unsafe $1.cs && mono $1.exe && rm $1.exe
echo "--------------------------"
g++ -o $1.o $1.cpp && ./$1.o && rm $1.o
