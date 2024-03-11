Steps to compile and run the code for assignment 4.2
------------------------------------------------
1. Unzip all packages in this zip file an empty directory called assignment4.2
2. Go to directory assignment4.2
cd assignment4.2
3. Run the command to build:
g++ src/main.cpp src/Package.cpp src/TwoDayPackage.cpp src/OvernightPackage.cpp Customer.cpp PrivateCustomer.cpp BusinessCustomer.cpp -I ./include -o assignment4.2.exe -std=c++14
4. Run the program:
assignment4.2.exe