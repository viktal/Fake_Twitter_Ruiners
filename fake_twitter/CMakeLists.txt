add_library(include INTERFACE)
target_include_directories(include INTERFACE include)

add_executable(app app.cpp)
target_link_libraries(app include)