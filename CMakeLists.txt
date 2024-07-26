cmake_minimum_required(VERSION 3.28)
project(c_case C)

set(CMAKE_C_STANDARD 11)

add_executable(struct-define-init src/struct/struct-define-init.c)
add_executable(access-struct-member src/struct/access-struct-member.c)
add_executable(struct-as-function-parameter src/struct/struct-as-function-parameter.c)
add_executable(struct-pointer-as-function-parameter src/struct/struct-pointer-as-function-parameter.c)
add_executable(calculate-struct-size src/struct/calculate-struct-size.c)
add_executable(union-declare-define src/union/union-declare-define.c)
add_executable(access-union-member-incorrect src/union/access-union-member-incorrect.c)
add_executable(access-union-member-correct src/union/access-union-member-correct.c)
