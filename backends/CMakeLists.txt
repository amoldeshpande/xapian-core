
target_sources(libxapian 
	PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/alltermslist.h
	${CMAKE_CURRENT_LIST_DIR}/backends.h
	${CMAKE_CURRENT_LIST_DIR}/byte_length_strings.h
	${CMAKE_CURRENT_LIST_DIR}/contiguousalldocspostlist.h
	${CMAKE_CURRENT_LIST_DIR}/database.h
	${CMAKE_CURRENT_LIST_DIR}/databasereplicator.h
	${CMAKE_CURRENT_LIST_DIR}/document.h
	${CMAKE_CURRENT_LIST_DIR}/flint_lock.h
	${CMAKE_CURRENT_LIST_DIR}/multivaluelist.h
	${CMAKE_CURRENT_LIST_DIR}/positionlist.h
	${CMAKE_CURRENT_LIST_DIR}/prefix_compressed_strings.h
	${CMAKE_CURRENT_LIST_DIR}/slowvaluelist.h
	${CMAKE_CURRENT_LIST_DIR}/uuids.h
	${CMAKE_CURRENT_LIST_DIR}/valuelist.h
	${CMAKE_CURRENT_LIST_DIR}/valuestats.h
	${CMAKE_CURRENT_LIST_DIR}/alltermslist.cc
	${CMAKE_CURRENT_LIST_DIR}/dbcheck.cc
	${CMAKE_CURRENT_LIST_DIR}/database.cc
	${CMAKE_CURRENT_LIST_DIR}/databasereplicator.cc
	${CMAKE_CURRENT_LIST_DIR}/dbfactory.cc
	${CMAKE_CURRENT_LIST_DIR}/slowvaluelist.cc
	${CMAKE_CURRENT_LIST_DIR}/uuids.cc
	${CMAKE_CURRENT_LIST_DIR}/valuelist.cc)

if (BUILD_BACKEND_REMOTE)
target_sources(libxapian 
	PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/dbfactory_remote.cc)
endif()

if (BUILD_BACKEND_CHERT)
target_sources(libxapian 
	PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/contiguousalldocspostlist.cc
	${CMAKE_CURRENT_LIST_DIR}/flint_lock.cc)
else()
if (BUILD_BACKEND_GLASS)
target_sources(libxapian 
	PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/contiguousalldocspostlist.cc
	${CMAKE_CURRENT_LIST_DIR}/flint_lock.cc)
endif()
endif()

# To add a new database backend:
#
# 1) Add lines to configure.ac to define the automake conditional
#    "BUILD_BACKEND_NEWONE" and add NEWONE to the "for backend in" loop.
# 2) Update include/xapian/version_h.cc to handle XAPIAN_HAS_NEWONE_BACKEND.
# 3) Add "include backends/newone/Makefile.mk" to the list below.
# 4) Write backends/newone/Makefile.mk - it should add files to noinst_HEADERS
#    and lib_src conditional on BUILD_BACKEND_NEWONE.
# 5) Update backends/dbfactory.cc.
# 6) If it needs to support replication, update backends/databasereplicator.cc
# 7) Write the backend code!

add_subdirectory(chert)
add_subdirectory(glass)
add_subdirectory(inmemory)
add_subdirectory(multi)
add_subdirectory(remote)
