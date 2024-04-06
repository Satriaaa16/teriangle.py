cmake_minimum_required(VERSION 3.28.3)
project(project_pertama_openGL VERSION 0.1.0)

add_executable(project_pertama_openGL src/main.cpp)

target_link_libraries(project_pertama_openGL glfw)