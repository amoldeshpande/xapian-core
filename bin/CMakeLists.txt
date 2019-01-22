SET(MY_CMAKE_CXX_FLAGS_DEBUG "${MY_CMAKE_CXX_FLAGS_DEBUG} -wd4996")
SET(MY_CMAKE_CXX_FLAGS_RELEASE "${MY_CMAKE_CXX_FLAGS_RELEASE} -wd4996")


add_executable(xapian-delve ${CMAKE_CURRENT_LIST_DIR}/xapian-delve.cc)
target_link_libraries(xapian-delve ${LIBRARY_DIR}/libxapian.lib ${LIBRARY_DIR}/libgetopt.lib ${EXTRA_LIBS})

if(BUILD_BACKEND_CHERT_OR_GLASS)
add_executable(xapian-check ${CMAKE_CURRENT_LIST_DIR}/xapian-check.cc)
add_executable(xapian-compact ${CMAKE_CURRENT_LIST_DIR}/xapian-compact.cc)
target_link_libraries(xapian-check ${LIBRARY_DIR}/libxapian.lib ${EXTRA_LIBS})
target_link_libraries(xapian-compact ${LIBRARY_DIR}/libxapian.lib ${LIBRARY_DIR}/libgetopt.lib ${EXTRA_LIBS})

if(BUILD_BACKEND_CHERT)
add_executable(xapian-inspect ${CMAKE_CURRENT_LIST_DIR}/xapian-inspect.cc)
SET(CMAKE_CXX_FLAGS_DEBUG "${MY_CMAKE_CXX_FLAGS_DEBUG} -DXAPIAN_REALLY_NO_DEBUG_LOG -I${PROJECT_SOURCE_DIR}/backends/glass" )
SET(CMAKE_CXX_FLAGS_RELEASE "${MY_CMAKE_CXX_FLAGS_RELEASE} -DXAPIAN_REALLY_NO_DEBUG_LOG -I${PROJECT_SOURCE_DIR}/backends/glass" )

target_sources(xapian-inspect
	PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/xapian-inspect.cc
	${CMAKE_SOURCE_DIR}/api/constinfo.cc
	${CMAKE_SOURCE_DIR}/api/error.cc
	${CMAKE_SOURCE_DIR}/backends/glass/glass_changes.cc
	${CMAKE_SOURCE_DIR}/backends/glass/glass_cursor.cc
	${CMAKE_SOURCE_DIR}/backends/glass/glass_freelist.cc
	${CMAKE_SOURCE_DIR}/backends/glass/glass_table.cc
	${CMAKE_SOURCE_DIR}/backends/glass/glass_version.cc
	${CMAKE_SOURCE_DIR}/backends/uuids.cc
	${CMAKE_SOURCE_DIR}/common/compression_stream.cc
	${CMAKE_SOURCE_DIR}/common/errno_to_string.cc
	${CMAKE_SOURCE_DIR}/common/io_utils.cc
	${CMAKE_SOURCE_DIR}/common/posixy_wrapper.cc
	${CMAKE_SOURCE_DIR}/common/str.cc
	${CMAKE_SOURCE_DIR}/unicode/description_append.cc
	${CMAKE_SOURCE_DIR}/unicode/unicode-data.cc
	${CMAKE_SOURCE_DIR}/unicode/utf8itor.cc)

target_link_libraries(xapian-inspect ${LIBRARY_DIR}/libxapian.lib ${LIBRARY_DIR}/libgetopt.lib ${EXTRA_LIBS})
endif()

endif()

if (BUILD_BACKEND_REMOTE)
	add_executable(xapian-progsrv ${CMAKE_CURRENT_LIST_DIR}/xapian-progsrv.cc)
	add_executable(xapian-replicate ${CMAKE_CURRENT_LIST_DIR}/xapian-replicate.cc)
	add_executable(xapian-replicate-server ${CMAKE_CURRENT_LIST_DIR}/xapian-replicate-server.cc)
	add_executable(xapian-tcpsrv ${CMAKE_CURRENT_LIST_DIR}/xapian-tcpsrv.cc)
	target_link_libraries(xapian-progsrv ${LIBRARY_DIR}/libxapian.lib ${LIBRARY_DIR}/libgetopt.lib ${EXTRA_LIBS})
	target_link_libraries(xapian-replicate ${LIBRARY_DIR}/libxapian.lib ${LIBRARY_DIR}/libgetopt.lib ${EXTRA_LIBS})
	target_link_libraries(xapian-replicate-server ${LIBRARY_DIR}/libxapian.lib ${LIBRARY_DIR}/libgetopt.lib ${EXTRA_LIBS})
	target_link_libraries(xapian-tcpsrv ${LIBRARY_DIR}/libxapian.lib ${LIBRARY_DIR}/libgetopt.lib ${EXTRA_LIBS})
endif()

set(DEBUG_LIBS ${VCPKG_BASE_DIR}/debug/lib/zlibd.lib)
set(RELEASE_LIBS ${VCPKG_BASE_DIR}/lib/zlib.lib)


target_link_libraries(xapian-delve debug  ${DEBUG_LIBS} ws2_32 rpcrt4.lib optimized  ${RELEASE_LIBS})
target_link_libraries(xapian-check debug  ${DEBUG_LIBS} ws2_32 rpcrt4.lib optimized  ${RELEASE_LIBS})
target_link_libraries(xapian-compact debug  ${DEBUG_LIBS} ws2_32 rpcrt4.lib optimized  ${RELEASE_LIBS})
target_link_libraries(xapian-inspect debug  ${DEBUG_LIBS} ws2_32 rpcrt4.lib optimized  ${RELEASE_LIBS})
target_link_libraries(xapian-progsrv debug  ${DEBUG_LIBS} ws2_32 rpcrt4.lib optimized  ${RELEASE_LIBS})
target_link_libraries(xapian-replicate debug  ${DEBUG_LIBS} ws2_32 rpcrt4.lib optimized  ${RELEASE_LIBS})
target_link_libraries(xapian-replicate-server debug  ${DEBUG_LIBS} ws2_32 rpcrt4.lib optimized  ${RELEASE_LIBS})
target_link_libraries(xapian-tcpsrv debug  ${DEBUG_LIBS} ws2_32 rpcrt4.lib optimized  ${RELEASE_LIBS})

add_dependencies(xapian-check libxapian)
add_dependencies(xapian-compact libxapian)
add_dependencies(xapian-delve libxapian)
add_dependencies(xapian-inspect libxapian)
add_dependencies(xapian-progsrv libxapian)
add_dependencies(xapian-replicate libxapian)
add_dependencies(xapian-replicate-server libxapian)
add_dependencies(xapian-tcpsrv libxapian)

set_target_properties(xapian-delve PROPERTIES FOLDER "bin")
set_target_properties(xapian-compact PROPERTIES FOLDER "bin")
set_target_properties(xapian-check PROPERTIES FOLDER "bin")
set_target_properties(xapian-inspect PROPERTIES FOLDER "bin")
set_target_properties(xapian-progsrv PROPERTIES FOLDER "bin")
set_target_properties(xapian-replicate PROPERTIES FOLDER "bin")
set_target_properties(xapian-replicate-server PROPERTIES FOLDER "bin")
set_target_properties(xapian-tcpsrv PROPERTIES FOLDER "bin")
