SET(CMAKE_CXX_FLAGS_DEBUG "${MY_CMAKE_CXX_FLAGS_DEBUG} -I${PROJECT_SOURCE_DIR} -I${PROJECT_SOURCE_DIR}/common -I${PROJECT_SOURCE_DIR}/include -I${CMAKE_CURRENT_BINARY_DIR}/include -I${PROJECT_SOURCE_DIR}/tests/harness  -wd4996 -wd4611" )

SET(CMAKE_CXX_FLAGS_RELEASE "${MY_CMAKE_CXX_FLAGS_DEBUG} -I${PROJECT_SOURCE_DIR} -I${PROJECT_SOURCE_DIR}/common -I${PROJECT_SOURCE_DIR}/include -I${CMAKE_CURRENT_BINARY_DIR}/include -I${PROJECT_SOURCE_DIR}/tests/harness  -wd4996 -wd4611" )


#check-none: apitest$(EXEEXT) \
#            internaltest$(EXEEXT) \
#	    stemtest$(EXEEXT) \
#	    unittest$(EXEEXT)
#	$(TESTS_ENVIRONMENT) ./apitest$(EXEEXT) -b none
#	$(TESTS_ENVIRONMENT) ./internaltest$(EXEEXT)
#	$(TESTS_ENVIRONMENT) ./stemtest$(EXEEXT)
#	$(TESTS_ENVIRONMENT) ./unittest$(EXEEXT)

add_test(check-inmemory apitest -b inmemory WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
add_test(check-multi apitest -b multi WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
add_test(check-singlefile apitest -b singlefile WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})


if(BUILD_BACKEND_REMOTE)

## If both chert and glass are enabled, just run remoteprog_chert.
if(BUILD_BACKEND_CHERT)
  add_test(check-remoteprog1 apitest -b remoteprog_chert WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
else()
  add_test(check-remoteprog1 apitest -b remoteprog WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
endif()

## If both chert and glass are enabled, just run remotetcp_glass.
if(BUILD_BACKEND_GLASS)
  add_test(check-remotetcp1 apitest -b remotetcp_glass WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
else()
  add_test(check-remotetcp1 apitest -b remotetcp WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
endif()

if(BUILD_BACKEND_GLASS)
  add_test(check-remoteglass1 apitest -b remoteprog_glass WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
  add_test(check-remoteglass2 apitest -b remotetcp_glass WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
endif()

if(BUILD_BACKEND_CHERT)
  add_test(check-remotechert1 apitest -b remoteprog_chert WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
  add_test(check-remotechert2 apitest -b remotetcp_chert WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
endif()
endif()

if(BUILD_BACKEND_GLASS)
  add_test(check-multi-glass apitest -b multi_glass WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
  add_test(check-glass apitest -b glass WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
  add_test(check-singlefile-glass apitest -b singlefile_glass WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
endif()

if(BUILD_BACKEND_CHERT)
  add_test(check-multi-chert apitest -b multi_chert WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
  add_test(check-chert apitest -b chert WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
endif()

add_executable(apitest "")
add_executable(internaltest "")
add_executable(stemtest "")
add_executable(unittest "")

set_target_properties(apitest PROPERTIES FOLDER "tests")
set_target_properties(internaltest PROPERTIES FOLDER "tests")
set_target_properties(stemtest PROPERTIES FOLDER "tests")
set_target_properties(unittest PROPERTIES FOLDER "tests")

## Sources:

target_sources(apitest PRIVATE apitest.h dbcheck.h)

target_sources(apitest 
 PRIVATE
 api_anydb.cc 
 api_backend.cc 
 api_closedb.cc 
 api_collapse.cc 
 api_compact.cc 
 api_compactold.cc 
 api_db.cc 
 api_generated.cc 
 api_geospatial.cc 
 api_matchspy.cc 
 api_metadata.cc 
 api_nodb.cc 
 api_none.cc 
 api_opsynonym.cc 
 api_opvalue.cc 
 api_percentages.cc 
 api_posdb.cc 
 api_postingsource.cc 
 api_qpbackend.cc 
 api_query.cc 
 api_queryparser.cc 
 api_replacedoc.cc 
 api_replicate.cc 
 api_scalability.cc 
 api_serialise.cc 
 api_snippets.cc 
 api_sorting.cc 
 api_spelling.cc 
 api_stem.cc 
 api_termgen.cc 
 api_transdb.cc 
 api_unicode.cc 
 api_valuestats.cc 
 api_valuestream.cc 
 api_weight.cc 
 api_wrdb.cc)


set(XAPIAN_LIBS ${LIBRARY_DIR}/libxapian.lib ${LIBRARY_DIR}/libgetopt.lib ${CMAKE_CURRENT_BINARY_DIR}/$<CONFIG>/testharness_sources.lib ${CMAKE_CURRENT_BINARY_DIR}/$<CONFIG>/utestharness_sources.lib )
set(EXTRA_LIBS ws2_32.lib rpcrt4.lib)
set(DEBUG_LIBS ${VCPKG_BASE_DIR}/debug/lib/zlibd.lib ${XAPIAN_LIBS} ${EXTRA_LIBS})
set(RELEASE_LIBS ${VCPKG_BASE_DIR}/lib/zlib.lib ${XAPIAN_LIBS} ${EXTRA_LIBS})

add_library(testharness_sources STATIC "")
add_library(utestharness_sources STATIC "")
add_subdirectory(harness)
target_sources(apitest PRIVATE apitest.cc dbcheck.cc api_all.h api_collated.h)
target_link_libraries(apitest debug ${DEBUG_LIBS} optimized ${RELEASE_LIBS})


target_sources(stemtest PRIVATE stemtest.cc )
target_link_libraries(stemtest debug ${DEBUG_LIBS} optimized ${RELEASE_LIBS})

target_sources(internaltest PRIVATE internaltest.cc )
target_link_libraries(internaltest debug ${DEBUG_LIBS} optimized ${RELEASE_LIBS})

target_sources(unittest PRIVATE unittest.cc )
target_link_libraries(unittest debug ${DEBUG_LIBS} optimized ${RELEASE_LIBS} )

set_target_properties(apitest PROPERTIES FOLDER "tests")
set_target_properties(stemtest PROPERTIES FOLDER "tests")
set_target_properties(internaltest PROPERTIES FOLDER "tests")
set_target_properties(unittest PROPERTIES FOLDER "tests")

set_tests_properties(check-inmemory check-multi check-singlefile check-remoteprog1 check-remotetcp1 check-remoteglass1 check-remoteglass2 check-remotechert1 check-remotechert2 check-multi-glass check-glass check-singlefile-glass check-multi-chert check-chert PROPERTIES ENVIRONMENT "srcdir=${CMAKE_CURRENT_LIST_DIR}") 

add_subdirectory(perftest)
add_subdirectory(soaktest)

add_dependencies(apitest testharness_sources libxapian libgetopt)
add_dependencies(stemtest testharness_sources libxapian libgetopt)
add_dependencies(internaltest testharness_sources libxapian libgetopt)
add_dependencies(unittest utestharness_sources libxapian libgetopt)
