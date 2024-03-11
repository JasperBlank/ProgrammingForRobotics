Steps to compile and run the code for assignment 4.1
------------------------------------------------
1. Unzip all packages in this zip file an empty directory called assignment4.1
2. Go to directory assignment4.1
cd assignment4.1
3. Run the command to build:
g++ src/main.cpp src/Package.cpp src/TwoDayPackage.cpp src/OvernightPackage.cpp -I ./include -o assignment4.1.exe -std=c++14
4. Run the program:
assignment4.1.exe