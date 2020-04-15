add_executable(test_user test_user.cpp)
target_compile_options(test_user PRIVATE -fprofile-arcs -ftest-coverage)
target_link_libraries(test_user fake_twitter gtest_main gcov)
add_test(NAME test_user COMMAND test_user)
