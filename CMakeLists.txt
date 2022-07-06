
cmake_minimum_required (VERSION 3.8)

project ("httpRequests")

set(CMAKE_CXX_STANDARD 20)

set(BUILD_CPR_TESTS OFF)
set(CMAKE_USE_OPENSSL OFF)
set(CPR_BUILD_TESTS_SSL OFF)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

include(FetchContent)
FetchContent_Declare (cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git GIT_TAG f4622efcb59d84071ae11404ae61bd821c1c344b) 
FetchContent_MakeAvailable(cpr)

add_executable (httpRequests "httpRequests.cpp")
target_link_libraries(httpRequests PRIVATE cpr::cpr)


