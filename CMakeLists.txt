
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_VERBOSE_MAKEFILE ON)


project("learningC")

# add_executable(roots.exe ROOTS-QU.c)
# target_link_libraries(roots.exe m)

add_executable(exp.exe exponent.C)

add_executable(num.exe add-numb.c)