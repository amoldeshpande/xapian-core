

SET(CMAKE_CXX_FLAGS_DEBUG "${MY_CMAKE_CXX_FLAGS_DEBUG} -I${PROJECT_SOURCE_DIR} -I${PROJECT_SOURCE_DIR}/common -I${PROJECT_SOURCE_DIR}/include -I${CMAKE_CURRENT_BINARY_DIR}/include -I${PROJECT_SOURCE_DIR}/tests/harness -I${PROJECT_SOURCE_DIR}/tests -wd4996" )

SET(CMAKE_CXX_FLAGS_RELEASE "${MY_CMAKE_CXX_FLAGS_DEBUG} -I${PROJECT_SOURCE_DIR} -I${PROJECT_SOURCE_DIR}/common -I${PROJECT_SOURCE_DIR}/include -I${CMAKE_CURRENT_BINARY_DIR}/include -I${PROJECT_SOURCE_DIR}/tests/harness -I${PROJECT_SOURCE_DIR}/tests  -wd4996" )

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -I${PROJECT_SOURCE_DIR}")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -I${PROJECT_SOURCE_DIR}")


add_executable(soaktest "${CMAKE_CURRENT_LIST_DIR}/soaktest_queries.cc")

target_sources(soaktest PRIVATE ${CMAKE_CURRENT_LIST_DIR}/soaktest.h)

target_sources(soaktest PRIVATE ${CMAKE_CURRENT_LIST_DIR}/soaktest_queries.cc)

target_sources(soaktest 
	PRIVATE 
	${CMAKE_CURRENT_LIST_DIR}/soaktest_queries.cc
   ${CMAKE_CURRENT_LIST_DIR}/soaktest.cc 
 ${CMAKE_CURRENT_LIST_DIR}/soaktest_all.h 
 ${CMAKE_CURRENT_LIST_DIR}/soaktest_collated.h)

target_link_libraries(soaktest debug ${DEBUG_LIBS} optimized ${RELEASE_LIBS} )
set_target_properties(soaktest PROPERTIES FOLDER "tests/soaktest")
add_dependencies(soaktest testharness_sources libxapian)
