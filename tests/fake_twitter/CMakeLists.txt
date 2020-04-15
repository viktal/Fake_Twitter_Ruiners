add_executable(test_comment test_comment.cpp)
target_compile_options(test_comment PRIVATE -fprofile-arcs -ftest-coverage)
target_link_libraries(test_comment fake_twitter gtest_main gcov)
add_test(NAME test_comment COMMAND test_comment)