add_executable(test_twit test_twit.cpp)
target_compile_options(test_twit PRIVATE -fprofile-arcs -ftest-coverage)
target_link_libraries(test_twit fake_twitter gtest_main gcov)
add_test(NAME test_twit COMMAND test_twit)

add_executable(test_twit_manager test_twit_manager.cpp)
target_compile_options(test_twit_manager PRIVATE -fprofile-arcs -ftest-coverage)
target_link_libraries(test_twit_manager fake_twitter gmock_main gcov)
add_test(NAME test_twit_manager COMMAND test_twit)
