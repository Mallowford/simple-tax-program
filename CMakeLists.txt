cmake_minimum_required(VERSION 3.28)
set(CMAKE_CXX_STANDARD 14)
project(Simple_Tax_Program)

#Attaches files
set(SOURCE_FILES src/main.cpp src/Taxes.cpp src/Countries/UnitedStates.cpp)

#Build
add_executable(SimpleTaxProgram ${SOURCE_FILES})