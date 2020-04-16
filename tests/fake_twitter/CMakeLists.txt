add_executable(test_twit test_twit.cpp)
target_compile_options(test_twit PRIVATE -fprofile-arcs -ftest-coverage)
target_link_libraries(test_twit fake_twitter gtest_main gcov)
add_test(NAME test_twit COMMAND test_twit)

add_executable(test_twit_manager test_twit_manager.cpp)
target_compile_options(test_twit_manager PRIVATE -fprofile-arcs -ftest-coverage)
target_link_libraries(test_twit_manager fake_twitter gmock_main gcov)
add_test(NAME test_twit_manager COMMAND test_twit_manager)

add_executable(test_view_body test_view_body.cpp)
target_compile_options(test_view_body PRIVATE -fprofile-arcs -ftest-coverage)
target_link_libraries(test_view_body fake_twitter gmock_main gcov)
add_test(NAME test_view_body COMMAND test_view_body)

add_executable(test_view_profile test_view_profile.cpp)
target_compile_options(test_view_profile PRIVATE -fprofile-arcs -ftest-coverage)
target_link_libraries(test_view_profile fake_twitter gmock_main gcov)
add_test(NAME test_view_profile COMMAND test_view_profile)

add_executable(test_view_navbar test_view_navbar.cpp)
target_compile_options(test_view_navbar PRIVATE -fprofile-arcs -ftest-coverage)
target_link_libraries(test_view_navbar fake_twitter gmock_main gcov)
add_test(NAME test_view_navbar COMMAND test_view_navbar)