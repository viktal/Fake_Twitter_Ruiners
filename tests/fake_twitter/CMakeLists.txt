add_executable(test_twit test_twit.cpp)
target_compile_options(test_twit PRIVATE -fprofile-arcs -ftest-coverage)
target_link_libraries(test_twit fake_twitter gtest_main gcov)
add_test(NAME test_twit COMMAND test_twit)
