SET(CMAKE_CXX_FLAGS_DEBUG "${MY_CMAKE_CXX_FLAGS_DEBUG} -wd4996")
SET(CMAKE_CXX_FLAGS_RELEASE "${MY_CMAKE_CXX_FLAGS_RELEASE} -wd4996")

add_executable(copydatabase ${CMAKE_CURRENT_LIST_DIR}/copydatabase.cc)
target_link_libraries(copydatabase ${LIBRARY_DIR}/libxapian.lib ${EXTRA_LIBS})

add_executable(quest ${CMAKE_CURRENT_LIST_DIR}/quest.cc)
target_link_libraries(quest ${LIBRARY_DIR}/libxapian.lib ${LIBRARY_DIR}/libgetopt.lib ${EXTRA_LIBS})

add_executable(simpleexpand ${CMAKE_CURRENT_LIST_DIR}/simpleexpand.cc)
target_link_libraries(simpleexpand ${LIBRARY_DIR}/libxapian.lib ${EXTRA_LIBS})

add_executable(simpleindex ${CMAKE_CURRENT_LIST_DIR}/simpleindex.cc)
target_link_libraries(simpleindex ${LIBRARY_DIR}/libxapian.lib ${EXTRA_LIBS})

add_executable(simplesearch ${CMAKE_CURRENT_LIST_DIR}/simplesearch.cc)
target_link_libraries(simplesearch ${LIBRARY_DIR}/libxapian.lib ${EXTRA_LIBS})

add_executable(xapian-metadata ${CMAKE_CURRENT_LIST_DIR}/xapian-metadata.cc)
target_link_libraries(xapian-metadata ${LIBRARY_DIR}/libxapian.lib ${EXTRA_LIBS})

add_executable(xapian-pos ${CMAKE_CURRENT_LIST_DIR}/xapian-pos.cc)
target_link_libraries(xapian-pos ${LIBRARY_DIR}/libxapian.lib ${LIBRARY_DIR}/libgetopt.lib ${EXTRA_LIBS})

set(DEBUG_LIBS ${VCPKG_BASE_DIR}/debug/lib/zlibd.lib)
set(RELEASE_LIBS ${VCPKG_BASE_DIR}/lib/zlib.lib)


target_link_libraries(copydatabase debug  ${DEBUG_LIBS} ws2_32 rpcrt4.lib optimized  ${RELEASE_LIBS})
target_link_libraries(quest debug  ${DEBUG_LIBS} ws2_32 rpcrt4.lib optimized  ${RELEASE_LIBS})
target_link_libraries(simpleexpand debug  ${DEBUG_LIBS} ws2_32 rpcrt4.lib optimized  ${RELEASE_LIBS})
target_link_libraries(simpleindex debug  ${DEBUG_LIBS} ws2_32 rpcrt4.lib optimized  ${RELEASE_LIBS})
target_link_libraries(simplesearch debug  ${DEBUG_LIBS} ws2_32 rpcrt4.lib optimized  ${RELEASE_LIBS})
target_link_libraries(xapian-metadata debug  ${DEBUG_LIBS} ws2_32 rpcrt4.lib optimized  ${RELEASE_LIBS})
target_link_libraries(xapian-pos debug  ${DEBUG_LIBS} ws2_32 rpcrt4.lib optimized  ${RELEASE_LIBS})

add_dependencies(copydatabase libxapian)
add_dependencies(quest libxapian)
add_dependencies(simpleexpand libxapian)
add_dependencies(simpleindex libxapian)
add_dependencies(simplesearch libxapian)
add_dependencies(xapian-metadata libxapian)
add_dependencies(xapian-pos libxapian)

set_target_properties(copydatabase PROPERTIES FOLDER "examples")
set_target_properties(quest PROPERTIES FOLDER "examples")
set_target_properties(simpleexpand PROPERTIES FOLDER "examples")
set_target_properties(simpleindex PROPERTIES FOLDER "examples")
set_target_properties(simplesearch PROPERTIES FOLDER "examples")
set_target_properties(xapian-metadata PROPERTIES FOLDER "examples")
set_target_properties(xapian-pos PROPERTIES FOLDER "examples")
