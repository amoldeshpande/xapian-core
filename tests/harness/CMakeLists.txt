
target_sources(testharness_sources
	PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/backendmanager.h
	${CMAKE_CURRENT_LIST_DIR}/backendmanager_chert.h
	${CMAKE_CURRENT_LIST_DIR}/backendmanager_glass.h
	${CMAKE_CURRENT_LIST_DIR}/backendmanager_inmemory.h
	${CMAKE_CURRENT_LIST_DIR}/backendmanager_local.h
	${CMAKE_CURRENT_LIST_DIR}/backendmanager_multi.h
	${CMAKE_CURRENT_LIST_DIR}/backendmanager_remote.h
	${CMAKE_CURRENT_LIST_DIR}/backendmanager_remoteprog.h
	${CMAKE_CURRENT_LIST_DIR}/backendmanager_remotetcp.h
	${CMAKE_CURRENT_LIST_DIR}/backendmanager_singlefile.h
	${CMAKE_CURRENT_LIST_DIR}/cputimer.h
	${CMAKE_CURRENT_LIST_DIR}/fdtracker.h
	${CMAKE_CURRENT_LIST_DIR}/index_utils.h
	${CMAKE_CURRENT_LIST_DIR}/unixcmds.h
	${CMAKE_CURRENT_LIST_DIR}/scalability.h
	${CMAKE_CURRENT_LIST_DIR}/testmacros.h
	${CMAKE_CURRENT_LIST_DIR}/testrunner.h
	${CMAKE_CURRENT_LIST_DIR}/testsuite.h
	${CMAKE_CURRENT_LIST_DIR}/testutils.h
	${PROJECT_SOURCE_DIR}/common/errno_to_string.cc
	${CMAKE_CURRENT_LIST_DIR}/backendmanager.cc
	${CMAKE_CURRENT_LIST_DIR}/backendmanager_multi.cc
	${CMAKE_CURRENT_LIST_DIR}/cputimer.cc
	${CMAKE_CURRENT_LIST_DIR}/fdtracker.cc
	${CMAKE_CURRENT_LIST_DIR}/index_utils.cc
	${CMAKE_CURRENT_LIST_DIR}/scalability.cc
	${CMAKE_CURRENT_LIST_DIR}/testrunner.cc
	${CMAKE_CURRENT_LIST_DIR}/testsuite.cc
	${CMAKE_CURRENT_LIST_DIR}/testutils.cc
	${CMAKE_CURRENT_LIST_DIR}/unixcmds.cc)


target_sources(utestharness_sources PRIVATE ${CMAKE_CURRENT_LIST_DIR}/fdtracker.cc ${CMAKE_CURRENT_LIST_DIR}/utestsuite.cc)

if(BUILD_BACKEND_CHERT)
target_sources(testharness_sources PRIVATE ${CMAKE_CURRENT_LIST_DIR}/backendmanager_chert.cc )
endif()

if(BUILD_BACKEND_GLASS)
target_sources(testharness_sources PRIVATE ${CMAKE_CURRENT_LIST_DIR}/backendmanager_glass.cc ${CMAKE_CURRENT_LIST_DIR}/backendmanager_singlefile.cc )
endif()

if(BUILD_BACKEND_INMEMORY)
target_sources(testharness_sources PRIVATE  ${CMAKE_CURRENT_LIST_DIR}/backendmanager_inmemory.cc)
endif()

if(BUILD_BACKEND_REMOTE)
target_sources(testharness_sources PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/backendmanager_remote.cc
	${CMAKE_CURRENT_LIST_DIR}/backendmanager_remoteprog.cc
	${CMAKE_CURRENT_LIST_DIR}/backendmanager_remotetcp.cc)
endif()

set_target_properties(testharness_sources PROPERTIES FOLDER "tests/harness")
set_target_properties(utestharness_sources PROPERTIES FOLDER "tests/harness")
