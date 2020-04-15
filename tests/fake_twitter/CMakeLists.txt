add_executable(test_twit test_twit.cpp)
target_compile_options(test_twit PRIVATE -fprofile-arcs -ftest-coverage)
target_link_libraries(test_twit fake_twitter gtest_main gcov)
add_test(NAME test_twit COMMAND test_twit)

add_executable(test_twit_manager test_twit_manager.cpp)
target_compile_options(test_twit_manager PRIVATE -fprofile-arcs -ftest-coverage)
target_link_libraries(test_twit_manager fake_twitter gmock_main gcov)
add_test(NAME test_twit_manager COMMAND test_twit_manager)

add_executable(test_view test_view.cpp)
target_compile_options(test_view PRIVATE -fprofile-arcs -ftest-coverage)
target_link_libraries(test_view fake_twitter gmock_main gcov)
add_test(NAME test_view COMMAND test_view)

add_executable(test_user test_user.cpp)
target_compile_options(test_user PRIVATE -fprofile-arcs -ftest-coverage)
target_link_libraries(test_user fake_twitter gmock_main gcov)
add_test(NAME test_user COMMAND test_user)

add_executable(test_comment test_comment.cpp)
target_compile_options(test_comment PRIVATE -fprofile-arcs -ftest-coverage)
target_link_libraries(test_comment fake_twitter gmock_main gcov)
add_test(NAME test_comment COMMAND test_comment)
