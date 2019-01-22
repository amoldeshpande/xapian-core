
target_sources(libxapian
	PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/description_append.h
	${CMAKE_CURRENT_LIST_DIR}/description_append.cc
	${CMAKE_CURRENT_LIST_DIR}/unicode-data.cc
	${CMAKE_CURRENT_LIST_DIR}/utf8itor.cc)
