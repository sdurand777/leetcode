
cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(MyProject)


# pour debug
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")

# # pour release
# set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")
# set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -O3")

# Définir le standard C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ajouter l'exécutable
add_executable(MyProject src/pairsum.cpp)
add_executable(roman src/roman.cpp)
add_executable(prefix src/prefix.cpp)
add_executable(test src/test.cpp)
add_executable(tmp src/tmp.cpp)
