
if( BUILD_BACKEND_REMOTE)
target_sources(libxapian 
	PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/remote-database.h
	${CMAKE_CURRENT_LIST_DIR}/remote-document.h
	${CMAKE_CURRENT_LIST_DIR}/net_postlist.h
	${CMAKE_CURRENT_LIST_DIR}/net_termlist.h
	${CMAKE_CURRENT_LIST_DIR}/remote-document.cc
	${CMAKE_CURRENT_LIST_DIR}/net_postlist.cc
	${CMAKE_CURRENT_LIST_DIR}/net_termlist.cc
	${CMAKE_CURRENT_LIST_DIR}/remote-database.cc)

endif()
