

target_sources(libxapian
	PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/multi_alltermslist.h
	${CMAKE_CURRENT_LIST_DIR}/multi_postlist.h
	${CMAKE_CURRENT_LIST_DIR}/multi_termlist.h
	${CMAKE_CURRENT_LIST_DIR}/multi_alltermslist.cc
	${CMAKE_CURRENT_LIST_DIR}/multi_postlist.cc
	${CMAKE_CURRENT_LIST_DIR}/multi_termlist.cc
	${CMAKE_CURRENT_LIST_DIR}/multi_valuelist.cc)
