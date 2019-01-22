SET(CMAKE_CXX_FLAGS_DEBUG "${MY_CMAKE_CXX_FLAGS_DEBUG} -I${PROJECT_SOURCE_DIR} -I${PROJECT_SOURCE_DIR}/common -I${PROJECT_SOURCE_DIR}/include -I${CMAKE_CURRENT_BINARY_DIR}/include -I${PROJECT_SOURCE_DIR}/tests/harness -I${PROJECT_SOURCE_DIR}/tests -wd4996" )

SET(CMAKE_CXX_FLAGS_RELEASE "${MY_CMAKE_CXX_FLAGS_DEBUG} -I${PROJECT_SOURCE_DIR} -I${PROJECT_SOURCE_DIR}/common -I${PROJECT_SOURCE_DIR}/include -I${CMAKE_CURRENT_BINARY_DIR}/include -I${PROJECT_SOURCE_DIR}/tests/harness -I${PROJECT_SOURCE_DIR}/tests  -wd4996" )

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -I${PROJECT_SOURCE_DIR}")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -I${PROJECT_SOURCE_DIR}")

add_executable(perftest "${CMAKE_CURRENT_LIST_DIR}/perftest_matchdecider.cc")
target_sources(perftest PRIVATE ${CMAKE_CURRENT_LIST_DIR}/perftest_randomidx.cc)

target_sources(perftest PRIVATE   ${CMAKE_CURRENT_LIST_DIR}/perftest.h)

target_sources(perftest 
 PRIVATE   
 ${CMAKE_CURRENT_LIST_DIR}/perftest.cc 
 ${CMAKE_CURRENT_LIST_DIR}/perftest_all.h
 ${CMAKE_CURRENT_LIST_DIR}/perftest_collated.h 
 ${CMAKE_CURRENT_LIST_DIR}/freemem.cc 
 ${CMAKE_CURRENT_LIST_DIR}/freemem.h 
 ${CMAKE_CURRENT_LIST_DIR}/runprocess.cc 
 ${CMAKE_CURRENT_LIST_DIR}/runprocess.h 
 )

target_link_libraries(perftest debug ${DEBUG_LIBS} optimized ${RELEASE_LIBS} )

set_target_properties(perftest PROPERTIES FOLDER "tests/perftest")
add_dependencies(perftest testharness_sources libxapian libxapian)
