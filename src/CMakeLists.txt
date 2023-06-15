project(Challenges)
cmake_minimum_required(VERSION 3.16.3)

add_library(reusable helpers/reusable.c)
add_executable(challenges challenges.c)
target_link_libraries(challenges reusable)