Steps to compile and run the code for assignment 5
------------------------------------------------
1. Unzip all packages in this zip file an empty directory called Assignment5
2. Go to directory Assignment5
cd Assignment5
3. Run the command to build:
g++ src/*.cpp -I ./include -I C:/SDL2/include -L C:/SDL2/lib -lmingw32 -lSDL2main -lSDL2 -o complexity.exe -std=c++14
4. Run the program:
complexity.exe
5. Choose an algorithm by pressing one of the following keys:
S (Scanning) , T (Threaded Scanning), M (Marching), B (Better Marching)