
target_sources(libxapian PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/esetinternal.h
	${CMAKE_CURRENT_LIST_DIR}/expandweight.h
	${CMAKE_CURRENT_LIST_DIR}/ortermlist.h
	${CMAKE_CURRENT_LIST_DIR}/bo1eweight.cc
	${CMAKE_CURRENT_LIST_DIR}/esetinternal.cc
	${CMAKE_CURRENT_LIST_DIR}/expandweight.cc
	${CMAKE_CURRENT_LIST_DIR}/ortermlist.cc
	${CMAKE_CURRENT_LIST_DIR}/tradeweight.cc)
